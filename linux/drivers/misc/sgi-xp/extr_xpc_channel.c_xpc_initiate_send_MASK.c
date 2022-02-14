
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct xpc_partition {int nchannels; int * channels; } ;
typedef enum xp_retval { ____Placeholder_xp_retval } xp_retval ;
struct TYPE_2__ {int (* send_payload ) (int *,int ,void*,int ,int ,int *,int *) ;} ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,void*,short,int) ;
 int FUNC_2 (int *,int ,void*,int ,int ,int *,int *) ;
 int VAR_0 ;
 short VAR_1 ;
 TYPE_1__ VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct xpc_partition*) ;
 scalar_t__ FUNC_4 (struct xpc_partition*) ;
 struct xpc_partition* VAR_4 ;

enum xp_retval
FUNC_5(short VAR_5, int VAR_6, u32 VAR_7, void *VAR_8,
    u16 VAR_9)
{
 struct xpc_partition *VAR_10 = &VAR_4[VAR_5];
 enum xp_retval VAR_11 = VAR_0;

 FUNC_1(VAR_3, "payload=0x%p, partid=%d, channel=%d\n", VAR_8,
  VAR_5, VAR_6);

 FUNC_0(VAR_5 < 0 || VAR_5 >= VAR_1);
 FUNC_0(VAR_6 < 0 || VAR_6 >= VAR_10->nchannels);
 FUNC_0(VAR_8 == ((void*)0));

 if (FUNC_4(VAR_10)) {
  VAR_11 = VAR_2.send_payload(&VAR_10->channels[VAR_6],
      VAR_7, VAR_8, VAR_9, 0, ((void*)0), ((void*)0));
  FUNC_3(VAR_10);
 }

 return VAR_11;
}
