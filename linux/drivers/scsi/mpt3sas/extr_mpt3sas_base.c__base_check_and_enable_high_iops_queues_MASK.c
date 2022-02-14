
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct MPT3SAS_ADAPTER {scalar_t__ high_iops_queues; scalar_t__ is_aero_ioc; int pdev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int ,int ,int*) ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static void
FUNC_2(struct MPT3SAS_ADAPTER *VAR_10,
  int VAR_11)
{
 u16 VAR_12, VAR_13;

 if (VAR_8 == VAR_3 ||
     VAR_8 == VAR_4) {
  VAR_10->high_iops_queues = 0;
  return;
 }

 if (VAR_8 == VAR_2) {

  FUNC_1(VAR_10->pdev, VAR_5, &VAR_12);
  VAR_13 = VAR_12 & VAR_6;

  if (VAR_13 < 0x4) {
   VAR_10->high_iops_queues = 0;
   return;
  }
 }

 if (!VAR_9 && VAR_10->is_aero_ioc &&
     VAR_11 == VAR_0 &&
     FUNC_0() >= VAR_1 &&
     VAR_7 == -1)
  VAR_10->high_iops_queues = VAR_1;
 else
  VAR_10->high_iops_queues = 0;
}
