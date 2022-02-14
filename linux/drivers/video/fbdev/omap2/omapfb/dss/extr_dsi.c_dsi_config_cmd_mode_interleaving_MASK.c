
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct platform_device {int dummy; } ;
struct omap_video_timings {int x_res; } ;
struct TYPE_2__ {int* mX; } ;
struct dsi_data {int num_lanes_used; TYPE_1__ user_dsi_cinfo; int pix_fmt; struct omap_video_timings timings; } ;


 int FUNC_0 (int,int) ;
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
 int FUNC_1 (char*,int,int,int,int) ;
 int FUNC_2 (int ,int,int) ;
 int FUNC_3 (int ,int,int,int) ;
 size_t VAR_10 ;
 int FUNC_4 (int,int,int,int,int,int,int) ;
 int FUNC_5 (int,int,int,int,int) ;
 struct dsi_data* FUNC_6 (struct platform_device*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct platform_device*,int ) ;
 int FUNC_9 (struct platform_device*,int ,int ) ;

__attribute__((used)) static void FUNC_10(struct platform_device *VAR_11)
{
 struct dsi_data *VAR_12 = FUNC_6(VAR_11);
 int VAR_13;
 int VAR_14, VAR_15, VAR_16;
 int VAR_17, VAR_18, VAR_19, VAR_20, VAR_21, VAR_22;
 int VAR_23, VAR_24, VAR_25, VAR_26;
 int VAR_27, VAR_28, VAR_29;
 bool VAR_30;
 struct omap_video_timings *VAR_31 = &VAR_12->timings;
 int VAR_32 = FUNC_7(VAR_12->pix_fmt);
 int VAR_33 = VAR_12->num_lanes_used - 1;
 int VAR_34 = VAR_12->user_dsi_cinfo.mX[VAR_10] + 1;
 int VAR_35 = 0, VAR_36 = 0;
 int VAR_37 = 0, VAR_38 = 0;
 int VAR_39 = 0, VAR_40 = 0;
 int VAR_41 = 0, VAR_42 = 0;
 u32 VAR_43;

 VAR_43 = FUNC_8(VAR_11, VAR_2);
 VAR_13 = FUNC_2(VAR_43, 20, 20);
 VAR_14 = FUNC_2(VAR_43, 21, 21);
 VAR_15 = FUNC_2(VAR_43, 22, 22);
 VAR_16 = FUNC_2(VAR_43, 23, 23);

 VAR_43 = FUNC_8(VAR_11, VAR_5);
 VAR_19 = FUNC_2(VAR_43, 11, 0);
 VAR_18 = FUNC_2(VAR_43, 23, 12);
 VAR_17 = FUNC_2(VAR_43, 31, 24);

 VAR_43 = FUNC_8(VAR_11, VAR_1);
 VAR_24 = FUNC_2(VAR_43, 7, 0);
 VAR_23 = FUNC_2(VAR_43, 15, 8);

 VAR_43 = FUNC_8(VAR_11, VAR_9);
 VAR_26 = FUNC_2(VAR_43, 15, 0);
 VAR_25 = FUNC_2(VAR_43, 31, 16);

 VAR_43 = FUNC_8(VAR_11, VAR_0);
 VAR_22 = FUNC_2(VAR_43, 12, 0);
 VAR_30 = FUNC_2(VAR_43, 13, 13);

 VAR_43 = FUNC_8(VAR_11, VAR_3);
 VAR_28 = FUNC_2(VAR_43, 7, 0);

 VAR_43 = FUNC_8(VAR_11, VAR_4);
 VAR_27 = FUNC_2(VAR_43, 15, 8);

 VAR_29 = VAR_28 + VAR_27;

 VAR_20 = FUNC_0(VAR_31->x_res * VAR_32, 8);
 VAR_21 = VAR_19 + VAR_18 + VAR_17 + FUNC_0(VAR_20 + 6, VAR_33);

 if (!VAR_16) {
  VAR_35 = FUNC_4(VAR_17, VAR_30,
     VAR_25, VAR_26,
     VAR_29, VAR_23, VAR_24);
  VAR_36 = FUNC_5(VAR_17,
     VAR_25, VAR_26,
     VAR_22, VAR_34);
 }

 if (!VAR_14) {
  VAR_37 = FUNC_4(VAR_18, VAR_30,
     VAR_25, VAR_26,
     VAR_29, VAR_23, VAR_24);
  VAR_38 = FUNC_5(VAR_18,
     VAR_25, VAR_26,
     VAR_22, VAR_34);
 }

 if (!VAR_15) {
  VAR_39 = FUNC_4(VAR_19, VAR_30,
     VAR_25, VAR_26,
     VAR_29, VAR_23, VAR_24);

  VAR_40 = FUNC_5(VAR_19,
     VAR_25, VAR_26,
     VAR_22, VAR_34);
 }

 if (!VAR_13) {
  VAR_41 = FUNC_4(VAR_21, VAR_30,
     VAR_25, VAR_26,
     VAR_29, VAR_23, VAR_24);

  VAR_42 = FUNC_5(VAR_21,
     VAR_25, VAR_26,
     VAR_22, VAR_34);
 }

 FUNC_1("DSI HS interleaving(TXBYTECLKHS) HSA %d, HFP %d, HBP %d, BLLP %d\n",
  VAR_35, VAR_37, VAR_39,
  VAR_41);

 FUNC_1("DSI LP interleaving(bytes) HSA %d, HFP %d, HBP %d, BLLP %d\n",
  VAR_36, VAR_38, VAR_40,
  VAR_42);

 VAR_43 = FUNC_8(VAR_11, VAR_6);
 VAR_43 = FUNC_3(VAR_43, VAR_35, 23, 16);
 VAR_43 = FUNC_3(VAR_43, VAR_37, 15, 8);
 VAR_43 = FUNC_3(VAR_43, VAR_39, 7, 0);
 FUNC_9(VAR_11, VAR_6, VAR_43);

 VAR_43 = FUNC_8(VAR_11, VAR_7);
 VAR_43 = FUNC_3(VAR_43, VAR_36, 23, 16);
 VAR_43 = FUNC_3(VAR_43, VAR_38, 15, 8);
 VAR_43 = FUNC_3(VAR_43, VAR_40, 7, 0);
 FUNC_9(VAR_11, VAR_7, VAR_43);

 VAR_43 = FUNC_8(VAR_11, VAR_8);
 VAR_43 = FUNC_3(VAR_43, VAR_41, 31, 15);
 VAR_43 = FUNC_3(VAR_43, VAR_42, 16, 0);
 FUNC_9(VAR_11, VAR_8, VAR_43);
}
