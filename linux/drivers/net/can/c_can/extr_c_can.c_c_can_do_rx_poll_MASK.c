
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;
struct c_can_priv {int dummy; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct c_can_priv*) ;
 int FUNC_3 (struct net_device*,struct c_can_priv*,int,int) ;
 int FUNC_4 (struct net_device*,int ) ;
 struct c_can_priv* FUNC_5 (struct net_device*) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_2, int VAR_3)
{
 struct c_can_priv *VAR_4 = FUNC_5(VAR_2);
 u32 VAR_5 = 0, VAR_6 = 0, VAR_7, VAR_8;





 FUNC_0(VAR_1 > 16,
   "Implementation does not support more message objects than 16");

 while (VAR_3 > 0) {
  if (!VAR_6) {
   VAR_6 = FUNC_2(VAR_4);
   if (!VAR_6)
    break;




   VAR_7 = FUNC_1(VAR_6);
  } else {
   VAR_7 = VAR_6;
  }

  VAR_6 &= ~VAR_7;

  VAR_8 = FUNC_3(VAR_2, VAR_4, VAR_7, VAR_3);
  VAR_5 += VAR_8;
  VAR_3 -= VAR_8;
 }

 if (VAR_5)
  FUNC_4(VAR_2, VAR_0);

 return VAR_5;
}
