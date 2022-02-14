
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct net_device*,char*) ;
 int FUNC_1 (struct net_device*,int ,int ,int ) ;
 int FUNC_2 (struct net_device*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_6)
{
 int VAR_7;


 FUNC_1(VAR_6, VAR_0, VAR_1, VAR_2);

 VAR_7 = FUNC_2(VAR_6, VAR_3, VAR_4, VAR_5);
 if (VAR_7)
  FUNC_0(VAR_6, "failed to switch device to config mode\n");

 return VAR_7;
}
