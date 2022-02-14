
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int sa_data; } ;
struct net_device {int dev_addr; } ;
typedef int s32 ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*,void*) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;

__attribute__((used)) static s32 FUNC_4(struct net_device *VAR_1, void *VAR_2)
{
 struct sockaddr *VAR_3 = VAR_2;
 s32 VAR_4;

 if (FUNC_2(VAR_1))
  return -VAR_0;

 VAR_4 = FUNC_0(VAR_1, VAR_2);
 if (!VAR_4) {
  FUNC_1(VAR_1->dev_addr, VAR_3->sa_data);
  FUNC_3(VAR_1);
 }

 return VAR_4;
}
