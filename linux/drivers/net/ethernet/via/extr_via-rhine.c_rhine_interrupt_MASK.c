
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rhine_private {int napi; } ;
struct net_device {int dummy; } ;
typedef int irqreturn_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 struct rhine_private* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct rhine_private*,int ,struct net_device*,char*,int) ;
 int FUNC_4 (struct rhine_private*,int ,struct net_device*,char*,int) ;
 int FUNC_5 (struct rhine_private*) ;
 int FUNC_6 (struct rhine_private*) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_5, void *VAR_6)
{
 struct net_device *VAR_7 = VAR_6;
 struct rhine_private *VAR_8 = FUNC_2(VAR_7);
 u32 VAR_9;
 int VAR_10 = 0;

 VAR_9 = FUNC_5(VAR_8);

 FUNC_3(VAR_8, VAR_4, VAR_7, "Interrupt, status %08x\n", VAR_9);

 if (VAR_9 & VAR_2) {
  VAR_10 = 1;

  FUNC_6(VAR_8);
  FUNC_1(&VAR_8->napi);
 }

 if (VAR_9 & ~(VAR_0 | VAR_1 | VAR_3)) {
  FUNC_4(VAR_8, VAR_4, VAR_7, "Something Wicked happened! %08x\n",
     VAR_9);
 }

 return FUNC_0(VAR_10);
}
