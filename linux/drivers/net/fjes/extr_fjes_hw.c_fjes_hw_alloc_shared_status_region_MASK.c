
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {TYPE_2__* share; } ;
struct fjes_hw {int max_epid; TYPE_1__ hw_info; } ;
struct fjes_device_shared_info {int dummy; } ;
struct TYPE_4__ {int epnum; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_0 (size_t,int ) ;

__attribute__((used)) static int FUNC_1(struct fjes_hw *VAR_2)
{
 size_t VAR_3;

 VAR_3 = sizeof(struct fjes_device_shared_info) +
     (sizeof(u8) * VAR_2->max_epid);
 VAR_2->hw_info.share = FUNC_0(VAR_3, VAR_1);
 if (!VAR_2->hw_info.share)
  return -VAR_0;

 VAR_2->hw_info.share->epnum = VAR_2->max_epid;

 return 0;
}
