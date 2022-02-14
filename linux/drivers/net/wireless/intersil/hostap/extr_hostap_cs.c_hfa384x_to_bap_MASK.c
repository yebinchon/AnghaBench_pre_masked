
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char,int) ;
 int FUNC_1 (int,void*,int) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_2, u16 VAR_3, void *VAR_4, int VAR_5)
{
 u16 VAR_6;
 u16 *VAR_7;

 VAR_6 = (VAR_3 == 1) ? VAR_1 : VAR_0;
 VAR_7 = (u16 *) VAR_4;

 if (VAR_5 / 2)
  FUNC_1(VAR_6, VAR_4, VAR_5 / 2);
 VAR_7 += VAR_5 / 2;

 if (VAR_5 & 1)
  FUNC_0(*((char *) VAR_7), VAR_6);

 return 0;
}
