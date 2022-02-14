
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mmc_host {int dummy; } ;
struct dw_mci_slot {struct mmc_host* mmc; struct dw_mci* host; } ;
struct dw_mci_rockchip_priv_data {int num_phases; int sample_clk; int default_sample_phase; } ;
struct dw_mci {int dev; struct dw_mci_rockchip_priv_data* priv; } ;


 scalar_t__ FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,char*,int ,int ,int) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int ,char*,int ) ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (struct range_t*) ;
 struct range_t* FUNC_9 (int,int,int ) ;
 int FUNC_10 (struct mmc_host*,int ,int *) ;

__attribute__((used)) static int FUNC_11(struct dw_mci_slot *VAR_3, u32 VAR_4)
{
 struct dw_mci *VAR_5 = VAR_3->host;
 struct dw_mci_rockchip_priv_data *VAR_6 = VAR_5->priv;
 struct mmc_host *VAR_7 = VAR_3->mmc;
 int VAR_8 = 0;
 int VAR_9;
 bool VAR_10, VAR_11 = 0, VAR_12;
 struct range_t {
  int start;
  int end;
 };
 struct range_t *VAR_13;
 unsigned int VAR_14 = 0;
 int VAR_15 = -1;
 int VAR_16 = -1;
 int VAR_17;

 if (FUNC_1(VAR_6->sample_clk)) {
  FUNC_5(VAR_5->dev, "Tuning clock (sample_clk) not defined.\n");
  return -VAR_0;
 }

 VAR_13 = FUNC_9(VAR_6->num_phases / 2 + 1,
          sizeof(*VAR_13), VAR_2);
 if (!VAR_13)
  return -VAR_1;


 for (VAR_9 = 0; VAR_9 < VAR_6->num_phases; ) {
  FUNC_3(VAR_6->sample_clk,
         FUNC_2(VAR_9, VAR_6->num_phases));

  VAR_10 = !FUNC_10(VAR_7, VAR_4, ((void*)0));

  if (VAR_9 == 0)
   VAR_12 = VAR_10;

  if ((!VAR_11) && VAR_10) {
   VAR_14++;
   VAR_13[VAR_14-1].start = VAR_9;
  }
  if (VAR_10) {
   VAR_13[VAR_14-1].end = VAR_9;
   VAR_9++;
  } else if (VAR_9 == VAR_6->num_phases - 1) {

   VAR_9++;
  } else {





   VAR_9 += FUNC_0(20 * VAR_6->num_phases, 360);


   if (VAR_9 >= VAR_6->num_phases)
    VAR_9 = VAR_6->num_phases - 1;
  }

  VAR_11 = VAR_10;
 }

 if (VAR_14 == 0) {
  FUNC_7(VAR_5->dev, "All phases bad!");
  VAR_8 = -VAR_0;
  goto free;
 }


 if ((VAR_14 > 1) && VAR_12 && VAR_10) {
  VAR_13[0].start = VAR_13[VAR_14-1].start;
  VAR_14--;
 }

 if (VAR_13[0].start == 0 && VAR_13[0].end == VAR_6->num_phases - 1) {
  FUNC_3(VAR_6->sample_clk, VAR_6->default_sample_phase);
  FUNC_6(VAR_5->dev, "All phases work, using default phase %d.",
    VAR_6->default_sample_phase);
  goto free;
 }


 for (VAR_9 = 0; VAR_9 < VAR_14; VAR_9++) {
  int VAR_18 = (VAR_13[VAR_9].end - VAR_13[VAR_9].start + 1);

  if (VAR_18 < 0)
   VAR_18 += VAR_6->num_phases;

  if (VAR_15 < VAR_18) {
   VAR_15 = VAR_18;
   VAR_16 = VAR_9;
  }

  FUNC_4(VAR_5->dev, "Good phase range %d-%d (%d len)\n",
   FUNC_2(VAR_13[VAR_9].start,
        VAR_6->num_phases),
   FUNC_2(VAR_13[VAR_9].end,
        VAR_6->num_phases),
   VAR_18
  );
 }

 FUNC_4(VAR_5->dev, "Best phase range %d-%d (%d len)\n",
  FUNC_2(VAR_13[VAR_16].start,
       VAR_6->num_phases),
  FUNC_2(VAR_13[VAR_16].end,
       VAR_6->num_phases),
  VAR_15
 );

 VAR_17 = VAR_13[VAR_16].start + VAR_15 / 2;
 VAR_17 %= VAR_6->num_phases;
 FUNC_6(VAR_5->dev, "Successfully tuned phase to %d\n",
   FUNC_2(VAR_17, VAR_6->num_phases));

 FUNC_3(VAR_6->sample_clk,
        FUNC_2(VAR_17,
      VAR_6->num_phases));

free:
 FUNC_8(VAR_13);
 return VAR_8;
}
