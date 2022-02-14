
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct adapter {int dummy; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 scalar_t__ FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct adapter*,char*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_3, char *VAR_4,
        int VAR_5)
{
 struct adapter *VAR_6 = (struct adapter *)FUNC_0(VAR_3);
 char *VAR_7 = VAR_4 + FUNC_2(VAR_2[VAR_0]) + 1;
 int VAR_8;

 VAR_8 = FUNC_1(VAR_6, VAR_7);
 return (VAR_8 == VAR_1) ? 0 : -1;
}
