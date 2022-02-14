
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xpc_partition {int nchannels; struct xpc_channel* channels; } ;
struct xpc_channel {int lock; } ;
typedef enum xp_retval { ____Placeholder_xp_retval } xp_retval ;


 int FUNC_0 (struct xpc_channel*,int,unsigned long*) ;
 int FUNC_1 (struct xpc_partition*) ;
 int FUNC_2 (int ,char*,int ,int) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int VAR_0 ;
 int FUNC_5 (struct xpc_channel*) ;
 int FUNC_6 (struct xpc_channel*) ;
 int FUNC_7 (struct xpc_partition*) ;
 int FUNC_8 (struct xpc_partition*) ;
 int FUNC_9 (struct xpc_partition*) ;

void
FUNC_10(struct xpc_partition *VAR_1, enum xp_retval VAR_2)
{
 unsigned long VAR_3;
 int VAR_4;
 struct xpc_channel *VAR_5;

 FUNC_2(VAR_0, "deactivating partition %d, reason=%d\n",
  FUNC_1(VAR_1), VAR_2);

 if (!FUNC_8(VAR_1)) {

  return;
 }



 for (VAR_4 = 0; VAR_4 < VAR_1->nchannels; VAR_4++) {
  VAR_5 = &VAR_1->channels[VAR_4];

  FUNC_6(VAR_5);
  FUNC_3(&VAR_5->lock, VAR_3);

  FUNC_0(VAR_5, VAR_2, &VAR_3);

  FUNC_4(&VAR_5->lock, VAR_3);
  FUNC_5(VAR_5);
 }

 FUNC_9(VAR_1);

 FUNC_7(VAR_1);
}
