
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct net_device {int dummy; } ;
typedef int __le16 ;


 int VAR_0 ;
 int VAR_1 ;
 char FUNC_0 (int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_2, u16 VAR_3, void *VAR_4,
       int VAR_5)
{
 u16 VAR_6;
 __le16 *VAR_7;

 VAR_6 = (VAR_3 == 1) ? VAR_1 : VAR_0;
 VAR_7 = (__le16 *) VAR_4;

 for ( ; VAR_5 > 1; VAR_5 -= 2)
  *VAR_7++ = FUNC_1(VAR_6);

 if (VAR_5 & 1)
  *((char *) VAR_7) = FUNC_0(VAR_6);

 return 0;
}
