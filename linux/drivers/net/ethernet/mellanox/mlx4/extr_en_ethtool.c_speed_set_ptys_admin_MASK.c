
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mlx4_en_priv {int dummy; } ;
typedef int __be32 ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct mlx4_en_priv*,char*,int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static __be32 FUNC_4(struct mlx4_en_priv *VAR_0, u32 VAR_1,
       __be32 VAR_2)
{
 __be32 VAR_3 = 0;

 if (!VAR_1) {
  VAR_3 = VAR_2;
  FUNC_2(VAR_0, "Speed was set to 0, Reset advertised Link Modes to default (%x)\n",
   FUNC_0(VAR_2));
 } else {
  u32 VAR_4 = FUNC_3(VAR_1);

  VAR_3 = FUNC_1(VAR_4) & VAR_2;
  FUNC_2(VAR_0, "Setting Speed to %d\n", VAR_1);
 }
 return VAR_3;
}
