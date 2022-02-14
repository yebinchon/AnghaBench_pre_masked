
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct clk {int dummy; } ;
struct ath10k_clk_info {int freq; struct clk* handle; int name; scalar_t__ required; } ;
struct ath10k {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct clk*) ;
 int FUNC_1 (struct clk*) ;
 int FUNC_2 (struct ath10k*,int ,char*,int ,int) ;
 int FUNC_3 (struct ath10k*,char*,int ,int) ;
 struct clk* FUNC_4 (struct device*,int ) ;

__attribute__((used)) static int FUNC_5(struct ath10k *VAR_1, struct device *VAR_2,
          struct ath10k_clk_info *VAR_3)
{
 struct clk *VAR_4;
 int VAR_5 = 0;

 VAR_4 = FUNC_4(VAR_2, VAR_3->name);
 if (FUNC_0(VAR_4)) {
  VAR_5 = FUNC_1(VAR_4);
  if (VAR_3->required) {
   FUNC_3(VAR_1, "snoc clock %s isn't available: %d\n",
       VAR_3->name, VAR_5);
   return VAR_5;
  }
  FUNC_2(VAR_1, VAR_0, "snoc ignoring clock %s: %d\n",
      VAR_3->name,
      VAR_5);
  return 0;
 }

 FUNC_2(VAR_1, VAR_0, "snoc clock %s freq %u\n",
     VAR_3->name, VAR_3->freq);

 VAR_3->handle = VAR_4;

 return VAR_5;
}
