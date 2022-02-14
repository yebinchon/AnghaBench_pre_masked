
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct reset_controller_dev {int dummy; } ;
struct lantiq_rcu_reset_priv {int dev; int reset_offset; int regmap; } ;


 int FUNC_0 (unsigned int) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (struct reset_controller_dev*,unsigned long,int) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 struct lantiq_rcu_reset_priv* FUNC_4 (struct reset_controller_dev*) ;

__attribute__((used)) static int FUNC_5(struct reset_controller_dev *VAR_0,
       unsigned long VAR_1, bool VAR_2)
{
 struct lantiq_rcu_reset_priv *VAR_3 = FUNC_4(VAR_0);
 unsigned int VAR_4 = VAR_1 & 0x1f;
 u32 VAR_5 = VAR_2 ? FUNC_0(VAR_4) : 0;
 int VAR_6;

 VAR_6 = FUNC_3(VAR_3->regmap, VAR_3->reset_offset, FUNC_0(VAR_4),
     VAR_5);
 if (VAR_6) {
  FUNC_1(VAR_3->dev, "Failed to set reset bit %u\n", VAR_4);
  return VAR_6;
 }


 VAR_6 = FUNC_2(VAR_0, VAR_1, VAR_2);
 if (VAR_6)
  FUNC_1(VAR_3->dev, "Failed to %s bit %u\n",
   VAR_2 ? "assert" : "deassert", VAR_4);

 return VAR_6;
}
