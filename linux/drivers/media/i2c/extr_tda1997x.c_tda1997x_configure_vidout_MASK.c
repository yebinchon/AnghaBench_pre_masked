
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct v4l2_subdev {int dummy; } ;
struct tda1997x_platform_data {int vidout_delay_pclk; int vidout_inv_pclk; int vidout_delay_vs; int vidout_delay_hs; int vidout_delay_de; int vidout_inv_de; int vidout_sel_de; int vidout_inv_hs; int vidout_sel_hs; int vidout_inv_vs; int vidout_sel_vs; } ;
struct tda1997x_state {int vid_fmt; struct tda1997x_platform_data pdata; struct v4l2_subdev sd; } ;


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
 int VAR_33 ;
 int VAR_34 ;
 int FUNC_0 (struct v4l2_subdev*,int ) ;
 int FUNC_1 (struct v4l2_subdev*,int ,int) ;

__attribute__((used)) static int
FUNC_2(struct tda1997x_state *VAR_35)
{
 struct v4l2_subdev *VAR_36 = &VAR_35->sd;
 struct tda1997x_platform_data *VAR_37 = &VAR_35->pdata;
 u8 VAR_38;
 u8 VAR_39;


 VAR_39 = (VAR_35->vid_fmt == VAR_11) ?
        VAR_20 : VAR_19;
 VAR_39 |= VAR_37->vidout_delay_pclk << VAR_17;
 VAR_39 |= VAR_37->vidout_inv_pclk << VAR_18;
 FUNC_1(VAR_36, VAR_25, VAR_39);


 VAR_38 = 0;

 if ((VAR_35->vid_fmt == VAR_12) ||
     (VAR_35->vid_fmt == VAR_11)) {

  VAR_38 = VAR_3 << VAR_4 |
       VAR_3 << VAR_5;
 }
 FUNC_1(VAR_36, VAR_22, VAR_38);


 VAR_39 = VAR_35->vid_fmt & VAR_14;
 if (VAR_35->vid_fmt == VAR_11)
  VAR_39 |= (VAR_10 | VAR_15);
 VAR_39 |= VAR_16;
 FUNC_1(VAR_36, VAR_24, VAR_39);


 VAR_39 = FUNC_0(VAR_36, VAR_26);

 if (!VAR_38)
  VAR_39 |= VAR_30;
 else
  VAR_39 &= ~VAR_30;

 if (VAR_35->vid_fmt == VAR_13)
  VAR_39 |= VAR_29;

 else
  VAR_39 &= ~(VAR_29 | VAR_28);

 if ((VAR_37->vidout_delay_vs < 4) || (VAR_37->vidout_delay_hs < 4))
  VAR_39 &= ~VAR_28;
 FUNC_1(VAR_36, VAR_26, VAR_39);


 VAR_39 = VAR_37->vidout_delay_de << VAR_0 |
       VAR_37->vidout_inv_de << VAR_1 |
       VAR_37->vidout_sel_de << VAR_2;
 FUNC_1(VAR_36, VAR_21, VAR_39);


 if (VAR_35->vid_fmt != VAR_11) {
  VAR_39 = VAR_37->vidout_delay_hs << VAR_6 |
        VAR_37->vidout_inv_hs << VAR_7 |
        VAR_37->vidout_sel_hs << VAR_9;
 } else
  VAR_39 = VAR_8 << VAR_9;
 FUNC_1(VAR_36, VAR_23, VAR_39);


 if (VAR_35->vid_fmt != VAR_11) {
  VAR_39 = VAR_37->vidout_delay_vs << VAR_31 |
        VAR_37->vidout_inv_vs << VAR_32 |
        VAR_37->vidout_sel_vs << VAR_34;
 } else
  VAR_39 = VAR_33 << VAR_34;
 FUNC_1(VAR_36, VAR_27, VAR_39);

 return 0;
}
