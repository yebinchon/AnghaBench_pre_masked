
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct hvc_struct {int flags; } ;
struct hvc_opal_priv {int hvsi; scalar_t__ proto; } ;
struct hv_ops {int dummy; } ;
typedef scalar_t__ hv_protocol_t ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct hvc_struct*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct hvc_struct*) ;
 unsigned int FUNC_2 (int const*) ;
 int FUNC_3 (TYPE_1__*,struct hvc_struct*) ;
 struct hvc_struct* FUNC_4 (unsigned int,unsigned int,struct hv_ops const*,int ) ;
 int FUNC_5 (unsigned int,unsigned int,struct hv_ops const*) ;
 struct hvc_opal_priv VAR_8 ;
 struct hv_ops VAR_9 ;
 struct hvc_opal_priv** VAR_10 ;
 struct hv_ops VAR_11 ;
 int FUNC_6 (int *,int ,int ,unsigned int,int ) ;
 int FUNC_7 (int ) ;
 unsigned int FUNC_8 (int ,int ) ;
 struct hvc_opal_priv* FUNC_9 (int,int ) ;
 scalar_t__ FUNC_10 (int ,char*) ;
 int * FUNC_11 (int ,char*,int *) ;
 unsigned int FUNC_12 (int ) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_13 (char*,int ,...) ;
 int FUNC_14 (char*,unsigned int,...) ;

__attribute__((used)) static int FUNC_15(struct platform_device *VAR_14)
{
 const struct hv_ops *VAR_15;
 struct hvc_struct *VAR_16;
 struct hvc_opal_priv *VAR_17;
 hv_protocol_t VAR_18;
 unsigned int VAR_19, VAR_20, VAR_21 = 0;
 const __be32 *VAR_22;

 if (FUNC_10(VAR_14->dev.of_node, "ibm,opal-console-raw")) {
  VAR_18 = VAR_4;
  VAR_15 = &VAR_11;
 } else if (FUNC_10(VAR_14->dev.of_node,
        "ibm,opal-console-hvsi")) {
  VAR_18 = VAR_3;
  VAR_15 = &VAR_9;
 } else {
  FUNC_13("hvc_opal: Unknown protocol for %pOF\n",
         VAR_14->dev.of_node);
  return -VAR_1;
 }

 VAR_22 = FUNC_11(VAR_14->dev.of_node, "reg", ((void*)0));
 VAR_19 = VAR_22 ? FUNC_2(VAR_22) : 0;


 if (VAR_10[VAR_19] == &VAR_8) {
  VAR_17 = VAR_10[VAR_19];
  VAR_21 = 1;
 } else if (VAR_10[VAR_19] == ((void*)0)) {
  VAR_17 = FUNC_9(sizeof(struct hvc_opal_priv), VAR_2);
  if (!VAR_17)
   return -VAR_0;
  VAR_17->proto = VAR_18;
  VAR_10[VAR_19] = VAR_17;
  if (VAR_18 == VAR_3) {




   FUNC_6(&VAR_17->hvsi,
         VAR_12, VAR_13,
         VAR_19, 0);
  }


  FUNC_5(VAR_19, VAR_19, VAR_15);
 } else {
  FUNC_13("hvc_opal: Device %pOF has duplicate terminal number #%d\n",
         VAR_14->dev.of_node, VAR_19);
  return -VAR_1;
 }

 FUNC_14("hvc%d: %s protocol on %pOF%s\n", VAR_19,
  VAR_18 == VAR_4 ? "raw" : "hvsi",
  VAR_14->dev.of_node,
  VAR_21 ? " (boot console)" : "");

 VAR_20 = FUNC_8(VAR_14->dev.of_node, 0);
 if (!VAR_20) {
  FUNC_14("hvc%d: No interrupts property, using OPAL event\n",
    VAR_19);
  VAR_20 = FUNC_12(FUNC_7(VAR_7));
 }

 if (!VAR_20) {
  FUNC_13("hvc_opal: Unable to map interrupt for device %pOF\n",
   VAR_14->dev.of_node);
  return VAR_20;
 }

 VAR_16 = FUNC_4(VAR_19, VAR_20, VAR_15, VAR_6);
 if (FUNC_0(VAR_16))
  return FUNC_1(VAR_16);


 VAR_16->flags = VAR_5;
 FUNC_3(&VAR_14->dev, VAR_16);

 return 0;
}
