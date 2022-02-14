
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char u32 ;
struct emac_priv {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct emac_priv*,char,char*) ;
 int FUNC_1 (int ,char) ;

__attribute__((used)) static void FUNC_2(struct emac_priv *VAR_3, u32 VAR_4, char *VAR_5)
{
 u32 VAR_6;
 FUNC_1(VAR_2, VAR_4);
 VAR_6 = ((VAR_5[5] << 8) | VAR_5[4]);
 FUNC_1(VAR_1, VAR_6);
 VAR_6 = ((VAR_5[3] << 24) | (VAR_5[2] << 16) | (VAR_5[1] << 8) | (VAR_5[0]));

 FUNC_1(VAR_0, VAR_6);
 FUNC_0(VAR_3, VAR_4, VAR_5);
}
