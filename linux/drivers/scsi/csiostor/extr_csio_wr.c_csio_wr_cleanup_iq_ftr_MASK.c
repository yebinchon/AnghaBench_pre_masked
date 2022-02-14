
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef uintptr_t uint32_t ;
struct csio_wrm {struct csio_q** q_arr; } ;
struct TYPE_3__ {int genbit; } ;
struct TYPE_4__ {TYPE_1__ iq; } ;
struct csio_q {uintptr_t credits; uintptr_t wr_sz; scalar_t__ vstart; TYPE_2__ un; } ;
struct csio_iqwr_footer {int dummy; } ;
struct csio_hw {int dummy; } ;


 struct csio_wrm* FUNC_0 (struct csio_hw*) ;
 int FUNC_1 (struct csio_iqwr_footer*,int ,int) ;

__attribute__((used)) static void
FUNC_2(struct csio_hw *VAR_0, int VAR_1)
{
 struct csio_wrm *VAR_2 = FUNC_0(VAR_0);
 struct csio_q *VAR_3 = VAR_2->q_arr[VAR_1];
 void *VAR_4;
 struct csio_iqwr_footer *VAR_5;
 uint32_t VAR_6 = 0;


 VAR_3->un.iq.genbit = 1;

 for (VAR_6 = 0; VAR_6 < VAR_3->credits; VAR_6++) {

  VAR_4 = (void *)((uintptr_t)VAR_3->vstart +
        (VAR_6 * VAR_3->wr_sz));

  VAR_5 = (struct csio_iqwr_footer *)((uintptr_t)VAR_4 +
       (VAR_3->wr_sz - sizeof(*VAR_5)));

  FUNC_1(VAR_5, 0, sizeof(*VAR_5));
 }
}
