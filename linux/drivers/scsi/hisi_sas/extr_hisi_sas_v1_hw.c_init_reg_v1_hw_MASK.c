
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hisi_hba {unsigned long long queue_count; int n_phy; int breakpoint_dma; int iost_dma; int itct_dma; int * complete_hdr_dma; int * cmd_hdr_dma; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
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
 int VAR_30 ;
 scalar_t__ VAR_31 ;
 scalar_t__ VAR_32 ;
 scalar_t__ VAR_33 ;
 scalar_t__ VAR_34 ;
 scalar_t__ VAR_35 ;
 scalar_t__ VAR_36 ;
 scalar_t__ VAR_37 ;
 scalar_t__ VAR_38 ;
 scalar_t__ VAR_39 ;
 scalar_t__ VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 scalar_t__ VAR_45 ;
 int VAR_46 ;
 scalar_t__ VAR_47 ;
 int VAR_48 ;
 int FUNC_0 (struct hisi_hba*,int,int ,int) ;
 int FUNC_1 (struct hisi_hba*,scalar_t__,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct hisi_hba *VAR_49)
{
 int VAR_50;


 FUNC_1(VAR_49, VAR_13,
    (u32)((1ULL << VAR_49->queue_count) - 1));
 FUNC_1(VAR_49, VAR_29, 0x11);
 FUNC_1(VAR_49, VAR_12, 0x1);
 FUNC_1(VAR_49, VAR_28, 0x1ff);
 FUNC_1(VAR_49, VAR_26, 0x401);
 FUNC_1(VAR_49, VAR_4, 0x64);
 FUNC_1(VAR_49, VAR_27, 0x1);
 FUNC_1(VAR_49, VAR_36, 0x64);
 FUNC_1(VAR_49, VAR_3, 0x2710);
 FUNC_1(VAR_49, VAR_45, 0x1);
 FUNC_1(VAR_49, VAR_5, 0x7a12);
 FUNC_1(VAR_49, VAR_25, 0x9c40);
 FUNC_1(VAR_49, VAR_24, 0x2);
 FUNC_1(VAR_49, VAR_31, 0xc);
 FUNC_1(VAR_49, VAR_38, 0x186a0);
 FUNC_1(VAR_49, VAR_37, 1);
 FUNC_1(VAR_49, VAR_19, 0x1);
 FUNC_1(VAR_49, VAR_18, 0x1);
 FUNC_1(VAR_49, VAR_39, 0xffffffff);
 FUNC_1(VAR_49, VAR_40, 0);
 FUNC_1(VAR_49, VAR_20, 0xffffffff);
 FUNC_1(VAR_49, VAR_22, 0);
 FUNC_1(VAR_49, VAR_21, 0xffffffff);
 FUNC_1(VAR_49, VAR_23, 0);
 FUNC_1(VAR_49, VAR_47, 0);
 FUNC_1(VAR_49, VAR_0, 0x2);
 FUNC_1(VAR_49, VAR_6, 0x22000000);

 for (VAR_50 = 0; VAR_50 < VAR_49->n_phy; VAR_50++) {
  FUNC_0(VAR_49, VAR_50, VAR_44, 0x88a);
  FUNC_0(VAR_49, VAR_50, VAR_41, 0x7c080);
  FUNC_0(VAR_49, VAR_50, VAR_43, 0x415ee00);
  FUNC_0(VAR_49, VAR_50, VAR_42, 0x80a80000);
  FUNC_0(VAR_49, VAR_50, VAR_48, 0x7d7d7d7d);
  FUNC_0(VAR_49, VAR_50, VAR_17, 0x0);
  FUNC_0(VAR_49, VAR_50, VAR_46, 0x1000);
  FUNC_0(VAR_49, VAR_50, VAR_17, 0);
  FUNC_0(VAR_49, VAR_50, VAR_11, 0x13f0a);
  FUNC_0(VAR_49, VAR_50, VAR_7, 3);
  FUNC_0(VAR_49, VAR_50, VAR_17, 8);
 }

 for (VAR_50 = 0; VAR_50 < VAR_49->queue_count; VAR_50++) {

  FUNC_1(VAR_49,
     VAR_14 + (VAR_50 * 0x14),
     FUNC_3(VAR_49->cmd_hdr_dma[VAR_50]));

  FUNC_1(VAR_49,
     VAR_15 + (VAR_50 * 0x14),
     FUNC_2(VAR_49->cmd_hdr_dma[VAR_50]));

  FUNC_1(VAR_49,
     VAR_16 + (VAR_50 * 0x14),
     VAR_30);


  FUNC_1(VAR_49,
     VAR_8 + (VAR_50 * 0x14),
     FUNC_3(VAR_49->complete_hdr_dma[VAR_50]));

  FUNC_1(VAR_49,
     VAR_9 + (VAR_50 * 0x14),
     FUNC_2(VAR_49->complete_hdr_dma[VAR_50]));

  FUNC_1(VAR_49, VAR_10 + (VAR_50 * 0x14),
     VAR_30);
 }


 FUNC_1(VAR_49, VAR_35,
    FUNC_2(VAR_49->itct_dma));

 FUNC_1(VAR_49, VAR_34,
    FUNC_3(VAR_49->itct_dma));


 FUNC_1(VAR_49, VAR_33,
    FUNC_2(VAR_49->iost_dma));

 FUNC_1(VAR_49, VAR_32,
    FUNC_3(VAR_49->iost_dma));


 FUNC_1(VAR_49, VAR_2,
    FUNC_2(VAR_49->breakpoint_dma));

 FUNC_1(VAR_49, VAR_1,
    FUNC_3(VAR_49->breakpoint_dma));
}
