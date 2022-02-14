
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct ufs_hba {size_t dev_ref_clk_freq; int dev; } ;
struct TYPE_2__ {int freq_hz; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,char*,int) ;
 TYPE_1__* VAR_3 ;
 int FUNC_2 (struct ufs_hba*,int ,int ,int ,int ,size_t*) ;

__attribute__((used)) static int FUNC_3(struct ufs_hba *VAR_4)
{
 int VAR_5;
 u32 VAR_6;
 u32 VAR_7 = VAR_4->dev_ref_clk_freq;

 VAR_5 = FUNC_2(VAR_4, VAR_1,
   VAR_0, 0, 0, &VAR_6);

 if (VAR_5) {
  FUNC_1(VAR_4->dev, "failed reading bRefClkFreq. err = %d\n",
   VAR_5);
  goto out;
 }

 if (VAR_6 == VAR_7)
  goto out;

 VAR_5 = FUNC_2(VAR_4, VAR_2,
   VAR_0, 0, 0, &VAR_7);

 if (VAR_5) {
  FUNC_1(VAR_4->dev, "bRefClkFreq setting to %lu Hz failed\n",
   VAR_3[VAR_7].freq_hz);
  goto out;
 }

 FUNC_0(VAR_4->dev, "bRefClkFreq setting to %lu Hz succeeded\n",
   VAR_3[VAR_7].freq_hz);

out:
 return VAR_5;
}
