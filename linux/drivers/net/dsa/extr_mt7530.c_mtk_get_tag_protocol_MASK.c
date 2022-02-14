
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mt7530_priv {int dev; } ;
struct dsa_switch {struct mt7530_priv* priv; } ;
typedef enum dsa_tag_protocol { ____Placeholder_dsa_tag_protocol } dsa_tag_protocol ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;

__attribute__((used)) static enum dsa_tag_protocol
FUNC_1(struct dsa_switch *VAR_3, int VAR_4)
{
 struct mt7530_priv *VAR_5 = VAR_3->priv;

 if (VAR_4 != VAR_2) {
  FUNC_0(VAR_5->dev,
    "port not matched with tagging CPU port\n");
  return VAR_1;
 } else {
  return VAR_0;
 }
}
