
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cpsw_sl {int control_features; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cpsw_sl*,int ) ;
 int FUNC_1 (struct cpsw_sl*,int ,int) ;
 int FUNC_2 (int ,char*,int) ;

u32 FUNC_3(struct cpsw_sl *VAR_2, u32 VAR_3)
{
 u32 VAR_4;

 if (VAR_3 & ~VAR_2->control_features) {
  FUNC_2(VAR_2->dev, "cpsw_sl: unsupported func 0x%08X\n",
   VAR_3 & (~VAR_2->control_features));
  return -VAR_1;
 }

 VAR_4 = FUNC_0(VAR_2, VAR_0);
 VAR_4 |= VAR_3;
 FUNC_1(VAR_2, VAR_0, VAR_4);

 return 0;
}
