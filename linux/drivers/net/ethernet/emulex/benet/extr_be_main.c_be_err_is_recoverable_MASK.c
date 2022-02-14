
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct be_error_recovery {int last_err_code; scalar_t__ last_recovery_time; scalar_t__ probe_time; } ;
struct be_adapter {TYPE_1__* pdev; struct be_error_recovery error_recovery; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct be_adapter*) ;
 int FUNC_1 (int *,char*,...) ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (unsigned long) ;
 unsigned long FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (scalar_t__,unsigned long) ;

__attribute__((used)) static bool FUNC_5(struct be_adapter *VAR_6)
{
 struct be_error_recovery *VAR_7 = &VAR_6->error_recovery;
 unsigned long VAR_8 =
  FUNC_3(VAR_0);
 unsigned long VAR_9 =
  FUNC_3(VAR_1);
 u16 VAR_10;
 u32 VAR_11;

 VAR_11 = FUNC_0(VAR_6);
 if ((VAR_11 & VAR_4) != VAR_4)
  return 0;
 VAR_10 = VAR_11 & VAR_3;
 if (VAR_10 == 0)
  return 0;

 FUNC_1(&VAR_6->pdev->dev, "Recoverable HW error code: 0x%x\n",
  VAR_10);

 if (FUNC_4(VAR_5 - VAR_7->probe_time, VAR_8)) {
  FUNC_1(&VAR_6->pdev->dev,
   "Cannot recover within %lu sec from driver load\n",
   FUNC_2(VAR_8) / VAR_2);
  return 0;
 }

 if (VAR_7->last_recovery_time && FUNC_4(
  VAR_5 - VAR_7->last_recovery_time, VAR_9)) {
  FUNC_1(&VAR_6->pdev->dev,
   "Cannot recover within %lu sec from last recovery\n",
   FUNC_2(VAR_9) / VAR_2);
  return 0;
 }

 if (VAR_10 == VAR_7->last_err_code) {
  FUNC_1(&VAR_6->pdev->dev,
   "Cannot recover from a consecutive TPE error\n");
  return 0;
 }

 VAR_7->last_recovery_time = VAR_5;
 VAR_7->last_err_code = VAR_10;
 return 1;
}
