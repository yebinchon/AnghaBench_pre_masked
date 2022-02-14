
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct csio_qstatus_page {int dummy; } ;
struct csio_q {scalar_t__ vwrap; } ;
struct csio_hw {int dummy; } ;
struct TYPE_2__ {struct csio_q** q_arr; } ;


 TYPE_1__* FUNC_0 (struct csio_hw*) ;
 int FUNC_1 (struct csio_qstatus_page*,int ,int) ;

__attribute__((used)) static void
FUNC_2(struct csio_hw *VAR_0, int VAR_1)
{
 struct csio_q *VAR_2 = FUNC_0(VAR_0)->q_arr[VAR_1];
 struct csio_qstatus_page *VAR_3 = (struct csio_qstatus_page *)VAR_2->vwrap;

 FUNC_1(VAR_3, 0, sizeof(*VAR_3));
}
