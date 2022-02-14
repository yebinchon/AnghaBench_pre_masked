
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ v4l2_std_id ;
typedef int u64 ;
typedef int u32 ;
struct cx88_core {scalar_t__ tvnorm; int chroma_agc; TYPE_2__* dvbdev; TYPE_1__* v4ldev; } ;
struct TYPE_4__ {int vb2_mpegq; } ;
struct TYPE_3__ {int vb2_vbiq; int vb2_vidq; } ;


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
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int FUNC_0 (struct cx88_core*,int ,int ,scalar_t__) ;
 int FUNC_1 (struct cx88_core*,int,int,int ) ;
 int FUNC_2 (int ,int,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (int,char*,int,int,...) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (scalar_t__) ;
 int VAR_27 ;
 int FUNC_10 (struct cx88_core*,int,int) ;
 int FUNC_11 (struct cx88_core*) ;
 int FUNC_12 (int ,int) ;
 int FUNC_13 (scalar_t__) ;
 scalar_t__ FUNC_14 (int *) ;
 int VAR_28 ;
 int VAR_29 ;

int FUNC_15(struct cx88_core *VAR_30, v4l2_std_id VAR_31)
{
 u32 VAR_32;
 u32 VAR_33;
 u32 VAR_34;
 u32 VAR_35, VAR_36;
 u64 VAR_37;
 u32 VAR_38, VAR_39, VAR_40;
 u32 VAR_41, VAR_42;

 if (VAR_31 == VAR_30->tvnorm)
  return 0;
 if (VAR_30->v4ldev && (FUNC_14(&VAR_30->v4ldev->vb2_vidq) ||
        FUNC_14(&VAR_30->v4ldev->vb2_vbiq)))
  return -VAR_0;
 if (VAR_30->dvbdev && FUNC_14(&VAR_30->dvbdev->vb2_mpegq))
  return -VAR_0;
 VAR_30->tvnorm = VAR_31;
 VAR_32 = FUNC_7(VAR_31);
 VAR_33 = VAR_29;
 VAR_34 = VAR_32;
 VAR_35 = VAR_32;
 VAR_36 = VAR_32;

 if (VAR_31 & VAR_12) {
  VAR_41 = VAR_20;
  VAR_42 = 0x181f0008;
 } else if (VAR_31 & VAR_11) {
  VAR_41 = VAR_19;
  VAR_42 = 0x181f0008;
 } else if (VAR_31 & VAR_14) {
  VAR_41 = VAR_23;
  VAR_42 = 0x1c1f0008;
 } else if (VAR_31 & VAR_15) {
  VAR_41 = VAR_24;
  VAR_42 = 0x1c1f0008;
 } else if (VAR_31 & VAR_16) {
  VAR_41 = VAR_25;
  VAR_42 = 0x1c1f0008;
 } else if (VAR_31 & VAR_13) {
  VAR_41 = VAR_22;
  VAR_42 = 0x181f0008;
 } else if (VAR_31 & VAR_10) {
  VAR_41 = VAR_18;
  VAR_42 = 0x181f0008;
 } else if (VAR_31 & VAR_17) {
  VAR_35 = 4250000 * 8;
  VAR_36 = 4406250 * 8;

  VAR_41 = VAR_26;
  VAR_42 = 0x181f0008;
 } else {
  VAR_41 = VAR_21;
  VAR_42 = 0x181f0008;
 }

 FUNC_6(1, "set_tvnorm: \"%s\" fsc8=%d adc=%d vdec=%d db/dr=%d/%d\n",
  FUNC_13(VAR_30->tvnorm), VAR_32, VAR_33, VAR_34,
  VAR_35, VAR_36);
 FUNC_10(VAR_30, 2, VAR_34);

 FUNC_6(1, "set_tvnorm: MO_INPUT_FORMAT  0x%08x [old=0x%08x]\n",
  VAR_41, FUNC_3(VAR_3) & 0x0f);




 FUNC_2(VAR_3, 0x40f,
   VAR_31 & VAR_17 ? VAR_41 : VAR_41 | 0x400);


 FUNC_6(1, "set_tvnorm: MO_OUTPUT_FORMAT 0x%08x [old=0x%08x]\n",
  VAR_42, FUNC_3(VAR_4));
 FUNC_4(VAR_4, VAR_42);


 VAR_37 = VAR_33 * (u64)(1 << 17);
 FUNC_5(VAR_37, VAR_34);
 FUNC_6(1, "set_tvnorm: MO_SCONV_REG     0x%08x [old=0x%08x]\n",
  (u32)VAR_37, FUNC_3(VAR_5));
 FUNC_4(VAR_5, (u32)VAR_37);


 VAR_37 = VAR_35 * (u64)(1 << 22);
 FUNC_5(VAR_37, VAR_34);
 FUNC_6(1, "set_tvnorm: MO_SUB_STEP      0x%08x [old=0x%08x]\n",
  (u32)VAR_37, FUNC_3(VAR_6));
 FUNC_4(VAR_6, (u32)VAR_37);


 VAR_37 = VAR_36 * (u64)(1 << 22);
 FUNC_5(VAR_37, VAR_34);
 FUNC_6(1, "set_tvnorm: MO_SUB_STEP_DR   0x%08x [old=0x%08x]\n",
  (u32)VAR_37, FUNC_3(VAR_7));
 FUNC_4(VAR_7, (u32)VAR_37);


 VAR_38 = VAR_34 * 65 / 20000000 + 21;
 VAR_39 = VAR_34 * 68 / 20000000 + 15;
 FUNC_6(1,
  "set_tvnorm: MO_AGC_BURST     0x%08x [old=0x%08x,bdelay=%d,agcdelay=%d]\n",
  (VAR_38 << 8) | VAR_39, FUNC_3(VAR_1),
  VAR_38, VAR_39);
 FUNC_4(VAR_1, (VAR_38 << 8) | VAR_39);


 VAR_37 = FUNC_8(VAR_31) * (u64)VAR_34;
 FUNC_5(VAR_37, VAR_32);
 VAR_40 = (u32)VAR_37;
 FUNC_6(1,
  "set_tvnorm: MO_HTOTAL        0x%08x [old=0x%08x,htotal=%d]\n",
  VAR_40, FUNC_3(VAR_2), (u32)VAR_37);
 FUNC_2(VAR_2, 0x07ff, VAR_40);



 FUNC_4(VAR_8, (10 << 11) | FUNC_9(VAR_31));


 FUNC_1(VAR_30, 320, 240, VAR_9);


 FUNC_11(VAR_30);


 FUNC_0(VAR_30, VAR_28, VAR_27, VAR_31);





 FUNC_12(VAR_30->chroma_agc, VAR_41 == VAR_26);


 return 0;
}
