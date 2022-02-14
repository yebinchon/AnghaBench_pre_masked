
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct net_device {int dummy; } ;
struct TYPE_4__ {int max_epid; int my_epid; TYPE_1__* ep_shm_info; } ;
struct fjes_adapter {TYPE_2__ hw; } ;
typedef int __be16 ;
struct TYPE_3__ {int tx; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;
 struct fjes_adapter* FUNC_2 (struct net_device*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_1,
    __be16 VAR_2, u16 VAR_3)
{
 struct fjes_adapter *VAR_4 = FUNC_2(VAR_1);
 bool VAR_5 = 1;
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_4->hw.max_epid; VAR_6++) {
  if (VAR_6 == VAR_4->hw.my_epid)
   continue;

  if (!FUNC_0(
   &VAR_4->hw.ep_shm_info[VAR_6].tx, VAR_3))
   VAR_5 = FUNC_1(
    &VAR_4->hw.ep_shm_info[VAR_6].tx, VAR_3);
 }

 return VAR_5 ? 0 : -VAR_0;
}
