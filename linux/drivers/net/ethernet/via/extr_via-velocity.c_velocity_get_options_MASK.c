
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct velocity_opt {int rx_thresh; int DMA_length; int numrx; int numtx; int flow_cntl; int wol_opts; int spd_dpx; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int * VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int * VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int * VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int * VAR_27 ;
 int * VAR_28 ;
 int * VAR_29 ;
 int FUNC_0 (int *,int ,int ,int ,char*,char const*) ;
 int FUNC_1 (int*,int ,int ,int ,int ,char*,char const*) ;
 int * VAR_30 ;

__attribute__((used)) static void FUNC_2(struct velocity_opt *VAR_31, int VAR_32,
     const char *VAR_33)
{

 FUNC_1(&VAR_31->rx_thresh, VAR_28[VAR_32], VAR_17, VAR_16, VAR_15, "rx_thresh", VAR_33);
 FUNC_1(&VAR_31->DMA_length, VAR_3[VAR_32], VAR_2, VAR_1, VAR_0, "DMA_length", VAR_33);
 FUNC_1(&VAR_31->numrx, VAR_18[VAR_32], VAR_14, VAR_13, VAR_12, "RxDescriptors", VAR_33);
 FUNC_1(&VAR_31->numtx, VAR_22[VAR_32], VAR_21, VAR_20, VAR_19, "TxDescriptors", VAR_33);

 FUNC_1(&VAR_31->flow_cntl, VAR_27[VAR_32], VAR_6, VAR_5, VAR_4, "flow_control", VAR_33);
 FUNC_0(&VAR_31->flags, VAR_8[VAR_32], VAR_7, VAR_23, "IP_byte_align", VAR_33);
 FUNC_1((int *) &VAR_31->spd_dpx, VAR_29[VAR_32], VAR_11, VAR_10, VAR_9, "Media link mode", VAR_33);
 FUNC_1(&VAR_31->wol_opts, VAR_30[VAR_32], VAR_26, VAR_25, VAR_24, "Wake On Lan options", VAR_33);
 VAR_31->numrx = (VAR_31->numrx & ~3);
}
