
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


 int FUNC_0 (int *,int ) ;
 struct fjes_adapter* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_0,
     __be16 VAR_1, u16 VAR_2)
{
 struct fjes_adapter *VAR_3 = FUNC_1(VAR_0);
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_3->hw.max_epid; VAR_4++) {
  if (VAR_4 == VAR_3->hw.my_epid)
   continue;

  FUNC_0(&VAR_3->hw.ep_shm_info[VAR_4].tx, VAR_2);
 }

 return 0;
}
