
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct v4l2_mbus_framefmt {int code; int width; int height; } ;
struct TYPE_2__ {int bpl_value; } ;
struct iss_ipipeif_device {TYPE_1__ video_out; struct v4l2_mbus_framefmt* formats; int input; } ;
struct iss_format_info {int bpp; } ;
struct iss_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
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
 int FUNC_0 (int ) ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int FUNC_1 (int ) ;






 int VAR_42 ;
 int VAR_43 ;
 int FUNC_2 (struct iss_device*,int ,int ,int) ;
 int FUNC_3 (struct iss_device*,int ,int ,int,int) ;
 int FUNC_4 (struct iss_device*,int ,int ,int) ;
 int FUNC_5 (struct iss_device*,int ) ;
 struct iss_format_info* FUNC_6 (int) ;
 struct iss_device* FUNC_7 (struct iss_ipipeif_device*) ;

__attribute__((used)) static void FUNC_8(struct iss_ipipeif_device *VAR_44)
{
 struct iss_device *VAR_45 = FUNC_7(VAR_44);
 const struct iss_format_info *VAR_46;
 struct v4l2_mbus_framefmt *VAR_47;
 u32 VAR_48 = 0;

 FUNC_5(VAR_45, VAR_44->input);


 VAR_47 = &VAR_44->formats[VAR_6];


 FUNC_2(VAR_45, VAR_42, VAR_0,
      VAR_1 | VAR_2);


 switch (VAR_47->code) {
 case 129:
 case 128:
  FUNC_3(VAR_45, VAR_43, VAR_33,
          VAR_34 | VAR_37 |
          VAR_36,
          VAR_39);

  FUNC_3(VAR_45, VAR_42, VAR_3,
          VAR_5, VAR_4);

  break;
 case 131:
  VAR_48 = VAR_11 |
   VAR_16 |
   VAR_17 |
   VAR_22;
  goto cont_raw;
 case 130:
  VAR_48 = VAR_12 |
   VAR_15 |
   VAR_18 |
   VAR_21;
  goto cont_raw;
 case 133:
  VAR_48 = VAR_9 |
   VAR_14 |
   VAR_19 |
   VAR_24;
  goto cont_raw;
 case 132:
  VAR_48 = VAR_10 |
   VAR_13 |
   VAR_20 |
   VAR_23;
cont_raw:
  FUNC_2(VAR_45, VAR_42, VAR_3,
       VAR_4);

  FUNC_3(VAR_45, VAR_43, VAR_33,
          VAR_34 | VAR_37 |
          VAR_36, VAR_38 |
          VAR_35);

  VAR_46 = FUNC_6(VAR_47->code);
  FUNC_3(VAR_45, VAR_43, VAR_25,
          VAR_26,
          FUNC_0(VAR_46->bpp));


  FUNC_4(VAR_45, VAR_43, VAR_8,
         VAR_48);
  break;
 }

 FUNC_4(VAR_45, VAR_43, VAR_40, 0 & VAR_41);
 FUNC_4(VAR_45, VAR_43, VAR_29,
        (VAR_47->width - 1) & VAR_30);
 FUNC_4(VAR_45, VAR_43, VAR_31,
        (VAR_47->height - 1) & VAR_32);


 FUNC_4(VAR_45, VAR_43, FUNC_1(0),
        VAR_47->height - 1);


 VAR_47 = &VAR_44->formats[VAR_7];

 FUNC_4(VAR_45, VAR_43, VAR_27,
        (VAR_44->video_out.bpl_value >> 5) &
        VAR_28);



}
