
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct netsec_priv {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct netsec_priv*,int ) ;
 int FUNC_1 (struct netsec_priv*,int ,int ) ;
 int FUNC_2 (struct netsec_priv*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct netsec_priv *VAR_4, u32 VAR_5, u32 *VAR_6)
{
 int VAR_7;

 FUNC_2(VAR_4, VAR_0, VAR_5 | VAR_3);
 VAR_7 = FUNC_1(VAR_4,
         VAR_0, VAR_2);
 if (VAR_7)
  return VAR_7;

 *VAR_6 = FUNC_0(VAR_4, VAR_1);

 return 0;
}
