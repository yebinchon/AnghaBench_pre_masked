
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ (* in_nway ) (struct r8152*) ;} ;
struct TYPE_3__ {int work; } ;
struct r8152 {int tx_queue; TYPE_2__ rtl_ops; TYPE_1__ schedule; int netdev; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct r8152*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct r8152*) ;
 scalar_t__ FUNC_4 (int *) ;

__attribute__((used)) static bool FUNC_5(struct r8152 *VAR_1)
{
 bool VAR_2 = !!FUNC_0(VAR_1->netdev);
 bool VAR_3 = !!(FUNC_1(VAR_1) & VAR_0);





 if (FUNC_4(&VAR_1->schedule.work) || VAR_2 != VAR_3)
  return 1;




 if (!VAR_2 && VAR_1->rtl_ops.in_nway(VAR_1))
  return 1;
 else if (!FUNC_2(&VAR_1->tx_queue))
  return 1;
 else
  return 0;
}
