
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct netsec_priv {int freq; } ;
struct mii_bus {struct netsec_priv* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct netsec_priv*,int ,int) ;
 scalar_t__ FUNC_2 (struct netsec_priv*,int ,int) ;
 int FUNC_3 (struct mii_bus*,int,int ) ;

__attribute__((used)) static int FUNC_4(struct mii_bus *VAR_9,
       int VAR_10, int VAR_11, u16 VAR_12)
{
 int VAR_13;
 struct netsec_priv *VAR_14 = VAR_9->priv;

 if (FUNC_2(VAR_14, VAR_2, VAR_12))
  return -VAR_0;
 if (FUNC_2(VAR_14, VAR_1,
        VAR_10 << VAR_8 |
        VAR_11 << VAR_7 |
        VAR_6 | VAR_5 |
        (FUNC_0(VAR_14->freq) <<
         VAR_3)))
  return -VAR_0;

 VAR_13 = FUNC_1(VAR_14, VAR_1,
         VAR_5);
 FUNC_3(VAR_9, VAR_10, VAR_4);

 return VAR_13;
}
