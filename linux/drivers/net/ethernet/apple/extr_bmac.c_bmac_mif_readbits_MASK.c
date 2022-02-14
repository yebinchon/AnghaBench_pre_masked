
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct net_device*,int ) ;
 int FUNC_1 (struct net_device*,int ,int) ;

__attribute__((used)) static unsigned int
FUNC_2(struct net_device *VAR_2, int VAR_3)
{
 unsigned int VAR_4 = 0;

 while (--VAR_3 >= 0) {
  FUNC_1(VAR_2, VAR_0, 0);
  VAR_1;
  if (FUNC_0(VAR_2, VAR_0) & 8)
   VAR_4 |= 1 << VAR_3;
  FUNC_1(VAR_2, VAR_0, 1);
  VAR_1;
 }
 FUNC_1(VAR_2, VAR_0, 0);
 VAR_1;
 FUNC_1(VAR_2, VAR_0, 1);
 VAR_1;
 return VAR_4;
}
