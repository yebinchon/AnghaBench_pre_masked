
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rndis_device {int ndev; } ;
struct netvsc_device {int dummy; } ;
struct net_device_context {int speed; } ;


 int VAR_0 ;
 struct net_device_context* FUNC_0 (int ) ;
 int FUNC_1 (struct rndis_device*,struct netvsc_device*,int ,int*,int*) ;

__attribute__((used)) static int FUNC_2(struct rndis_device *VAR_1,
      struct netvsc_device *VAR_2)
{
 u32 VAR_3 = sizeof(u32);
 u32 VAR_4;
 struct net_device_context *VAR_5;
 int VAR_6;

 VAR_6 = FUNC_1(VAR_1, VAR_2,
     VAR_0,
     &VAR_4, &VAR_3);

 if (!VAR_6) {
  VAR_5 = FUNC_0(VAR_1->ndev);




  VAR_5->speed = VAR_4 / 10000;
 }

 return VAR_6;
}
