
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct s5p_mfc_dev {int dummy; } ;
struct TYPE_7__ {size_t dma; int size; } ;
struct TYPE_6__ {size_t dma; int size; } ;
struct s5p_mfc_ctx {unsigned int total_dpb_count; int codec_mode; unsigned int luma_size; unsigned int chroma_size; unsigned int mv_size; unsigned int inst_no; TYPE_5__* dst_bufs; TYPE_2__ bank2; TYPE_1__ bank1; struct s5p_mfc_dev* dev; } ;
struct TYPE_8__ {size_t luma; size_t chroma; } ;
struct TYPE_9__ {TYPE_3__ raw; } ;
struct TYPE_10__ {TYPE_4__ cookie; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int FUNC_0 (size_t) ;
 unsigned int FUNC_1 (size_t) ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 size_t VAR_15 ;
 size_t VAR_16 ;
 size_t VAR_17 ;
 unsigned int VAR_18 ;
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
 scalar_t__ VAR_35 ;
 scalar_t__ VAR_36 ;
 scalar_t__ VAR_37 ;
 scalar_t__ VAR_38 ;
 scalar_t__ VAR_39 ;






 int FUNC_2 (int,char*,...) ;
 int FUNC_3 (char*,int) ;
 unsigned int FUNC_4 (struct s5p_mfc_dev*,scalar_t__) ;
 int FUNC_5 (struct s5p_mfc_dev*,unsigned int,scalar_t__) ;
 int FUNC_6 (struct s5p_mfc_ctx*) ;
 int FUNC_7 (struct s5p_mfc_ctx*,unsigned int,int ) ;

__attribute__((used)) static int FUNC_8(struct s5p_mfc_ctx *VAR_40)
{
 unsigned int VAR_41, VAR_42;
 unsigned int VAR_43, VAR_44;
 struct s5p_mfc_dev *VAR_45 = VAR_40->dev;
 unsigned int VAR_46;
 size_t VAR_47, VAR_48;
 int VAR_49, VAR_50;

 VAR_47 = VAR_40->bank1.dma;
 VAR_49 = VAR_40->bank1.size;
 VAR_48 = VAR_40->bank2.dma;
 VAR_50 = VAR_40->bank2.size;
 VAR_46 = FUNC_4(VAR_45, VAR_31) &
      ~VAR_18;
 FUNC_5(VAR_45, VAR_40->total_dpb_count | VAR_46,
      VAR_31);
 FUNC_6(VAR_40);
 switch (VAR_40->codec_mode) {
 case 132:
  FUNC_5(VAR_45, FUNC_0(VAR_47),
      VAR_25);
  VAR_47 += VAR_17;
  VAR_49 -= VAR_17;
  FUNC_5(VAR_45, FUNC_0(VAR_47), VAR_24);
  VAR_47 += VAR_11;
  VAR_49 -= VAR_11;
  break;
 case 130:
  FUNC_5(VAR_45, FUNC_0(VAR_47), VAR_26);
  VAR_47 += VAR_10;
  VAR_49 -= VAR_10;
  FUNC_5(VAR_45, FUNC_0(VAR_47), VAR_30);
  VAR_47 += VAR_15;
  VAR_49 -= VAR_15;
  FUNC_5(VAR_45, FUNC_0(VAR_47), VAR_28);
  VAR_47 += VAR_14;
  VAR_49 -= VAR_14;
  FUNC_5(VAR_45, FUNC_0(VAR_47), VAR_29);
  VAR_47 += VAR_13;
  VAR_49 -= VAR_13;
  FUNC_5(VAR_45, FUNC_0(VAR_47), VAR_27);
  VAR_47 += VAR_12;
  VAR_49 -= VAR_12;
  break;
 case 133:
  FUNC_5(VAR_45, FUNC_0(VAR_47), VAR_20);
  VAR_47 += VAR_12;
  VAR_49 -= VAR_12;
  FUNC_5(VAR_45, FUNC_0(VAR_47), VAR_22);
  VAR_47 += VAR_15;
  VAR_49 -= VAR_15;
  FUNC_5(VAR_45, FUNC_0(VAR_47), VAR_21);
  VAR_47 += VAR_14;
  VAR_49 -= VAR_14;
  FUNC_5(VAR_45, FUNC_0(VAR_47), VAR_19);
  VAR_47 += VAR_10;
  VAR_49 -= VAR_10;
  break;
 case 128:
 case 129:
  FUNC_5(VAR_45, FUNC_0(VAR_47), VAR_36);
  VAR_47 += VAR_10;
  VAR_49 -= VAR_10;
  FUNC_5(VAR_45, FUNC_0(VAR_47), VAR_37);
  VAR_47 += VAR_12;
  VAR_49 -= VAR_12;
  FUNC_5(VAR_45, FUNC_0(VAR_47), VAR_39);
  VAR_47 += VAR_15;
  VAR_49 -= VAR_15;
  FUNC_5(VAR_45, FUNC_0(VAR_47), VAR_38);
  VAR_47 += VAR_14;
  VAR_49 -= VAR_14;
  FUNC_5(VAR_45, FUNC_0(VAR_47), VAR_35);
  VAR_47 += VAR_16;
  VAR_49 -= VAR_16;
  FUNC_5(VAR_45, FUNC_0(VAR_47), VAR_34);
  VAR_47 += VAR_16;
  VAR_49 -= VAR_16;
  FUNC_5(VAR_45, FUNC_0(VAR_47), VAR_33);
  VAR_47 += VAR_16;
  VAR_49 -= VAR_16;
  break;
 case 131:
  break;
 default:
  FUNC_3("Unknown codec for decoding (%x)\n",
   VAR_40->codec_mode);
  return -VAR_3;
 }
 VAR_41 = VAR_40->luma_size;
 VAR_43 = VAR_40->chroma_size;
 VAR_44 = VAR_40->mv_size;
 FUNC_2(2, "Frm size: %d ch: %d mv: %d\n", VAR_41, VAR_43,
        VAR_44);
 for (VAR_42 = 0; VAR_42 < VAR_40->total_dpb_count; VAR_42++) {

  FUNC_2(2, "Luma %d: %zx\n", VAR_42,
     VAR_40->dst_bufs[VAR_42].cookie.raw.luma);
  FUNC_5(VAR_45, FUNC_1(VAR_40->dst_bufs[VAR_42].cookie.raw.luma),
      VAR_9 + VAR_42 * 4);
  FUNC_2(2, "\tChroma %d: %zx\n", VAR_42,
     VAR_40->dst_bufs[VAR_42].cookie.raw.chroma);
  FUNC_5(VAR_45, FUNC_0(VAR_40->dst_bufs[VAR_42].cookie.raw.chroma),
            VAR_8 + VAR_42 * 4);
  if (VAR_40->codec_mode == 132) {
   FUNC_2(2, "\tBuf2: %zx, size: %d\n",
       VAR_48, VAR_50);
   FUNC_5(VAR_45, FUNC_1(VAR_48),
      VAR_23 + VAR_42 * 4);
   VAR_48 += VAR_44;
   VAR_50 -= VAR_44;
  }
 }
 FUNC_2(2, "Buf1: %zu, buf_size1: %d\n", VAR_47, VAR_49);
 FUNC_2(2, "Buf 1/2 size after: %d/%d (frames %d)\n",
   VAR_49, VAR_50, VAR_40->total_dpb_count);
 if (VAR_49 < 0 || VAR_50 < 0) {
  FUNC_2(2, "Not enough memory has been allocated\n");
  return -VAR_4;
 }
 FUNC_7(VAR_40, VAR_41, VAR_1);
 FUNC_7(VAR_40, VAR_43, VAR_0);
 if (VAR_40->codec_mode == 132)
  FUNC_7(VAR_40, VAR_44, VAR_2);
 FUNC_5(VAR_45, ((VAR_5 & VAR_6)
     << VAR_7) | (VAR_40->inst_no),
      VAR_32);
 return 0;
}
