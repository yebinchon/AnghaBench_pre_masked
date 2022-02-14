
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {scalar_t__ height; scalar_t__ width; } ;
struct pxa_camera_dev {int platform_flags; int channels; int mclk_divisor; scalar_t__ base; TYPE_3__ current_pix; TYPE_2__* current_fmt; } ;
typedef int __u32 ;
struct TYPE_5__ {TYPE_1__* host_fmt; } ;
struct TYPE_4__ {int bits_per_sample; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int) ;
 unsigned long FUNC_1 (scalar_t__) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 unsigned long VAR_21 ;
 unsigned long VAR_22 ;
 unsigned long VAR_23 ;







 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (int,scalar_t__) ;
 int VAR_24 ;
 int FUNC_8 (int,int) ;
 int VAR_25 ;
 int FUNC_9 (struct pxa_camera_dev*,int ,int ,int*) ;

__attribute__((used)) static void FUNC_10(struct pxa_camera_dev *VAR_26,
      unsigned long VAR_27, __u32 VAR_28)
{
 unsigned long VAR_29, VAR_30;
 u32 VAR_31, VAR_32, VAR_33, VAR_34, VAR_35 = 0, VAR_36;
 int VAR_37 = FUNC_9(VAR_26, VAR_25, VAR_24, &VAR_36);

 if (VAR_37 < 0)
  VAR_36 = 0;





 switch (VAR_26->current_fmt->host_fmt->bits_per_sample) {
 case 10:
  VAR_29 = 4;
  VAR_30 = 0x40;
  break;
 case 9:
  VAR_29 = 3;
  VAR_30 = 0x20;
  break;
 default:




 case 8:
  VAR_29 = 2;
  VAR_30 = 0;
 }

 if (VAR_26->platform_flags & VAR_20)
  VAR_35 |= VAR_15;
 if (VAR_26->platform_flags & VAR_19)
  VAR_35 |= VAR_14;
 if (VAR_27 & VAR_22)
  VAR_35 |= VAR_16;
 if (VAR_27 & VAR_21)
  VAR_35 |= VAR_13;
 if (VAR_27 & VAR_23)
  VAR_35 |= VAR_17;

 VAR_31 = FUNC_6(VAR_26->base + VAR_0);
 if (VAR_31 & VAR_2)
  FUNC_7(VAR_31 & ~VAR_2, VAR_26->base + VAR_0);

 VAR_32 = FUNC_1(VAR_26->current_pix.width - 1) | VAR_30 | VAR_29;

 switch (VAR_28) {
 case 130:
  VAR_26->channels = 3;
  VAR_32 |= VAR_9;
 case 132:
 case 131:
 case 129:
 case 128:
  VAR_32 |= FUNC_0(2);
  break;
 case 134:
  VAR_32 |= FUNC_3(1) | FUNC_2(2) |
   VAR_8 | FUNC_0(1);
  break;
 case 133:
  VAR_32 |= FUNC_0(1) | FUNC_3(2);
  break;
 }

 VAR_33 = 0;
 VAR_34 = FUNC_5(VAR_26->current_pix.height - 1) |
  FUNC_4(FUNC_8((u32)255, VAR_36));
 VAR_35 |= VAR_26->mclk_divisor;

 FUNC_7(VAR_32, VAR_26->base + VAR_7);
 FUNC_7(VAR_33, VAR_26->base + VAR_10);
 FUNC_7(VAR_34, VAR_26->base + VAR_11);
 FUNC_7(VAR_35, VAR_26->base + VAR_12);


 VAR_31 = (VAR_31 & VAR_2) | (VAR_26->platform_flags & VAR_18 ?
  VAR_4 : (VAR_6 | VAR_5));
 VAR_31 |= VAR_1 | VAR_3;
 FUNC_7(VAR_31, VAR_26->base + VAR_0);
}
