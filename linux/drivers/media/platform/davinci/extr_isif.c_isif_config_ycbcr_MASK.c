
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int width; } ;
struct isif_ycbcr_config {int pix_fmt; int frm_fmt; int fid_pol; int hd_pol; int vd_pol; int pix_order; scalar_t__ buf_type; TYPE_1__ win; } ;
struct TYPE_4__ {int if_type; int dev; struct isif_ycbcr_config ycbcr; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
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


 int FUNC_0 (int ,char*) ;
 TYPE_2__ VAR_20 ;
 int FUNC_1 (TYPE_1__*,int,int) ;
 int FUNC_2 (int,int ) ;

__attribute__((used)) static int FUNC_3(void)
{
 struct isif_ycbcr_config *VAR_21 = &VAR_20.ycbcr;
 u32 VAR_22 = 0, VAR_23 = 0;

 FUNC_0(VAR_20.dev, "\nStarting isif_config_ycbcr...");


 VAR_22 = VAR_22 | (VAR_21->pix_fmt << VAR_12) |
    (VAR_21->frm_fmt << VAR_10) |
    (VAR_21->fid_pol << VAR_9) |
    (VAR_21->hd_pol << VAR_11) |
    (VAR_21->vd_pol << VAR_14);


 switch (VAR_20.if_type) {
 case 131:
  if (VAR_21->pix_fmt != VAR_4) {
   FUNC_0(VAR_20.dev, "Invalid pix_fmt(input mode)\n");
   return -VAR_5;
  }
  VAR_22 |= (VAR_19 << VAR_14);
  FUNC_2(3, VAR_17);
  VAR_23 = VAR_23 | VAR_8 | VAR_15;
  break;
 case 130:
  if (VAR_21->pix_fmt != VAR_4) {
   FUNC_0(VAR_20.dev, "Invalid pix_fmt(input mode)\n");
   return -VAR_5;
  }

  FUNC_2(3, VAR_17);

  VAR_23 = VAR_23 | VAR_8 | VAR_15 |
   VAR_7;
  break;
 case 132:
  if (VAR_21->pix_fmt != VAR_3) {
   FUNC_0(VAR_20.dev, "Invalid pix_fmt(input mode)\n");
   return -VAR_5;
  }
  FUNC_2(3, VAR_17);
  break;

 case 128:
  VAR_23 |= VAR_8;
  VAR_23 |= VAR_15;
  if (VAR_21->pix_fmt != VAR_4) {
   FUNC_0(VAR_20.dev, "Invalid pix_fmt(input mode)\n");
   return -VAR_5;
  }
  break;
 case 129:
  if (VAR_21->pix_fmt != VAR_3) {
   FUNC_0(VAR_20.dev, "Invalid pix_fmt(input mode)\n");
   return -VAR_5;
  }
  break;
 default:

  FUNC_0(VAR_20.dev, "Invalid interface type\n");
  return -VAR_5;
 }

 FUNC_2(VAR_22, VAR_16);


 VAR_23 |= VAR_21->pix_order << VAR_13;

 FUNC_2(VAR_23, VAR_0);


 if ((VAR_20.if_type == 132) ||
     (VAR_20.if_type == 129))
  FUNC_1(&VAR_21->win, VAR_21->frm_fmt, 1);
 else
  FUNC_1(&VAR_21->win, VAR_21->frm_fmt, 2);






 FUNC_2(((((VAR_21->win.width * 2) + 31) & 0xffffffe0) >> 5), VAR_6);


 if ((VAR_21->frm_fmt == VAR_2) &&
     (VAR_21->buf_type == VAR_1))

  FUNC_2(0x00000249, VAR_18);

 return 0;
}
