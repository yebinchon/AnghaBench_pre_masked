
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dw_pcie {int version; int iatu_unroll_enabled; struct device* dev; scalar_t__ dbi_base; scalar_t__ atu_base; } ;
struct device_node {int dummy; } ;
struct device {struct device_node* of_node; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (struct device*,char*,...) ;
 int FUNC_1 (struct device*,char*,int) ;
 scalar_t__ FUNC_2 (struct dw_pcie*) ;
 int FUNC_3 (struct dw_pcie*,int ) ;
 int FUNC_4 (struct dw_pcie*,int ,int) ;
 scalar_t__ FUNC_5 (struct device_node*,char*) ;
 int FUNC_6 (struct device_node*,char*,int*) ;

void FUNC_7(struct dw_pcie *VAR_16)
{
 int VAR_17;
 u32 VAR_18;
 u32 VAR_19;
 struct device *VAR_20 = VAR_16->dev;
 struct device_node *VAR_21 = VAR_20->of_node;

 if (VAR_16->version >= 0x480A || (!VAR_16->version &&
           FUNC_2(VAR_16))) {
  VAR_16->iatu_unroll_enabled = 1;
  if (!VAR_16->atu_base)
   VAR_16->atu_base = VAR_16->dbi_base + VAR_0;
 }
 FUNC_0(VAR_16->dev, "iATU unroll: %s\n", VAR_16->iatu_unroll_enabled ?
  "enabled" : "disabled");


 VAR_17 = FUNC_6(VAR_21, "num-lanes", &VAR_19);
 if (VAR_17) {
  FUNC_0(VAR_16->dev, "property num-lanes isn't found\n");
  return;
 }


 VAR_18 = FUNC_3(VAR_16, VAR_5);
 VAR_18 &= ~VAR_10;
 switch (VAR_19) {
 case 1:
  VAR_18 |= VAR_6;
  break;
 case 2:
  VAR_18 |= VAR_7;
  break;
 case 4:
  VAR_18 |= VAR_8;
  break;
 case 8:
  VAR_18 |= VAR_9;
  break;
 default:
  FUNC_1(VAR_16->dev, "num-lanes %u: invalid value\n", VAR_19);
  return;
 }
 FUNC_4(VAR_16, VAR_5, VAR_18);


 VAR_18 = FUNC_3(VAR_16, VAR_1);
 VAR_18 &= ~VAR_15;
 switch (VAR_19) {
 case 1:
  VAR_18 |= VAR_11;
  break;
 case 2:
  VAR_18 |= VAR_12;
  break;
 case 4:
  VAR_18 |= VAR_13;
  break;
 case 8:
  VAR_18 |= VAR_14;
  break;
 }
 FUNC_4(VAR_16, VAR_1, VAR_18);

 if (FUNC_5(VAR_21, "snps,enable-cdm-check")) {
  VAR_18 = FUNC_3(VAR_16, VAR_4);
  VAR_18 |= VAR_2 |
         VAR_3;
  FUNC_4(VAR_16, VAR_4, VAR_18);
 }
}
