
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct reset_controller_dev {int dummy; } ;
struct lantiq_rcu_reset_priv {int status_offset; int regmap; } ;


 int FUNC_0 (unsigned int) ;
 int FUNC_1 (int ,int ,int*) ;
 struct lantiq_rcu_reset_priv* FUNC_2 (struct reset_controller_dev*) ;

__attribute__((used)) static int FUNC_3(struct reset_controller_dev *VAR_0,
       unsigned long VAR_1)
{
 struct lantiq_rcu_reset_priv *VAR_2 = FUNC_2(VAR_0);
 unsigned int VAR_3 = (VAR_1 >> 8) & 0x1f;
 u32 VAR_4;
 int VAR_5;

 VAR_5 = FUNC_1(VAR_2->regmap, VAR_2->status_offset, &VAR_4);
 if (VAR_5)
  return VAR_5;

 return !!(VAR_4 & FUNC_0(VAR_3));
}
