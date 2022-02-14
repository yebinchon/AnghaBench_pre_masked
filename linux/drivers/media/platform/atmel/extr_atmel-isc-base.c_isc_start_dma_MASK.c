
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u32 ;
struct regmap {int dummy; } ;
struct TYPE_14__ {int fourcc; int dctrl_dview; TYPE_4__* sd_format; } ;
struct TYPE_8__ {int sizeimage; int height; int width; } ;
struct TYPE_9__ {TYPE_1__ pix; } ;
struct TYPE_10__ {TYPE_2__ fmt; } ;
struct isc_device {int awb_lock; TYPE_7__ config; TYPE_6__* cur_frm; TYPE_3__ fmt; struct regmap* regmap; } ;
typedef int dma_addr_t ;
struct TYPE_12__ {int vb2_buf; } ;
struct TYPE_13__ {TYPE_5__ vb; } ;
struct TYPE_11__ {int mbus_code; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int) ;
 int VAR_11 ;
 int FUNC_2 (int ) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_3 (int) ;
 int VAR_14 ;
 int FUNC_4 (int ) ;
 int VAR_15 ;


 int FUNC_5 (struct regmap*,int ,int,int) ;
 int FUNC_6 (struct regmap*,int ,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int ) ;

__attribute__((used)) static void FUNC_10(struct isc_device *VAR_16)
{
 struct regmap *VAR_17 = VAR_16->regmap;
 u32 VAR_18 = VAR_16->fmt.fmt.pix.sizeimage;
 u32 VAR_19;
 dma_addr_t VAR_20;
 u32 VAR_21, VAR_22;

 VAR_21 = VAR_16->fmt.fmt.pix.height;
 VAR_22 = VAR_16->fmt.fmt.pix.width;







 if (!FUNC_0(VAR_16->config.sd_format->mbus_code)) {
  VAR_21 <<= 1;
  VAR_22 <<= 1;
 }
 FUNC_6(VAR_17, VAR_10,
       (FUNC_2(0) & VAR_12) |
       (FUNC_1(VAR_22 - 1) & VAR_11));

 FUNC_6(VAR_17, VAR_13,
       (FUNC_4(0) & VAR_15) |
       (FUNC_3(VAR_21 - 1) & VAR_14));

 FUNC_5(VAR_17, VAR_7,
      VAR_8 | VAR_9,
      VAR_8 | VAR_9);

 VAR_20 = FUNC_9(&VAR_16->cur_frm->vb.vb2_buf, 0);
 FUNC_6(VAR_17, VAR_2, VAR_20);

 switch (VAR_16->config.fourcc) {
 case 129:
  FUNC_6(VAR_17, VAR_3, VAR_20 + (VAR_18 * 2) / 3);
  FUNC_6(VAR_17, VAR_4, VAR_20 + (VAR_18 * 5) / 6);
  break;
 case 128:
  FUNC_6(VAR_17, VAR_3, VAR_20 + VAR_18 / 2);
  FUNC_6(VAR_17, VAR_4, VAR_20 + (VAR_18 * 3) / 4);
  break;
 default:
  break;
 }

 VAR_19 = VAR_16->config.dctrl_dview;

 FUNC_6(VAR_17, VAR_5, VAR_19 | VAR_6);
 FUNC_7(&VAR_16->awb_lock);
 FUNC_6(VAR_17, VAR_0, VAR_1);
 FUNC_8(&VAR_16->awb_lock);
}
