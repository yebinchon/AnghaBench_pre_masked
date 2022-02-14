
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {int partition_handle; } ;
struct visorchannel {TYPE_1__ chan_hdr; } ;



u64 FUNC_0(struct visorchannel *VAR_0)
{
 return VAR_0->chan_hdr.partition_handle;
}
