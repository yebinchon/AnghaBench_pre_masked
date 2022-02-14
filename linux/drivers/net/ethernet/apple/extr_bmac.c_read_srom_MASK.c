
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*,unsigned short) ;
 unsigned short FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*,int ,int ) ;

__attribute__((used)) static unsigned short
FUNC_3(struct net_device *VAR_1, unsigned int VAR_2, unsigned int VAR_3)
{
 unsigned short VAR_4, VAR_5;
 int VAR_6;


 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
  VAR_5 = VAR_2 >> (VAR_3-VAR_6-1);
  FUNC_0(VAR_1, VAR_5 & 1);
 }


 VAR_4 = 0;
 for (VAR_6 = 0; VAR_6 < 16; VAR_6++) {
  VAR_5 = FUNC_1(VAR_1);
  VAR_4 <<= 1;
  VAR_4 |= VAR_5;
 }
 FUNC_2(VAR_1, VAR_0, 0);

 return VAR_4;
}
