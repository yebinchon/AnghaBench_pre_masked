
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int ale_entries; } ;
struct cpsw_common {TYPE_1__ data; } ;


 int VAR_0 ;
 struct cpsw_common* FUNC_0 (struct net_device*) ;

int FUNC_1(struct net_device *VAR_1)
{
 struct cpsw_common *VAR_2 = FUNC_0(VAR_1);

 return VAR_2->data.ale_entries * VAR_0 * sizeof(u32);
}
