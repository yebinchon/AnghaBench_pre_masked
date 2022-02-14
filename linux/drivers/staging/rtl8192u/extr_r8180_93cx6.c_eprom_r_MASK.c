
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct net_device*,int ,int*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static short FUNC_2(struct net_device *VAR_3)
{
 u8 VAR_4;
 int VAR_5;

 VAR_5 = FUNC_0(VAR_3, VAR_0, &VAR_4);
 if (VAR_5)
  return VAR_5;

 FUNC_1(VAR_1);

 if (VAR_4 & VAR_2)
  return 1;

 return 0;
}
