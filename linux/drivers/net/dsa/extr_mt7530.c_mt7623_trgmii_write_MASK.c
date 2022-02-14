
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mt7530_priv {int dev; int ethernet; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static int
FUNC_3(struct mt7530_priv *VAR_0, u32 VAR_1, u32 VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_2(VAR_0->ethernet, FUNC_0(VAR_1), VAR_2);
 if (VAR_3 < 0)
  FUNC_1(VAR_0->dev,
   "failed to priv write register\n");
 return VAR_3;
}
