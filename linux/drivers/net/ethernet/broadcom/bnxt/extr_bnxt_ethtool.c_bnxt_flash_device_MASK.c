
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ethtool_flash {int region; int data; } ;
struct bnxt {int dummy; } ;


 int FUNC_0 (struct bnxt*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct net_device*,int,int ) ;
 int FUNC_2 (struct net_device*,int ,int) ;
 int FUNC_3 (struct net_device*,char*) ;
 scalar_t__ FUNC_4 (struct net_device*) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_2,
        struct ethtool_flash *VAR_3)
{
 if (!FUNC_0((struct bnxt *)FUNC_4(VAR_2))) {
  FUNC_3(VAR_2, "flashdev not supported from a virtual function\n");
  return -VAR_0;
 }

 if (VAR_3->region == VAR_1 ||
     VAR_3->region > 0xffff)
  return FUNC_2(VAR_2, VAR_3->data,
          VAR_3->region);

 return FUNC_1(VAR_2, VAR_3->region, VAR_3->data);
}
