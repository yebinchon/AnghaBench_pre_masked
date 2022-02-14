
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hi3798cv200_priv {int sample_clk; } ;
struct dw_mci_slot {int mmc; struct dw_mci* host; } ;
struct dw_mci {int dev; struct hi3798cv200_priv* priv; } ;


 int VAR_0 ;
 int FUNC_0 (int const*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int const) ;
 int FUNC_2 (int ,char*,int,int,int const) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (struct dw_mci*,int ,int ) ;
 int FUNC_5 (int ,int ,int *) ;

__attribute__((used)) static int FUNC_6(struct dw_mci_slot *VAR_3,
          u32 VAR_4)
{
 static const int VAR_5[] = { 0, 45, 90, 135, 180, 225, 270, 315 };
 struct dw_mci *VAR_6 = VAR_3->host;
 struct hi3798cv200_priv *VAR_7 = VAR_6->priv;
 int VAR_8 = -1, VAR_9 = -1;
 int VAR_10, VAR_11 = -1;
 int VAR_12 = 0;
 int VAR_13;

 for (VAR_13 = 0; VAR_13 < FUNC_0(VAR_5); VAR_13++) {
  FUNC_1(VAR_7->sample_clk, VAR_5[VAR_13]);
  FUNC_4(VAR_6, VAR_2, VAR_0);

  VAR_10 = FUNC_5(VAR_3->mmc, VAR_4, ((void*)0));
  if (!VAR_10)
   VAR_12 = 1;

  if (VAR_13 > 0) {
   if (VAR_10 && !VAR_11)
    VAR_9 = VAR_13 - 1;
   if (!VAR_10 && VAR_11)
    VAR_8 = VAR_13;
  }

  if (VAR_8 != -1 && VAR_9 != -1)
   goto tuning_out;

  VAR_11 = VAR_10;
  VAR_10 = 0;
 }

tuning_out:
 if (VAR_12) {
  if (VAR_8 == -1)
   VAR_8 = 0;
  if (VAR_9 == -1)
   VAR_9 = FUNC_0(VAR_5) - 1;
  if (VAR_9 < VAR_8) {
   if ((VAR_8 + VAR_9) >
       (FUNC_0(VAR_5) - 1))
    VAR_13 = VAR_9 / 2;
   else
    VAR_13 = (VAR_8 + FUNC_0(VAR_5) - 1) / 2;
  } else {
   VAR_13 = (VAR_8 + VAR_9) / 2;
  }

  FUNC_1(VAR_7->sample_clk, VAR_5[VAR_13]);
  FUNC_2(VAR_6->dev, "Tuning clk_sample[%d, %d], set[%d]\n",
   VAR_8, VAR_9, VAR_5[VAR_13]);
 } else {
  FUNC_3(VAR_6->dev, "No valid clk_sample shift! use default\n");
  VAR_10 = -VAR_1;
 }

 FUNC_4(VAR_6, VAR_2, VAR_0);
 return VAR_10;
}
