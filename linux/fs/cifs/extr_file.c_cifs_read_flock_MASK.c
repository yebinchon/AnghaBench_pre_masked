
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct file_lock {int fl_flags; scalar_t__ fl_type; } ;
struct TCP_Server_Info {TYPE_1__* vals; } ;
typedef int __u32 ;
struct TYPE_2__ {int shared_lock_type; int exclusive_lock_type; int unlock_lock_type; int large_lock_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_0 (int ,char*,...) ;

__attribute__((used)) static void
FUNC_1(struct file_lock *VAR_13, __u32 *VAR_14, int *VAR_15, int *VAR_16,
  bool *VAR_17, struct TCP_Server_Info *VAR_18)
{
 if (VAR_13->fl_flags & VAR_5)
  FUNC_0(VAR_7, "Posix\n");
 if (VAR_13->fl_flags & VAR_2)
  FUNC_0(VAR_7, "Flock\n");
 if (VAR_13->fl_flags & VAR_6) {
  FUNC_0(VAR_7, "Blocking lock\n");
  *VAR_17 = 1;
 }
 if (VAR_13->fl_flags & VAR_0)
  FUNC_0(VAR_7, "Process suspended by mandatory locking - not implemented yet\n");
 if (VAR_13->fl_flags & VAR_3)
  FUNC_0(VAR_7, "Lease on file - not implemented yet\n");
 if (VAR_13->fl_flags &
     (~(VAR_5 | VAR_2 | VAR_6 |
        VAR_0 | VAR_3 | VAR_1 | VAR_4)))
  FUNC_0(VAR_7, "Unknown lock flags 0x%x\n", VAR_13->fl_flags);

 *VAR_14 = VAR_18->vals->large_lock_type;
 if (VAR_13->fl_type == VAR_12) {
  FUNC_0(VAR_7, "F_WRLCK\n");
  *VAR_14 |= VAR_18->vals->exclusive_lock_type;
  *VAR_15 = 1;
 } else if (VAR_13->fl_type == VAR_11) {
  FUNC_0(VAR_7, "F_UNLCK\n");
  *VAR_14 |= VAR_18->vals->unlock_lock_type;
  *VAR_16 = 1;

 } else if (VAR_13->fl_type == VAR_9) {
  FUNC_0(VAR_7, "F_RDLCK\n");
  *VAR_14 |= VAR_18->vals->shared_lock_type;
  *VAR_15 = 1;
 } else if (VAR_13->fl_type == VAR_8) {
  FUNC_0(VAR_7, "F_EXLCK\n");
  *VAR_14 |= VAR_18->vals->exclusive_lock_type;
  *VAR_15 = 1;
 } else if (VAR_13->fl_type == VAR_10) {
  FUNC_0(VAR_7, "F_SHLCK\n");
  *VAR_14 |= VAR_18->vals->shared_lock_type;
  *VAR_15 = 1;
 } else
  FUNC_0(VAR_7, "Unknown type of lock\n");
}
