
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {scalar_t__* dev_addr; int mtu; } ;
struct net_dev_context {int is_mamac; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct net_device*,void*) ;
 struct net_dev_context* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_2, void *VAR_3)
{
 struct net_dev_context *VAR_4 = FUNC_1(VAR_2);
 int VAR_5 = FUNC_0(VAR_2, VAR_3);

 if (VAR_5)
  return VAR_5;

 VAR_4->is_mamac =
  (VAR_2->dev_addr[0] == 0 && VAR_2->dev_addr[1] == 0 &&
   VAR_2->dev_addr[2] == 0 && VAR_2->dev_addr[3] == 0);





 VAR_2->mtu = VAR_4->is_mamac ? VAR_1 : VAR_0;

 return 0;
}
