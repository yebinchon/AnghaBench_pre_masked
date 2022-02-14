
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {scalar_t__ if_port; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*,char*,int ,char) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_1)
{
 FUNC_0(VAR_1, "%s, Port %c\n",
      VAR_0, (VAR_1->if_port == 0) ? 'A' : 'B');

}
