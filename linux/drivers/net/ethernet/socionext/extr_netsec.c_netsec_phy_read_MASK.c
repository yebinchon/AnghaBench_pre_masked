
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct netsec_priv {int freq; } ;
struct mii_bus {struct netsec_priv* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct netsec_priv*,int ,int*) ;
 int FUNC_2 (struct netsec_priv*,int ,int) ;
 scalar_t__ FUNC_3 (struct netsec_priv*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct mii_bus *VAR_7, int VAR_8, int VAR_9)
{
 struct netsec_priv *VAR_10 = VAR_7->priv;
 u32 VAR_11;
 int VAR_12;

 if (FUNC_3(VAR_10, VAR_1, VAR_4 |
        VAR_8 << VAR_6 |
        VAR_9 << VAR_5 |
        (FUNC_0(VAR_10->freq) <<
         VAR_3)))
  return -VAR_0;

 VAR_12 = FUNC_2(VAR_10, VAR_1,
      VAR_4);
 if (VAR_12)
  return VAR_12;

 VAR_12 = FUNC_1(VAR_10, VAR_2, &VAR_11);
 if (VAR_12)
  return VAR_12;

 return VAR_11;
}
