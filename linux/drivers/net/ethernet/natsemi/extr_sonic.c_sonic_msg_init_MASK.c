
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sonic_local {int msg_enable; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 struct sonic_local* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct sonic_local*,int ,struct net_device*,char*,int ) ;
 int FUNC_2 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_4)
{
 struct sonic_local *VAR_5 = FUNC_0(VAR_4);

 VAR_5->msg_enable = FUNC_2(VAR_1, 0);

 if (VAR_3++ == 0)
  FUNC_1(VAR_5, VAR_0, VAR_4, "%s", VAR_2);
}
