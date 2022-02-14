
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath10k_snoc {struct ath10k_clk_info* clk; } ;
struct ath10k_clk_info {int handle; int name; } ;
struct ath10k {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct ath10k*,int ,char*,int ) ;
 struct ath10k_snoc* FUNC_2 (struct ath10k*) ;
 int VAR_1 ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct ath10k *VAR_2)
{
 struct ath10k_snoc *VAR_3 = FUNC_2(VAR_2);
 struct ath10k_clk_info *VAR_4;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_1); VAR_5++) {
  VAR_4 = &VAR_3->clk[VAR_5];

  if (!VAR_4->handle)
   continue;

  FUNC_1(VAR_2, VAR_0, "snoc clock %s being disabled\n",
      VAR_4->name);

  FUNC_3(VAR_4->handle);
 }

 return 0;
}
