
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct phy_provider {int dummy; } ;
struct phy {int dummy; } ;
struct cdns_dp_phy {int num_lanes; int max_bit_rate; struct phy* sd_base; struct phy* base; struct device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct phy*) ;
 int FUNC_1 (struct phy*) ;
 int FUNC_2 (struct phy_provider*) ;
 int VAR_6 ;
 int FUNC_3 (struct device*,char*,...) ;
 int FUNC_4 (struct device*,char*,int,int,int) ;
 int FUNC_5 (struct device*,char*,int*) ;
 void* FUNC_6 (struct device*,struct resource*) ;
 struct cdns_dp_phy* FUNC_7 (struct device*,int,int ) ;
 struct phy_provider* FUNC_8 (struct device*,int ) ;
 struct phy* FUNC_9 (struct device*,int *,int *) ;
 int VAR_7 ;
 int FUNC_10 (struct phy*,struct cdns_dp_phy*) ;
 struct resource* FUNC_11 (struct platform_device*,int ,int) ;

__attribute__((used)) static int FUNC_12(struct platform_device *VAR_8)
{
 struct resource *VAR_9;
 struct cdns_dp_phy *VAR_10;
 struct device *VAR_11 = &VAR_8->dev;
 struct phy_provider *VAR_12;
 struct phy *VAR_13;
 int VAR_14;

 VAR_10 = FUNC_7(VAR_11, sizeof(*VAR_10), VAR_4);
 if (!VAR_10)
  return -VAR_3;

 VAR_10->dev = &VAR_8->dev;

 VAR_13 = FUNC_9(VAR_11, ((void*)0), &VAR_6);
 if (FUNC_0(VAR_13)) {
  FUNC_3(VAR_11, "failed to create DisplayPort PHY\n");
  return FUNC_1(VAR_13);
 }

 VAR_9 = FUNC_11(VAR_8, VAR_5, 0);
 VAR_10->base = FUNC_6(&VAR_8->dev, VAR_9);
 if (FUNC_0(VAR_10->base))
  return FUNC_1(VAR_10->base);

 VAR_9 = FUNC_11(VAR_8, VAR_5, 1);
 VAR_10->sd_base = FUNC_6(&VAR_8->dev, VAR_9);
 if (FUNC_0(VAR_10->sd_base))
  return FUNC_1(VAR_10->sd_base);

 VAR_14 = FUNC_5(VAR_11, "num_lanes",
           &(VAR_10->num_lanes));
 if (VAR_14)
  VAR_10->num_lanes = VAR_1;

 switch (VAR_10->num_lanes) {
 case 1:
 case 2:
 case 4:

  break;
 default:
  FUNC_3(VAR_11, "unsupported number of lanes: %d\n",
   VAR_10->num_lanes);
  return -VAR_2;
 }

 VAR_14 = FUNC_5(VAR_11, "max_bit_rate",
     &(VAR_10->max_bit_rate));
 if (VAR_14)
  VAR_10->max_bit_rate = VAR_0;

 switch (VAR_10->max_bit_rate) {
 case 2160:
 case 2430:
 case 2700:
 case 3240:
 case 4320:
 case 5400:
 case 8100:

  break;
 default:
  FUNC_3(VAR_11, "unsupported max bit rate: %dMbps\n",
   VAR_10->max_bit_rate);
  return -VAR_2;
 }

 FUNC_10(VAR_13, VAR_10);

 VAR_12 = FUNC_8(VAR_11, VAR_7);

 FUNC_4(VAR_11, "%d lanes, max bit rate %d.%03d Gbps\n",
   VAR_10->num_lanes,
   VAR_10->max_bit_rate / 1000,
   VAR_10->max_bit_rate % 1000);

 return FUNC_2(VAR_12);
}
