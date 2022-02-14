
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct uic_command {scalar_t__ argument3; int command; } ;
struct ufs_hba {int uic_cmd_mutex; TYPE_1__* host; struct completion* uic_async_done; int * active_uic_cmd; int dev; } ;
struct completion {int dummy; } ;
struct TYPE_2__ {int host_lock; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct ufs_hba*,struct uic_command*,int) ;
 int FUNC_1 (int ,char*,int ,scalar_t__,...) ;
 int FUNC_2 (struct completion*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,unsigned long) ;
 int FUNC_7 (int ,unsigned long) ;
 int FUNC_8 (struct ufs_hba*) ;
 int FUNC_9 (struct ufs_hba*,int) ;
 int FUNC_10 (struct ufs_hba*,int) ;
 scalar_t__ FUNC_11 (struct ufs_hba*) ;
 int FUNC_12 (struct ufs_hba*) ;
 int FUNC_13 (struct ufs_hba*) ;
 int FUNC_14 (struct ufs_hba*) ;
 int FUNC_15 (struct ufs_hba*,int ) ;
 int FUNC_16 (struct completion*,int ) ;
 int FUNC_17 () ;

__attribute__((used)) static int FUNC_18(struct ufs_hba *VAR_6, struct uic_command *VAR_7)
{
 struct completion VAR_8;
 unsigned long VAR_9;
 u8 VAR_10;
 int VAR_11;
 bool VAR_12 = 0;

 FUNC_4(&VAR_6->uic_cmd_mutex);
 FUNC_2(&VAR_8);
 FUNC_8(VAR_6);

 FUNC_6(VAR_6->host->host_lock, VAR_9);
 VAR_6->uic_async_done = &VAR_8;
 if (FUNC_15(VAR_6, VAR_3) & VAR_5) {
  FUNC_9(VAR_6, VAR_5);




  FUNC_17();
  VAR_12 = 1;
 }
 VAR_11 = FUNC_0(VAR_6, VAR_7, 0);
 FUNC_7(VAR_6->host->host_lock, VAR_9);
 if (VAR_11) {
  FUNC_1(VAR_6->dev,
   "pwr ctrl cmd 0x%x with mode 0x%x uic error %d\n",
   VAR_7->command, VAR_7->argument3, VAR_11);
  goto out;
 }

 if (!FUNC_16(VAR_6->uic_async_done,
      FUNC_3(VAR_4))) {
  FUNC_1(VAR_6->dev,
   "pwr ctrl cmd 0x%x with mode 0x%x completion timeout\n",
   VAR_7->command, VAR_7->argument3);
  VAR_11 = -VAR_0;
  goto out;
 }

 VAR_10 = FUNC_11(VAR_6);
 if (VAR_10 != VAR_1) {
  FUNC_1(VAR_6->dev,
   "pwr ctrl cmd 0x%x failed, host upmcrs:0x%x\n",
   VAR_7->command, VAR_10);
  VAR_11 = (VAR_10 != VAR_2) ? VAR_10 : -1;
 }
out:
 if (VAR_11) {
  FUNC_13(VAR_6);
  FUNC_14(VAR_6);
  FUNC_12(VAR_6);
 }

 FUNC_6(VAR_6->host->host_lock, VAR_9);
 VAR_6->active_uic_cmd = ((void*)0);
 VAR_6->uic_async_done = ((void*)0);
 if (VAR_12)
  FUNC_10(VAR_6, VAR_5);
 FUNC_7(VAR_6->host->host_lock, VAR_9);
 FUNC_5(&VAR_6->uic_cmd_mutex);

 return VAR_11;
}
