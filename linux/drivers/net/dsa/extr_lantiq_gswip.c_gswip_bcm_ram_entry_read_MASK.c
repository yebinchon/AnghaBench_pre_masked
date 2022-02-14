
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct gswip_priv {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,int,int) ;
 int FUNC_2 (struct gswip_priv*,int,int,int ) ;
 int FUNC_3 (struct gswip_priv*,int ) ;
 int FUNC_4 (struct gswip_priv*,int ,int) ;
 int FUNC_5 (struct gswip_priv*,int,int ) ;

__attribute__((used)) static u32 FUNC_6(struct gswip_priv *VAR_5, u32 VAR_6,
        u32 VAR_7)
{
 u32 VAR_8;
 int VAR_9;

 FUNC_5(VAR_5, VAR_7, VAR_0);
 FUNC_2(VAR_5, VAR_2 |
    VAR_4,
         VAR_6 | VAR_3,
         VAR_1);

 VAR_9 = FUNC_4(VAR_5, VAR_1,
         VAR_3);
 if (VAR_9) {
  FUNC_1(VAR_5->dev, "timeout while reading table: %u, index: %u",
   VAR_6, VAR_7);
  return 0;
 }

 VAR_8 = FUNC_3(VAR_5, FUNC_0(0));
 VAR_8 |= FUNC_3(VAR_5, FUNC_0(1)) << 16;

 return VAR_8;
}
