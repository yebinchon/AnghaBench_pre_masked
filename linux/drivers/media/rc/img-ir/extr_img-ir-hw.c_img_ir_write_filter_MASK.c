
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct img_ir_priv {int dev; } ;
struct img_ir_filter {int data; int mask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (struct img_ir_priv*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct img_ir_priv *VAR_4,
    struct img_ir_filter *VAR_5)
{
 if (VAR_5) {
  FUNC_0(VAR_4->dev, "IR filter=%016llx & %016llx\n",
   (unsigned long long)VAR_5->data,
   (unsigned long long)VAR_5->mask);
  FUNC_1(VAR_4, VAR_0, (u32)VAR_5->data);
  FUNC_1(VAR_4, VAR_1, (u32)(VAR_5->data
         >> 32));
  FUNC_1(VAR_4, VAR_2, (u32)VAR_5->mask);
  FUNC_1(VAR_4, VAR_3, (u32)(VAR_5->mask
         >> 32));
 } else {
  FUNC_0(VAR_4->dev, "IR clearing filter\n");
  FUNC_1(VAR_4, VAR_2, 0);
  FUNC_1(VAR_4, VAR_3, 0);
 }
}
