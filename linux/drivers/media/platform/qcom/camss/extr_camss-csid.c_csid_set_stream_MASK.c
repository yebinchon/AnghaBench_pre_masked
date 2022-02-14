
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct v4l2_subdev {int dummy; } ;
struct v4l2_mbus_framefmt {int code; int width; int height; } ;
struct csid_testgen_config {int payload_mode; scalar_t__ enabled; } ;
struct csid_phy_config {int lane_cnt; int lane_assign; int csiphy_id; } ;
struct csid_format {int bpp; int spp; int data_type; int decode_format; } ;
struct csid_device {scalar_t__ base; struct v4l2_mbus_framefmt* fmt; TYPE_1__* camss; struct csid_phy_config phy; int nformats; int formats; int * pads; int ctrls; struct csid_testgen_config testgen; } ;
typedef enum camss_version { ____Placeholder_camss_version } camss_version ;
struct TYPE_2__ {int version; int dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 (int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_3 (int,int ) ;
 scalar_t__ FUNC_4 (int,int ) ;
 scalar_t__ FUNC_5 (int,int ) ;
 scalar_t__ FUNC_6 (int) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 size_t VAR_19 ;
 size_t VAR_20 ;
 struct csid_format* FUNC_7 (int ,int ,int) ;
 int FUNC_8 (int ,char*,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 (int *) ;
 struct csid_device* FUNC_12 (struct v4l2_subdev*) ;
 int FUNC_13 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_14(struct v4l2_subdev *VAR_21, int VAR_22)
{
 struct csid_device *VAR_23 = FUNC_12(VAR_21);
 struct csid_testgen_config *VAR_24 = &VAR_23->testgen;
 enum camss_version VAR_25 = VAR_23->camss->version;
 u32 VAR_26;

 if (VAR_22) {
  u8 VAR_27 = 0;
  u8 VAR_28 = VAR_27 * 4;
  u8 VAR_29, VAR_30, VAR_31;
  int VAR_32;

  VAR_32 = FUNC_11(&VAR_23->ctrls);
  if (VAR_32 < 0) {
   FUNC_8(VAR_23->camss->dev,
    "could not sync v4l2 controls: %d\n", VAR_32);
   return VAR_32;
  }

  if (!VAR_24->enabled &&
      !FUNC_9(&VAR_23->pads[VAR_19]))
   return -VAR_14;

  if (VAR_24->enabled) {

   struct v4l2_mbus_framefmt *VAR_33 =
     &VAR_23->fmt[VAR_20];
   const struct csid_format *VAR_34 = FUNC_7(
     VAR_23->formats, VAR_23->nformats, VAR_33->code);
   u32 VAR_35 =
    VAR_33->width * VAR_34->bpp * VAR_34->spp / 8;
   u32 VAR_36 = VAR_33->height;



   VAR_26 = ((VAR_13 & 0xff) << 24) |
         ((VAR_12 & 0x7ff) << 13);
   FUNC_13(VAR_26, VAR_23->base +
           FUNC_6(VAR_25));


   VAR_26 = ((VAR_35 & 0x1fff) << 16) |
         (VAR_36 & 0x1fff);
   FUNC_13(VAR_26, VAR_23->base +
           FUNC_3(VAR_25, 0));

   VAR_29 = VAR_34->data_type;


   VAR_26 = VAR_29;
   FUNC_13(VAR_26, VAR_23->base +
           FUNC_4(VAR_25, 0));


   VAR_26 = VAR_24->payload_mode;
   FUNC_13(VAR_26, VAR_23->base +
           FUNC_5(VAR_25, 0));

   VAR_31 = VAR_34->decode_format;
  } else {
   struct v4l2_mbus_framefmt *VAR_37 =
     &VAR_23->fmt[VAR_19];
   const struct csid_format *VAR_38 = FUNC_7(
     VAR_23->formats, VAR_23->nformats, VAR_37->code);
   struct csid_phy_config *VAR_39 = &VAR_23->phy;

   VAR_26 = VAR_39->lane_cnt - 1;
   VAR_26 |= VAR_39->lane_assign << 4;

   FUNC_13(VAR_26,
           VAR_23->base + VAR_8);

   VAR_26 = VAR_39->csiphy_id << 17;
   VAR_26 |= 0x9;

   FUNC_13(VAR_26,
           VAR_23->base + VAR_9);

   VAR_29 = VAR_38->data_type;
   VAR_31 = VAR_38->decode_format;
  }



  VAR_30 = (VAR_28 % 4) * 8;

  VAR_26 = FUNC_10(VAR_23->base +
        FUNC_0(VAR_25, VAR_27));
  VAR_26 &= ~(0xff << VAR_30);
  VAR_26 |= VAR_29 << VAR_30;
  FUNC_13(VAR_26, VAR_23->base +
          FUNC_0(VAR_25, VAR_27));

  VAR_26 = VAR_2;
  VAR_26 |= VAR_5;
  VAR_26 |= VAR_31 << VAR_1;
  VAR_26 |= VAR_7;

  if (VAR_23->camss->version == VAR_0) {
   u32 VAR_40 = VAR_23->fmt[VAR_19].code;
   u32 VAR_41 = VAR_23->fmt[VAR_20].code;

   if ((VAR_40 == VAR_15 &&
        VAR_41 == VAR_16) ||
       (VAR_40 == VAR_17 &&
        VAR_41 == VAR_18)) {
    VAR_26 |= VAR_6;
    VAR_26 |= VAR_4;
    VAR_26 |= VAR_3;
   }
  }

  FUNC_13(VAR_26, VAR_23->base +
          FUNC_1(VAR_25, VAR_28));

  if (VAR_24->enabled) {
   VAR_26 = VAR_11;
   FUNC_13(VAR_26, VAR_23->base +
           FUNC_2(VAR_25));
  }
 } else {
  if (VAR_24->enabled) {
   VAR_26 = VAR_10;
   FUNC_13(VAR_26, VAR_23->base +
           FUNC_2(VAR_25));
  }
 }

 return 0;
}
