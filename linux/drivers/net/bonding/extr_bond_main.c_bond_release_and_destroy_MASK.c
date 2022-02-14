
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int priv_flags; } ;
struct bonding {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*,struct net_device*,int,int) ;
 int FUNC_1 (struct bonding*) ;
 int FUNC_2 (struct bonding*) ;
 int FUNC_3 (struct net_device*,char*) ;
 struct bonding* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_1,
        struct net_device *VAR_2)
{
 struct bonding *VAR_3 = FUNC_4(VAR_1);
 int VAR_4;

 VAR_4 = FUNC_0(VAR_1, VAR_2, 0, 1);
 if (VAR_4 == 0 && !FUNC_1(VAR_3)) {
  VAR_1->priv_flags |= VAR_0;
  FUNC_3(VAR_1, "Destroying bond\n");
  FUNC_2(VAR_3);
  FUNC_5(VAR_1);
 }
 return VAR_4;
}
