
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xpc_channel {int flags; int partid; int number; int lock; } ;
typedef enum xp_retval { ____Placeholder_xp_retval } xp_retval ;
struct TYPE_2__ {int (* setup_msg_structures ) (struct xpc_channel*) ;int (* send_chctl_opencomplete ) (struct xpc_channel*,unsigned long*) ;int (* send_chctl_openreply ) (struct xpc_channel*,unsigned long*) ;} ;


 int FUNC_0 (int) ;
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
 int FUNC_1 (struct xpc_channel*,int,unsigned long*) ;
 int FUNC_2 (int ,char*,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (struct xpc_channel*) ;
 int FUNC_7 (struct xpc_channel*,unsigned long*) ;
 int FUNC_8 (struct xpc_channel*,unsigned long*) ;
 int VAR_10 ;
 TYPE_1__ VAR_11 ;
 int VAR_12 ;

__attribute__((used)) static void
FUNC_9(struct xpc_channel *VAR_13, unsigned long *VAR_14)
{
 enum xp_retval VAR_15;

 FUNC_3(&VAR_13->lock);

 if (!(VAR_13->flags & VAR_5) ||
     !(VAR_13->flags & VAR_8)) {

  return;
 }
 FUNC_0(!(VAR_13->flags & VAR_1));

 if (!(VAR_13->flags & VAR_9)) {
  FUNC_5(&VAR_13->lock, *VAR_14);
  VAR_15 = VAR_11.setup_msg_structures(VAR_13);
  FUNC_4(&VAR_13->lock, *VAR_14);

  if (VAR_15 != VAR_10)
   FUNC_1(VAR_13, VAR_15, VAR_14);
  else
   VAR_13->flags |= VAR_9;

  if (VAR_13->flags & VAR_2)
   return;
 }

 if (!(VAR_13->flags & VAR_4)) {
  VAR_13->flags |= VAR_4;
  VAR_11.send_chctl_openreply(VAR_13, VAR_14);
 }

 if (!(VAR_13->flags & VAR_7))
  return;

 if (!(VAR_13->flags & VAR_3)) {
  VAR_13->flags |= (VAR_3 | VAR_0);
  VAR_11.send_chctl_opencomplete(VAR_13, VAR_14);
 }

 if (!(VAR_13->flags & VAR_6))
  return;

 FUNC_2(VAR_12, "channel %d to partition %d connected\n",
   VAR_13->number, VAR_13->partid);

 VAR_13->flags = (VAR_0 | VAR_9);
}
