
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct s5p_mfc_dev {int dummy; } ;
struct TYPE_4__ {size_t dma; size_t size; } ;
struct TYPE_3__ {size_t dma; size_t size; } ;
struct s5p_mfc_ctx {unsigned int img_width; unsigned int img_height; int codec_mode; TYPE_2__ bank2; TYPE_1__ bank1; struct s5p_mfc_dev* dev; } ;


 unsigned int FUNC_0 (unsigned int,int ) ;
 int VAR_0 ;
 int FUNC_1 (size_t) ;
 int FUNC_2 (size_t) ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 size_t VAR_9 ;
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



 int FUNC_3 (int,char*,size_t,size_t) ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (struct s5p_mfc_dev*,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct s5p_mfc_ctx *VAR_23)
{
 struct s5p_mfc_dev *VAR_24 = VAR_23->dev;
 size_t VAR_25, VAR_26;
 size_t VAR_27, VAR_28;
 unsigned int VAR_29, VAR_30;
 unsigned int VAR_31, VAR_32;
 int VAR_33;

 VAR_25 = VAR_23->bank1.dma;
 VAR_27 = VAR_23->bank1.size;
 VAR_26 = VAR_23->bank2.dma;
 VAR_28 = VAR_23->bank2.size;
 VAR_29 = FUNC_0(VAR_23->img_width, VAR_20)
  * FUNC_0(VAR_23->img_height, VAR_22);
 VAR_29 = FUNC_0(VAR_29, VAR_21);
 if (VAR_23->codec_mode == 129) {
  VAR_30 = FUNC_0(VAR_23->img_width, VAR_20)
   * FUNC_0((VAR_23->img_height >> 1), VAR_22);
  VAR_30 = FUNC_0(VAR_30, VAR_21);
 } else {
  VAR_31 = FUNC_0(VAR_23->img_width + 16,
      VAR_20);
  VAR_32 = FUNC_0((VAR_23->img_height >> 1) + 4,
      VAR_22);
  VAR_30 = FUNC_0(VAR_31 * VAR_32,
           VAR_21);
 }
 FUNC_3(2, "buf_size1: %zu, buf_size2: %zu\n", VAR_27, VAR_28);
 switch (VAR_23->codec_mode) {
 case 129:
  for (VAR_33 = 0; VAR_33 < 2; VAR_33++) {
   FUNC_5(VAR_24, FUNC_1(VAR_25),
    VAR_7 + (4 * VAR_33));
   VAR_25 += VAR_29;
   VAR_27 -= VAR_29;

   FUNC_5(VAR_24, FUNC_2(VAR_26),
    VAR_8 + (4 * VAR_33));
   VAR_26 += VAR_29;
   VAR_28 -= VAR_29;
  }
  for (VAR_33 = 0; VAR_33 < 4; VAR_33++) {
   FUNC_5(VAR_24, FUNC_2(VAR_26),
    VAR_6 + (4 * VAR_33));
   VAR_26 += VAR_30;
   VAR_28 -= VAR_30;
  }
  FUNC_5(VAR_24, FUNC_1(VAR_25), VAR_16);
  VAR_25 += VAR_9;
  VAR_27 -= VAR_9;
  FUNC_5(VAR_24, FUNC_1(VAR_25),
     VAR_12);
  VAR_25 += VAR_2;
  VAR_27 -= VAR_2;
  FUNC_5(VAR_24, FUNC_1(VAR_25),
     VAR_14);
  VAR_25 += VAR_3;
  VAR_27 -= VAR_3;
  FUNC_5(VAR_24, FUNC_2(VAR_26),
     VAR_15);
  VAR_26 += VAR_4;
  VAR_28 -= VAR_4;
  FUNC_5(VAR_24, FUNC_1(VAR_25),
     VAR_13);
  VAR_25 += VAR_5;
  VAR_27 -= VAR_5;
  FUNC_3(2, "buf_size1: %zu, buf_size2: %zu\n",
   VAR_27, VAR_28);
  break;
 case 128:
  for (VAR_33 = 0; VAR_33 < 2; VAR_33++) {
   FUNC_5(VAR_24, FUNC_1(VAR_25),
    VAR_7 + (4 * VAR_33));
   VAR_25 += VAR_29;
   VAR_27 -= VAR_29;
   FUNC_5(VAR_24, FUNC_2(VAR_26),
    VAR_8 + (4 * VAR_33));
   VAR_26 += VAR_29;
   VAR_28 -= VAR_29;
  }
  for (VAR_33 = 0; VAR_33 < 4; VAR_33++) {
   FUNC_5(VAR_24, FUNC_2(VAR_26),
    VAR_6 + (4 * VAR_33));
   VAR_26 += VAR_30;
   VAR_28 -= VAR_30;
  }
  FUNC_5(VAR_24, FUNC_1(VAR_25), VAR_19);
  VAR_25 += VAR_9;
  VAR_27 -= VAR_9;
  FUNC_5(VAR_24, FUNC_1(VAR_25),
      VAR_18);
  VAR_25 += VAR_2;
  VAR_27 -= VAR_2;
  FUNC_5(VAR_24, FUNC_1(VAR_25),
      VAR_17);
  VAR_25 += VAR_1;
  VAR_27 -= VAR_1;
  FUNC_3(2, "buf_size1: %zu, buf_size2: %zu\n",
   VAR_27, VAR_28);
  break;
 case 130:
  for (VAR_33 = 0; VAR_33 < 2; VAR_33++) {
   FUNC_5(VAR_24, FUNC_1(VAR_25),
    VAR_7 + (4 * VAR_33));
   VAR_25 += VAR_29;
   VAR_27 -= VAR_29;
   FUNC_5(VAR_24, FUNC_2(VAR_26),
    VAR_8 + (4 * VAR_33));
   VAR_26 += VAR_29;
   VAR_28 -= VAR_29;
  }
  for (VAR_33 = 0; VAR_33 < 4; VAR_33++) {
   FUNC_5(VAR_24, FUNC_2(VAR_26),
    VAR_6 + (4 * VAR_33));
   VAR_26 += VAR_30;
   VAR_28 -= VAR_30;
  }
  FUNC_5(VAR_24, FUNC_1(VAR_25), VAR_11);
  VAR_25 += VAR_9;
  VAR_27 -= VAR_9;
  FUNC_5(VAR_24, FUNC_1(VAR_25), VAR_10);
  VAR_25 += VAR_1;
  VAR_27 -= VAR_1;
  FUNC_3(2, "buf_size1: %zu, buf_size2: %zu\n",
   VAR_27, VAR_28);
  break;
 default:
  FUNC_4("Unknown codec set for encoding: %d\n",
   VAR_23->codec_mode);
  return -VAR_0;
 }
 return 0;
}
