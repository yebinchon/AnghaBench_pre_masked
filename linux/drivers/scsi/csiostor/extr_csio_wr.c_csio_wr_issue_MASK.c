
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct csio_wrm {int free_qidx; struct csio_q** q_arr; } ;
struct TYPE_3__ {int physeqid; } ;
struct TYPE_4__ {TYPE_1__ eq; } ;
struct csio_q {scalar_t__ inc_idx; TYPE_2__ un; } ;
struct csio_hw {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ) ;
 int VAR_1 ;
 struct csio_wrm* FUNC_5 (struct csio_hw*) ;
 int FUNC_6 (struct csio_hw*,int,int ) ;
 int FUNC_7 () ;

int
FUNC_8(struct csio_hw *VAR_2, int VAR_3, bool VAR_4)
{
 struct csio_wrm *VAR_5 = FUNC_5(VAR_2);
 struct csio_q *VAR_6 = VAR_5->q_arr[VAR_3];

 FUNC_0((VAR_3 >= 0) && (VAR_3 < VAR_5->free_qidx));

 FUNC_7();

 FUNC_6(VAR_2, FUNC_1(VAR_4) | FUNC_4(VAR_6->un.eq.physeqid) |
     FUNC_3(VAR_6->inc_idx) | VAR_0,
     FUNC_2(VAR_1));
 VAR_6->inc_idx = 0;

 return 0;
}
