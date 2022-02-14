
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct asd_sas_phy {TYPE_1__* phy; } ;
struct hisi_sas_phy {struct asd_sas_phy sas_phy; } ;
struct hisi_hba {unsigned long long queue_count; int n_phy; int initial_fis_dma; int sata_breakpoint_dma; int breakpoint_dma; int iost_dma; int itct_dma; int * complete_hdr_dma; int * cmd_hdr_dma; struct hisi_sas_phy* phy; } ;
typedef enum sas_linkrate { ____Placeholder_sas_linkrate } sas_linkrate ;
struct TYPE_2__ {scalar_t__ maximum_linkrate; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
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
 int VAR_31 ;
 scalar_t__ VAR_32 ;
 scalar_t__ VAR_33 ;
 scalar_t__ VAR_34 ;
 scalar_t__ VAR_35 ;
 scalar_t__ VAR_36 ;
 scalar_t__ VAR_37 ;
 scalar_t__ VAR_38 ;
 scalar_t__ VAR_39 ;
 scalar_t__ VAR_40 ;
 scalar_t__ VAR_41 ;
 scalar_t__ VAR_42 ;
 scalar_t__ VAR_43 ;
 scalar_t__ VAR_44 ;
 scalar_t__ VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 int VAR_50 ;
 int VAR_51 ;
 int VAR_52 ;
 scalar_t__ VAR_53 ;
 scalar_t__ VAR_54 ;
 scalar_t__ VAR_55 ;
 int VAR_56 ;
 scalar_t__ VAR_57 ;
 scalar_t__ VAR_58 ;
 scalar_t__ VAR_59 ;
 scalar_t__ VAR_60 ;
 scalar_t__ VAR_61 ;
 scalar_t__ VAR_62 ;
 scalar_t__ VAR_63 ;
 int VAR_64 ;
 int VAR_65 ;
 scalar_t__ VAR_66 ;
 scalar_t__ VAR_67 ;
 int VAR_68 ;
 int VAR_69 ;
 int VAR_70 ;
 int FUNC_0 (int) ;
 int VAR_71 ;
 int FUNC_1 (struct hisi_hba*,int,int ,int) ;
 int FUNC_2 (struct hisi_hba*,scalar_t__,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct hisi_hba *VAR_72)
{
 int VAR_73;


 FUNC_2(VAR_72, VAR_19,
    (u32)((1ULL << VAR_72->queue_count) - 1));
 FUNC_2(VAR_72, VAR_53, 0);
 FUNC_2(VAR_72, VAR_4, 0xfff0400);
 FUNC_2(VAR_72, VAR_30, 0x108);
 FUNC_2(VAR_72, VAR_3, 0x1);
 FUNC_2(VAR_72, VAR_33, 0x1);
 FUNC_2(VAR_72, VAR_44, 0x1);
 FUNC_2(VAR_72, VAR_43, 0x1);
 FUNC_2(VAR_72, VAR_18,
    VAR_71);
 FUNC_2(VAR_72, VAR_45, 0xffff);
 FUNC_2(VAR_72, VAR_23, 0xffffffff);
 FUNC_2(VAR_72, VAR_24, 0xffffffff);
 FUNC_2(VAR_72, VAR_25, 0xffffffff);
 FUNC_2(VAR_72, VAR_26, 0xfefefefe);
 FUNC_2(VAR_72, VAR_27, 0xfefefefe);
 FUNC_2(VAR_72, VAR_28, 0xffc220ff);
 FUNC_2(VAR_72, VAR_12, 0x0);
 FUNC_2(VAR_72, VAR_11, 0x0);
 FUNC_2(VAR_72, VAR_29, 0x0);
 FUNC_2(VAR_72, VAR_55, 0x155555);
 FUNC_2(VAR_72, VAR_2, 0xf0f0);
 FUNC_2(VAR_72, VAR_1, 0xf0f0);
 for (VAR_73 = 0; VAR_73 < VAR_72->queue_count; VAR_73++)
  FUNC_2(VAR_72, VAR_42+0x4*VAR_73, 0);

 FUNC_2(VAR_72, VAR_32, 1);

 for (VAR_73 = 0; VAR_73 < VAR_72->n_phy; VAR_73++) {
  struct hisi_sas_phy *VAR_74 = &VAR_72->phy[VAR_73];
  struct asd_sas_phy *VAR_75 = &VAR_74->sas_phy;
  u32 VAR_76 = 0x800;

  if (!VAR_75->phy || (VAR_75->phy->maximum_linkrate <
    VAR_60)) {
   VAR_76 = 0x855;
  } else {
   enum sas_linkrate VAR_77 = VAR_75->phy->maximum_linkrate;

   VAR_76 =
    FUNC_0(VAR_77) |
    0x800;
  }
  FUNC_1(VAR_72, VAR_73, VAR_51,
   VAR_76);
  FUNC_1(VAR_72, VAR_73, VAR_68, 0xffc00);
  FUNC_1(VAR_72, VAR_73, VAR_64, 0x13e80);
  FUNC_1(VAR_72, VAR_73, VAR_6, 0xffffffff);
  FUNC_1(VAR_72, VAR_73, VAR_7, 0xffffffff);
  FUNC_1(VAR_72, VAR_73, VAR_9, 0xffffffff);
  FUNC_1(VAR_72, VAR_73, VAR_52, 0x1000);
  FUNC_1(VAR_72, VAR_73, VAR_8, 0xf2057fff);
  FUNC_1(VAR_72, VAR_73, VAR_10, 0xffffbfe);
  FUNC_1(VAR_72, VAR_73, VAR_50, 0x0);
  FUNC_1(VAR_72, VAR_73, VAR_47, 0x0);
  FUNC_1(VAR_72, VAR_73, VAR_46, 0x0);
  FUNC_1(VAR_72, VAR_73, VAR_49, 0x0);
  FUNC_1(VAR_72, VAR_73, VAR_69, 0x0);
  FUNC_1(VAR_72, VAR_73, VAR_48, 0x1);
  FUNC_1(VAR_72, VAR_73, VAR_70, 0x7f7a120);
  FUNC_1(VAR_72, VAR_73, VAR_17, 0x2a0a01);
  FUNC_1(VAR_72, VAR_73, VAR_65, 0x32);
  FUNC_1(VAR_72, VAR_73, VAR_56,
         0x30f4240);

  FUNC_1(VAR_72, VAR_73, VAR_13, 0x1e);
  FUNC_1(VAR_72, VAR_73, VAR_0, 0x2ffff);
 }

 for (VAR_73 = 0; VAR_73 < VAR_72->queue_count; VAR_73++) {

  FUNC_2(VAR_72,
     VAR_20 + (VAR_73 * 0x14),
     FUNC_4(VAR_72->cmd_hdr_dma[VAR_73]));

  FUNC_2(VAR_72, VAR_21 + (VAR_73 * 0x14),
     FUNC_3(VAR_72->cmd_hdr_dma[VAR_73]));

  FUNC_2(VAR_72, VAR_22 + (VAR_73 * 0x14),
     VAR_31);


  FUNC_2(VAR_72, VAR_14 + (VAR_73 * 0x14),
     FUNC_4(VAR_72->complete_hdr_dma[VAR_73]));

  FUNC_2(VAR_72, VAR_15 + (VAR_73 * 0x14),
     FUNC_3(VAR_72->complete_hdr_dma[VAR_73]));

  FUNC_2(VAR_72, VAR_16 + (VAR_73 * 0x14),
     VAR_31);
 }


 FUNC_2(VAR_72, VAR_41,
    FUNC_3(VAR_72->itct_dma));

 FUNC_2(VAR_72, VAR_40,
    FUNC_4(VAR_72->itct_dma));


 FUNC_2(VAR_72, VAR_35,
    FUNC_3(VAR_72->iost_dma));

 FUNC_2(VAR_72, VAR_34,
    FUNC_4(VAR_72->iost_dma));


 FUNC_2(VAR_72, VAR_37,
    FUNC_3(VAR_72->breakpoint_dma));

 FUNC_2(VAR_72, VAR_36,
    FUNC_4(VAR_72->breakpoint_dma));


 FUNC_2(VAR_72, VAR_39,
    FUNC_3(VAR_72->sata_breakpoint_dma));

 FUNC_2(VAR_72, VAR_38,
    FUNC_4(VAR_72->sata_breakpoint_dma));


 FUNC_2(VAR_72, VAR_67,
    FUNC_3(VAR_72->initial_fis_dma));

 FUNC_2(VAR_72, VAR_66,
    FUNC_4(VAR_72->initial_fis_dma));


 FUNC_2(VAR_72, VAR_61, 0x0);
 FUNC_2(VAR_72, VAR_62, 0x0);
 FUNC_2(VAR_72, VAR_63, 0x0);
 FUNC_2(VAR_72, VAR_5, 0x0);


 FUNC_2(VAR_72, VAR_54, 0x80000ff);
 FUNC_2(VAR_72, VAR_59, 0x80808080);
 FUNC_2(VAR_72, VAR_59 + 0x4, 0x80808080);

 FUNC_2(VAR_72, VAR_58, 0x121700);
 FUNC_2(VAR_72, VAR_57, 0x800000);
}
