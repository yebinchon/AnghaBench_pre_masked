
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {struct dwc2_hsotg* private; } ;
struct dwc2_core_params {int * g_tx_fifo_size; } ;
struct dwc2_hsotg {struct dwc2_core_params params; } ;


 int VAR_0 ;
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
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int FUNC_0 (struct seq_file*,struct dwc2_core_params*,int ) ;
 int FUNC_1 (struct seq_file*,struct dwc2_core_params*,int ) ;
 int VAR_33 ;
 int FUNC_2 (struct seq_file*,char*,char*,int ) ;
 int VAR_34 ;
 int FUNC_3 (char*,int,char*,int) ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;

__attribute__((used)) static int FUNC_4(struct seq_file *VAR_39, void *VAR_40)
{
 struct dwc2_hsotg *VAR_41 = VAR_39->private;
 struct dwc2_core_params *VAR_42 = &VAR_41->params;
 int VAR_43;

 FUNC_0(VAR_39, VAR_42, VAR_27);
 FUNC_0(VAR_39, VAR_42, VAR_3);
 FUNC_0(VAR_39, VAR_42, VAR_4);
 FUNC_0(VAR_39, VAR_42, VAR_35);
 FUNC_0(VAR_39, VAR_42, VAR_6);
 FUNC_0(VAR_39, VAR_42, VAR_5);
 FUNC_0(VAR_39, VAR_42, VAR_19);
 FUNC_0(VAR_39, VAR_42, VAR_17);
 FUNC_0(VAR_39, VAR_42, VAR_18);
 FUNC_0(VAR_39, VAR_42, VAR_26);
 FUNC_0(VAR_39, VAR_42, VAR_25);
 FUNC_0(VAR_39, VAR_42, VAR_14);
 FUNC_0(VAR_39, VAR_42, VAR_28);
 FUNC_0(VAR_39, VAR_42, VAR_31);
 FUNC_0(VAR_39, VAR_42, VAR_29);
 FUNC_0(VAR_39, VAR_42, VAR_30);
 FUNC_0(VAR_39, VAR_42, VAR_21);
 FUNC_0(VAR_39, VAR_42, VAR_22);
 FUNC_0(VAR_39, VAR_42, VAR_38);
 FUNC_0(VAR_39, VAR_42, VAR_20);
 FUNC_0(VAR_39, VAR_42, VAR_16);
 FUNC_0(VAR_39, VAR_42, VAR_36);
 FUNC_0(VAR_39, VAR_42, VAR_33);
 FUNC_1(VAR_39, VAR_42, VAR_1);
 FUNC_0(VAR_39, VAR_42, VAR_37);
 FUNC_0(VAR_39, VAR_42, VAR_7);
 FUNC_0(VAR_39, VAR_42, VAR_32);
 FUNC_0(VAR_39, VAR_42, VAR_23);
 FUNC_0(VAR_39, VAR_42, VAR_24);
 FUNC_0(VAR_39, VAR_42, VAR_2);
 FUNC_0(VAR_39, VAR_42, VAR_13);
 FUNC_0(VAR_39, VAR_42, VAR_12);
 FUNC_0(VAR_39, VAR_42, VAR_34);
 FUNC_0(VAR_39, VAR_42, VAR_15);
 FUNC_0(VAR_39, VAR_42, VAR_8);
 FUNC_0(VAR_39, VAR_42, VAR_9);
 FUNC_0(VAR_39, VAR_42, VAR_11);
 FUNC_0(VAR_39, VAR_42, VAR_10);

 for (VAR_43 = 0; VAR_43 < VAR_0; VAR_43++) {
  char VAR_44[32];

  FUNC_3(VAR_44, 32, "g_tx_fifo_size[%d]", VAR_43);
  FUNC_2(VAR_39, "%-30s: %d\n", VAR_44, VAR_42->g_tx_fifo_size[VAR_43]);
 }

 return 0;
}
