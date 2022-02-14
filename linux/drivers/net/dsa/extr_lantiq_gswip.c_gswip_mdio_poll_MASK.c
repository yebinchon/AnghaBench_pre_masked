
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct gswip_priv {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct gswip_priv*,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static int FUNC_3(struct gswip_priv *VAR_3)
{
 int VAR_4 = 100;

 while (FUNC_1(VAR_4--)) {
  u32 VAR_5 = FUNC_0(VAR_3, VAR_1);

  if ((VAR_5 & VAR_2) == 0)
   return 0;
  FUNC_2(20, 40);
 }

 return -VAR_0;
}
