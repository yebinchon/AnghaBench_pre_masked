
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gswip_priv {int dev; TYPE_1__* hw_info; } ;
struct dsa_switch {struct gswip_priv* priv; } ;
struct TYPE_2__ {unsigned int cpu_port; int max_ports; } ;


 scalar_t__ FUNC_0 (unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (unsigned int) ;
 int VAR_3 ;
 int FUNC_2 (unsigned int) ;
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
 int FUNC_3 (unsigned int) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (struct gswip_priv*,int,int,int ) ;
 int FUNC_6 (struct gswip_priv*,int,int ) ;
 int FUNC_7 (struct gswip_priv*,int ,int ,int) ;
 int FUNC_8 (struct gswip_priv*) ;
 int FUNC_9 (struct dsa_switch*,int) ;
 int FUNC_10 (struct dsa_switch*,unsigned int,int *) ;
 int FUNC_11 (struct dsa_switch*,int,int) ;
 int FUNC_12 (struct gswip_priv*,int ,int ,int ) ;
 int FUNC_13 (struct gswip_priv*,int ,int ) ;
 int FUNC_14 (struct gswip_priv*,scalar_t__,int ) ;
 int FUNC_15 (int,int) ;

__attribute__((used)) static int FUNC_16(struct dsa_switch *VAR_20)
{
 struct gswip_priv *VAR_21 = VAR_20->priv;
 unsigned int VAR_22 = VAR_21->hw_info->cpu_port;
 int VAR_23;
 int VAR_24;

 FUNC_14(VAR_21, VAR_18, VAR_17);
 FUNC_15(5000, 10000);
 FUNC_14(VAR_21, 0, VAR_17);


 for (VAR_23 = 0; VAR_23 < VAR_21->hw_info->max_ports; VAR_23++) {
  FUNC_9(VAR_20, VAR_23);
  FUNC_11(VAR_20, VAR_23, 0);
 }


 FUNC_5(VAR_21, 0, VAR_6, VAR_5);

 VAR_24 = FUNC_8(VAR_21);
 if (VAR_24) {
  FUNC_4(VAR_21->dev, "writing PCE microcode failed, %i", VAR_24);
  return VAR_24;
 }


 FUNC_14(VAR_21, FUNC_0(VAR_22), VAR_14);
 FUNC_14(VAR_21, FUNC_0(VAR_22), VAR_15);
 FUNC_14(VAR_21, FUNC_0(VAR_22), VAR_16);


 FUNC_6(VAR_21, 0x0, VAR_7);

 FUNC_5(VAR_21, 0xff, 0x09, VAR_8);


 FUNC_7(VAR_21, VAR_9, 0, 0);
 FUNC_7(VAR_21, VAR_9, 0, 1);
 FUNC_7(VAR_21, VAR_9, 0, 5);


 FUNC_12(VAR_21, 0, VAR_2,
     FUNC_1(VAR_22));


 FUNC_12(VAR_21, 0, VAR_13,
     FUNC_3(VAR_22));

 FUNC_12(VAR_21, 0, VAR_3,
     FUNC_2(VAR_22));
 FUNC_14(VAR_21, VAR_19 + 8, VAR_4);
 FUNC_12(VAR_21, 0, VAR_1,
     VAR_0);


 FUNC_12(VAR_21, 0, VAR_12, VAR_10);


 FUNC_12(VAR_21, 0, VAR_11, VAR_10);

 VAR_24 = FUNC_13(VAR_21, VAR_10,
         VAR_11);
 if (VAR_24) {
  FUNC_4(VAR_21->dev, "MAC flushing didn't finish\n");
  return VAR_24;
 }

 FUNC_10(VAR_20, VAR_22, ((void*)0));
 return 0;
}
