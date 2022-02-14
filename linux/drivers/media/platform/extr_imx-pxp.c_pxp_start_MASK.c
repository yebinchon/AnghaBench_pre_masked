
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {int timestamp; } ;
struct vb2_v4l2_buffer {int flags; int field; int timecode; TYPE_3__ vb2_buf; scalar_t__ sequence; } ;
struct pxp_q_data {int sequence; } ;
struct pxp_dev {scalar_t__ mmio; int v4l2_dev; } ;
struct pxp_ctx {int mode; int alpha_component; TYPE_2__* q_data; struct pxp_dev* dev; } ;
typedef int dma_addr_t ;
struct TYPE_5__ {int width; int height; int bytesperline; TYPE_1__* fmt; } ;
struct TYPE_4__ {int fourcc; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int) ;
 int FUNC_18 (int) ;
 int FUNC_19 (int) ;
 int FUNC_20 (int ) ;
 int FUNC_21 (int ) ;
 int FUNC_22 (int) ;
 int FUNC_23 (int) ;
 int FUNC_24 (int ) ;
 int FUNC_25 (int) ;
 int FUNC_26 (int) ;
 int FUNC_27 (int) ;
 int FUNC_28 (int) ;
 int FUNC_29 (int) ;
 int FUNC_30 (int) ;
 int FUNC_31 (int ) ;
 int FUNC_32 (int ) ;
 int FUNC_33 (int) ;
 int FUNC_34 (int) ;
 int FUNC_35 (int ) ;
 int FUNC_36 (int ) ;
 int FUNC_37 (int) ;
 int FUNC_38 (int) ;
 int FUNC_39 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 scalar_t__ VAR_26 ;
 scalar_t__ VAR_27 ;
 scalar_t__ VAR_28 ;
 scalar_t__ VAR_29 ;
 scalar_t__ VAR_30 ;
 scalar_t__ VAR_31 ;
 scalar_t__ VAR_32 ;
 scalar_t__ VAR_33 ;
 scalar_t__ VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 size_t VAR_44 ;
 size_t VAR_45 ;
 struct pxp_q_data* FUNC_40 (struct pxp_ctx*,int ) ;
 int FUNC_41 (int) ;
 int FUNC_42 (struct pxp_ctx*) ;
 int FUNC_43 (int) ;
 int FUNC_44 (int) ;
 int FUNC_45 (int *,char*) ;
 int FUNC_46 (TYPE_3__*,int ) ;
 int FUNC_47 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_48(struct pxp_ctx *VAR_46, struct vb2_v4l2_buffer *VAR_47,
       struct vb2_v4l2_buffer *VAR_48)
{
 struct pxp_dev *VAR_49 = VAR_46->dev;
 struct pxp_q_data *VAR_50;
 u32 VAR_51, VAR_52, VAR_53, VAR_54;
 u32 VAR_55, VAR_56, VAR_57, VAR_58;
 dma_addr_t VAR_59, VAR_60;
 u32 VAR_61, VAR_62, VAR_63, VAR_64, VAR_65, VAR_66, VAR_67;
 u32 VAR_68;
 u32 VAR_69, VAR_70, VAR_71, VAR_72, VAR_73, VAR_74, VAR_75;
 u32 VAR_76, VAR_77;
 u32 VAR_78;
 u32 VAR_79, VAR_80, VAR_81, VAR_82;

 VAR_50 = FUNC_40(VAR_46, VAR_43);

 VAR_51 = VAR_46->q_data[VAR_45].width;
 VAR_55 = VAR_46->q_data[VAR_44].width;
 VAR_52 = VAR_46->q_data[VAR_45].height;
 VAR_56 = VAR_46->q_data[VAR_44].height;
 VAR_53 = VAR_46->q_data[VAR_45].bytesperline;
 VAR_57 = VAR_46->q_data[VAR_44].bytesperline;
 VAR_54 = VAR_46->q_data[VAR_45].fmt->fourcc;
 VAR_58 = VAR_46->q_data[VAR_44].fmt->fourcc;

 VAR_59 = FUNC_46(&VAR_47->vb2_buf, 0);
 VAR_60 = FUNC_46(&VAR_48->vb2_buf, 0);

 if (!VAR_59 || !VAR_60) {
  FUNC_45(&VAR_49->v4l2_dev,
    "Acquiring DMA addresses of buffers failed\n");
  return -VAR_7;
 }

 VAR_48->sequence =
  FUNC_40(VAR_46, VAR_42)->sequence++;
 VAR_47->sequence = VAR_50->sequence++;
 VAR_48->vb2_buf.timestamp = VAR_47->vb2_buf.timestamp;

 if (VAR_47->flags & VAR_40)
  VAR_48->timecode = VAR_47->timecode;
 VAR_48->field = VAR_47->field;
 VAR_48->flags = VAR_47->flags &
  (VAR_40 |
   VAR_38 |
   VAR_39 |
   VAR_37 |
   VAR_41);


 VAR_61 = FUNC_1(!!(VAR_46->mode & VAR_36)) |
        FUNC_0(!!(VAR_46->mode & VAR_35));

 VAR_62 = FUNC_24(VAR_46->alpha_component) |
     FUNC_25(1) |
     FUNC_43(VAR_58);
 VAR_63 = VAR_60;
 switch (VAR_58) {
 case 138:
 case 136:
 case 137:
 case 135:
  VAR_64 = VAR_63 + VAR_57 * VAR_56;
  break;
 default:
  VAR_64 = 0;
 }

 VAR_65 = FUNC_28(VAR_57);
 VAR_66 = FUNC_26(VAR_55 - 1) |
    FUNC_27(VAR_56 - 1);

 VAR_67 = FUNC_31(0) | FUNC_32(0);
 VAR_68 = FUNC_29(VAR_55 - 1) |
       FUNC_30(VAR_56 - 1);

 VAR_76 = FUNC_22(1) | FUNC_23(1);
 VAR_77 = FUNC_20(0) | FUNC_21(0);

 VAR_79 = (VAR_51 <= VAR_55) ? 0 : FUNC_41(VAR_51 / VAR_55);
 VAR_80 = (VAR_52 <= VAR_56) ? 0 : FUNC_41(VAR_52 / VAR_56);
 VAR_69 = FUNC_33(VAR_79) | FUNC_34(VAR_80) |
    FUNC_44(VAR_54);
 VAR_70 = VAR_59;
 VAR_78 = VAR_53 * VAR_52;
 switch (VAR_54) {
 case 131:
  VAR_71 = VAR_70 + VAR_78;
  VAR_72 = VAR_71 + VAR_78 / 4;
  break;
 case 130:
  VAR_71 = VAR_70 + VAR_78;
  VAR_72 = VAR_71 + VAR_78 / 2;
  break;
 case 138:
 case 136:
 case 137:
 case 135:
  VAR_71 = VAR_70 + VAR_78;
  VAR_72 = 0;
  break;
 case 139:
 case 132:
  VAR_71 = 0;

  VAR_72 = 0x8080;
  break;
 default:
  VAR_71 = 0;
  VAR_72 = 0;
  break;
 }
 VAR_73 = FUNC_37(VAR_53);
 if (VAR_79) {
  VAR_81 = (VAR_51 >> VAR_79) * 0x1000 / VAR_55;
 } else {
  switch (VAR_54) {
  case 134:
  case 129:
  case 133:
  case 128:
  case 137:
  case 138:
  case 136:
  case 135:
  case 130:
  case 131:




   VAR_81 = (VAR_51 - 2) * 0x1000 / (VAR_55 - 1);
   break;
  default:
   VAR_81 = (VAR_51 - 1) * 0x1000 / (VAR_55 - 1);
   break;
  }
 }
 if (VAR_80)
  VAR_82 = (VAR_52 >> VAR_80) * 0x1000 / VAR_56;
 else
  VAR_82 = (VAR_52 - 1) * 0x1000 / (VAR_56 - 1);
 VAR_74 = FUNC_39(VAR_82) |
     FUNC_38(VAR_81);
 VAR_75 = FUNC_36(0) | FUNC_35(0);

 FUNC_47(VAR_61, VAR_49->mmio + VAR_10);

 FUNC_47(VAR_62, VAR_49->mmio + VAR_20);
 FUNC_47(VAR_63, VAR_49->mmio + VAR_18);
 FUNC_47(VAR_64, VAR_49->mmio + VAR_19);
 FUNC_47(VAR_65, VAR_49->mmio + VAR_22);
 FUNC_47(VAR_66, VAR_49->mmio + VAR_21);
 FUNC_47(VAR_67, VAR_49->mmio + VAR_24);
 FUNC_47(VAR_68, VAR_49->mmio + VAR_23);
 FUNC_47(VAR_76, VAR_49->mmio + VAR_17);
 FUNC_47(VAR_77, VAR_49->mmio + VAR_16);
 FUNC_47(VAR_69, VAR_49->mmio + VAR_29);
 FUNC_47(VAR_70, VAR_49->mmio + VAR_26);
 FUNC_47(VAR_71, VAR_49->mmio + VAR_33);
 FUNC_47(VAR_72, VAR_49->mmio + VAR_34);
 FUNC_47(VAR_73, VAR_49->mmio + VAR_31);
 FUNC_47(0x00ffffff, VAR_49->mmio + VAR_25);
 FUNC_47(VAR_74, VAR_49->mmio + VAR_32);
 FUNC_47(VAR_75, VAR_49->mmio + VAR_30);

 FUNC_47(0x00ffffff, VAR_49->mmio + VAR_28);
 FUNC_47(0x00000000, VAR_49->mmio + VAR_27);


 FUNC_47(0x00ffffff, VAR_49->mmio + VAR_9);
 FUNC_47(0x00000000, VAR_49->mmio + VAR_8);


 FUNC_42(VAR_46);


 FUNC_47(VAR_6, VAR_49->mmio + VAR_15);

 FUNC_47(FUNC_8(0)|
        FUNC_7(1)|
        FUNC_6(0)|
        FUNC_5(0)|
        FUNC_4(0)|
        FUNC_3(0)|
        FUNC_17(1)|
        FUNC_16(0)|
        FUNC_15(0)|
        FUNC_14(0)|
        FUNC_13(0)|
        FUNC_12(0)|
        FUNC_11(0)|
        FUNC_10(0)|
        FUNC_9(0)|
        FUNC_2(0),
        VAR_49->mmio + VAR_12);
 FUNC_47(FUNC_19(1) |
        FUNC_18(1),
        VAR_49->mmio + VAR_13);

 FUNC_47(0xffff, VAR_49->mmio + VAR_14);


 FUNC_47(VAR_5, VAR_49->mmio + VAR_11);
 FUNC_47(VAR_0 | VAR_1 |
        VAR_2 | VAR_4 |
        VAR_3, VAR_49->mmio + VAR_11);

 return 0;
}
