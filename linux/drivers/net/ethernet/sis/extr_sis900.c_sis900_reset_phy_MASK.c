
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct net_device*,int,int ) ;
 int FUNC_1 (struct net_device*,int,int ,int ) ;

__attribute__((used)) static u16 FUNC_2(struct net_device *VAR_3, int VAR_4)
{
 int VAR_5;
 u16 VAR_6;

 for (VAR_5 = 0; VAR_5 < 2; VAR_5++)
  VAR_6 = FUNC_0(VAR_3, VAR_4, VAR_2);

 FUNC_1( VAR_3, VAR_4, VAR_1, VAR_0 );

 return VAR_6;
}
