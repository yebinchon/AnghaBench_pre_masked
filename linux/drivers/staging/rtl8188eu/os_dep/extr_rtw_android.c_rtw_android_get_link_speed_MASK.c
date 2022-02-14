
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct net_device {int dummy; } ;
struct adapter {int dummy; } ;


 int FUNC_0 (struct adapter*) ;
 scalar_t__ FUNC_1 (struct net_device*) ;
 int FUNC_2 (char*,int,char*,int) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_0, char *VAR_1,
          int VAR_2)
{
 struct adapter *VAR_3 = (struct adapter *)FUNC_1(VAR_0);
 u16 VAR_4;

 VAR_4 = FUNC_0(VAR_3) / 10;
 return FUNC_2(VAR_1, VAR_2, "LinkSpeed %d",
     VAR_4);
}
