
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath10k_snoc {struct ath10k_clk_info* clk; } ;
struct ath10k_clk_info {int handle; int name; scalar_t__ freq; } ;
struct ath10k {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct ath10k*,int ,char*,int ) ;
 int FUNC_2 (struct ath10k*,char*,int ,...) ;
 struct ath10k_snoc* FUNC_3 (struct ath10k*) ;
 int VAR_1 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct ath10k *VAR_2)
{
 struct ath10k_snoc *VAR_3 = FUNC_3(VAR_2);
 struct ath10k_clk_info *VAR_4;
 int VAR_5 = 0;
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_1); VAR_6++) {
  VAR_4 = &VAR_3->clk[VAR_6];

  if (!VAR_4->handle)
   continue;

  FUNC_1(VAR_2, VAR_0, "snoc clock %s being enabled\n",
      VAR_4->name);

  if (VAR_4->freq) {
   VAR_5 = FUNC_6(VAR_4->handle, VAR_4->freq);

   if (VAR_5) {
    FUNC_2(VAR_2, "failed to set clock %s freq %u\n",
        VAR_4->name, VAR_4->freq);
    goto err_clock_config;
   }
  }

  VAR_5 = FUNC_5(VAR_4->handle);
  if (VAR_5) {
   FUNC_2(VAR_2, "failed to enable clock %s\n",
       VAR_4->name);
   goto err_clock_config;
  }
 }

 return 0;

err_clock_config:
 for (VAR_6 = VAR_6 - 1; VAR_6 >= 0; VAR_6--) {
  VAR_4 = &VAR_3->clk[VAR_6];

  if (!VAR_4->handle)
   continue;

  FUNC_4(VAR_4->handle);
 }

 return VAR_5;
}
