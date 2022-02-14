
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int dummy; } ;
struct cas {int reset_task; int reset_task_pending; int reset_task_pending_all; int * stat_lock; TYPE_1__* net_stats; int dev; } ;
struct TYPE_2__ {int rx_errors; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (struct net_device*,struct cas*,int) ;
 scalar_t__ FUNC_3 (struct net_device*,struct cas*,int) ;
 scalar_t__ FUNC_4 (struct net_device*,struct cas*,int) ;
 scalar_t__ FUNC_5 (struct net_device*,struct cas*,int) ;
 scalar_t__ FUNC_6 (struct net_device*,struct cas*,int) ;
 scalar_t__ FUNC_7 (struct net_device*,struct cas*,int) ;
 int FUNC_8 (struct net_device*,char*,...) ;
 int FUNC_9 (struct cas*,int ,int ,int ,char*) ;
 int VAR_10 ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static int FUNC_13(struct net_device *VAR_11, struct cas *VAR_12,
       u32 VAR_13)
{
 if (VAR_13 & VAR_7) {

  FUNC_9(VAR_12, VAR_10, VAR_9, VAR_12->dev,
        "corrupt rx tag framing\n");
  FUNC_11(&VAR_12->stat_lock[0]);
  VAR_12->net_stats[0].rx_errors++;
  FUNC_12(&VAR_12->stat_lock[0]);
  goto do_reset;
 }

 if (VAR_13 & VAR_5) {

  FUNC_9(VAR_12, VAR_10, VAR_9, VAR_12->dev,
        "length mismatch for rx frame\n");
  FUNC_11(&VAR_12->stat_lock[0]);
  VAR_12->net_stats[0].rx_errors++;
  FUNC_12(&VAR_12->stat_lock[0]);
  goto do_reset;
 }

 if (VAR_13 & VAR_4) {
  if (FUNC_5(VAR_11, VAR_12, VAR_13))
   goto do_reset;
 }

 if (VAR_13 & VAR_8) {
  if (FUNC_7(VAR_11, VAR_12, VAR_13))
   goto do_reset;
 }

 if (VAR_13 & VAR_6) {
  if (FUNC_6(VAR_11, VAR_12, VAR_13))
   goto do_reset;
 }

 if (VAR_13 & VAR_1) {
  if (FUNC_2(VAR_11, VAR_12, VAR_13))
   goto do_reset;
 }

 if (VAR_13 & VAR_2) {
  if (FUNC_3(VAR_11, VAR_12, VAR_13))
   goto do_reset;
 }

 if (VAR_13 & VAR_3) {
  if (FUNC_4(VAR_11, VAR_12, VAR_13))
   goto do_reset;
 }
 return 0;

do_reset:

 FUNC_0(&VAR_12->reset_task_pending);
 FUNC_0(&VAR_12->reset_task_pending_all);
 FUNC_8(VAR_11, "reset called in cas_abnormal_irq [0x%x]\n", VAR_13);
 FUNC_10(&VAR_12->reset_task);





 return 1;
}
