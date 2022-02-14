
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int * xpc_notify_func ;
typedef int u32 ;
typedef int u16 ;
struct xpc_partition {int nchannels; int * channels; } ;
typedef enum xp_retval { ____Placeholder_xp_retval } xp_retval ;
struct TYPE_2__ {int (* send_payload ) (int *,int ,void*,int ,int ,int *,void*) ;} ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,void*,short,int) ;
 int FUNC_2 (int *,int ,void*,int ,int ,int *,void*) ;
 int VAR_1 ;
 short VAR_2 ;
 TYPE_1__ VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (struct xpc_partition*) ;
 scalar_t__ FUNC_4 (struct xpc_partition*) ;
 struct xpc_partition* VAR_5 ;

enum xp_retval
FUNC_5(short VAR_6, int VAR_7, u32 VAR_8, void *VAR_9,
    u16 VAR_10, xpc_notify_func VAR_11, void *VAR_12)
{
 struct xpc_partition *VAR_13 = &VAR_5[VAR_6];
 enum xp_retval VAR_14 = VAR_1;

 FUNC_1(VAR_4, "payload=0x%p, partid=%d, channel=%d\n", VAR_9,
  VAR_6, VAR_7);

 FUNC_0(VAR_6 < 0 || VAR_6 >= VAR_2);
 FUNC_0(VAR_7 < 0 || VAR_7 >= VAR_13->nchannels);
 FUNC_0(VAR_9 == ((void*)0));
 FUNC_0(VAR_11 == ((void*)0));

 if (FUNC_4(VAR_13)) {
  VAR_14 = VAR_3.send_payload(&VAR_13->channels[VAR_7],
     VAR_8, VAR_9, VAR_10, VAR_0, VAR_11, VAR_12);
  FUNC_3(VAR_13);
 }
 return VAR_14;
}
