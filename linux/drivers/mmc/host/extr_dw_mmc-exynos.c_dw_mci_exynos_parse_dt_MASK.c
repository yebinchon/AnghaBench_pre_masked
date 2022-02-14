
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct dw_mci_exynos_priv_data {scalar_t__ ctrl_type; void* hs400_timing; scalar_t__ dqs_delay; void* ddr_timing; void* sdr_timing; scalar_t__ ciu_div; } ;
struct dw_mci {struct dw_mci_exynos_priv_data* priv; TYPE_2__* dev; } ;
struct device_node {int dummy; } ;
struct TYPE_6__ {struct device_node* of_node; } ;
struct TYPE_5__ {scalar_t__ ctrl_type; int compatible; } ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 void* FUNC_1 (scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_2 (TYPE_2__*,char*) ;
 struct dw_mci_exynos_priv_data* FUNC_3 (TYPE_2__*,int,int ) ;
 TYPE_1__* VAR_7 ;
 scalar_t__ FUNC_4 (struct device_node*,int ) ;
 scalar_t__ FUNC_5 (struct device_node*,char*,scalar_t__*) ;
 int FUNC_6 (struct device_node*,char*,scalar_t__*,int) ;

__attribute__((used)) static int FUNC_7(struct dw_mci *VAR_8)
{
 struct dw_mci_exynos_priv_data *VAR_9;
 struct device_node *VAR_10 = VAR_8->dev->of_node;
 u32 VAR_11[2];
 u32 VAR_12 = 0;
 int VAR_13;
 int VAR_14;

 VAR_9 = FUNC_3(VAR_8->dev, sizeof(*VAR_9), VAR_5);
 if (!VAR_9)
  return -VAR_2;

 for (VAR_13 = 0; VAR_13 < FUNC_0(VAR_7); VAR_13++) {
  if (FUNC_4(VAR_10, VAR_7[VAR_13].compatible))
   VAR_9->ctrl_type = VAR_7[VAR_13].ctrl_type;
 }

 if (VAR_9->ctrl_type == VAR_1)
  VAR_9->ciu_div = VAR_4 - 1;
 else if (VAR_9->ctrl_type == VAR_0)
  VAR_9->ciu_div = VAR_3 - 1;
 else {
  FUNC_5(VAR_10, "samsung,dw-mshc-ciu-div", &VAR_12);
  VAR_9->ciu_div = VAR_12;
 }

 VAR_14 = FUNC_6(VAR_10,
   "samsung,dw-mshc-sdr-timing", VAR_11, 2);
 if (VAR_14)
  return VAR_14;

 VAR_9->sdr_timing = FUNC_1(VAR_11[0], VAR_11[1], VAR_12);

 VAR_14 = FUNC_6(VAR_10,
   "samsung,dw-mshc-ddr-timing", VAR_11, 2);
 if (VAR_14)
  return VAR_14;

 VAR_9->ddr_timing = FUNC_1(VAR_11[0], VAR_11[1], VAR_12);

 VAR_14 = FUNC_6(VAR_10,
   "samsung,dw-mshc-hs400-timing", VAR_11, 2);
 if (!VAR_14 && FUNC_5(VAR_10,
    "samsung,read-strobe-delay", &VAR_9->dqs_delay))
  FUNC_2(VAR_8->dev,
   "read-strobe-delay is not found, assuming usage of default value\n");

 VAR_9->hs400_timing = FUNC_1(VAR_11[0], VAR_11[1],
      VAR_6);
 VAR_8->priv = VAR_9;
 return 0;
}
