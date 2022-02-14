
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;


 int VAR_0 ;
 unsigned short FUNC_0 (struct net_device*,int,int ) ;
 int FUNC_1 (struct net_device*) ;

__attribute__((used)) static int
FUNC_2(struct net_device *VAR_1)
{
 unsigned short VAR_2, VAR_3;

 FUNC_1(VAR_1);
 VAR_2 = FUNC_0(VAR_1, 3, VAR_0);
 VAR_3 = ((VAR_2 >> 8) & 0x0ff) | ((VAR_2 << 8) & 0xff00);

 return 0;
}
