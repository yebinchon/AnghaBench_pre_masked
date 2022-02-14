
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct TYPE_3__ {void* a3; void* a2; void* a1; void* a0; } ;
struct ssb_sprom {int revision; TYPE_1__ antenna_gain; int il0mac; scalar_t__ const* core_pwr_info; } ;
struct TYPE_4__ {int * pa_5gh; int * pa_5g; int * pa_5gl; int maxpwr_5gl; int maxpwr_5gh; int maxpwr_5g; int itssi_5g; int * pa_2g; int maxpwr_2g; int itssi_2g; } ;


 int FUNC_0 (scalar_t__ const*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,scalar_t__,int,int) ;
 size_t FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 scalar_t__ VAR_26 ;
 scalar_t__ VAR_27 ;
 scalar_t__ VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 scalar_t__ VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 scalar_t__ VAR_44 ;
 scalar_t__ VAR_45 ;
 scalar_t__ VAR_46 ;
 scalar_t__ VAR_47 ;
 scalar_t__ VAR_48 ;
 scalar_t__ VAR_49 ;
 scalar_t__ VAR_50 ;
 int VAR_51 ;
 int VAR_52 ;
 int VAR_53 ;
 scalar_t__ VAR_54 ;
 int VAR_55 ;
 int VAR_56 ;
 int VAR_57 ;
 scalar_t__ VAR_58 ;
 int VAR_59 ;
 int VAR_60 ;
 int VAR_61 ;
 scalar_t__ VAR_62 ;
 int VAR_63 ;
 int VAR_64 ;
 int VAR_65 ;
 int VAR_66 ;
 scalar_t__ VAR_67 ;
 int VAR_68 ;
 scalar_t__ VAR_69 ;
 int VAR_70 ;




 scalar_t__ VAR_71 ;
 scalar_t__ VAR_72 ;
 scalar_t__ VAR_73 ;
 scalar_t__ VAR_74 ;
 scalar_t__ VAR_75 ;
 scalar_t__ VAR_76 ;
 int VAR_77 ;
 int VAR_78 ;
 int VAR_79 ;
 scalar_t__ VAR_80 ;
 int VAR_81 ;
 int VAR_82 ;
 int VAR_83 ;
 scalar_t__ VAR_84 ;
 int * VAR_85 ;
 int VAR_86 ;
 int VAR_87 ;
 int VAR_88 ;
 int VAR_89 ;
 int VAR_90 ;
 int VAR_91 ;
 int VAR_92 ;
 int VAR_93 ;
 TYPE_2__* VAR_94 ;
 int VAR_95 ;
 int VAR_96 ;
 int VAR_97 ;
 int VAR_98 ;
 int VAR_99 ;
 int VAR_100 ;
 int VAR_101 ;
 int VAR_102 ;
 int VAR_103 ;
 int VAR_104 ;
 void* FUNC_4 (int,scalar_t__ const*,int ,int ,int ) ;
 int FUNC_5 (struct ssb_sprom*,scalar_t__ const*) ;
 int FUNC_6 (int ,scalar_t__ const*) ;

__attribute__((used)) static void FUNC_7(struct ssb_sprom *VAR_105, const u16 *VAR_106)
{
 static const u16 VAR_107[] = {
  131, 130,
  129, 128
 };
 u16 VAR_108;
 int VAR_109;

 FUNC_1(FUNC_0(VAR_107) !=
       FUNC_0(VAR_105->core_pwr_info));

 if (VAR_105->revision == 4)
  VAR_108 = VAR_62;
 else
  VAR_108 = VAR_84;

 FUNC_6(VAR_105->il0mac, &VAR_106[FUNC_3(VAR_108)]);

 FUNC_2(VAR_95, VAR_50, VAR_51, 0);
 FUNC_2(VAR_96, VAR_50, VAR_52,
      VAR_53);
 FUNC_2(VAR_88, VAR_48, 0xFFFF, 0);
 FUNC_2(VAR_89, VAR_0, 0xFFFF, 0);
 if (VAR_105->revision == 4) {
  FUNC_2(VAR_85[0], VAR_49, 0xff00, 8);
  FUNC_2(VAR_85[1], VAR_49, 0x00ff, 0);
  FUNC_2(VAR_93, VAR_47, 0xFFFF, 0);
  FUNC_2(VAR_92, VAR_46, 0xFFFF, 0);
  FUNC_2(VAR_91, VAR_45, 0xFFFF, 0);
  FUNC_2(VAR_90, VAR_44, 0xFFFF, 0);
 } else {
  FUNC_2(VAR_85[0], VAR_75, 0xff00, 8);
  FUNC_2(VAR_85[1], VAR_75, 0x00ff, 0);
  FUNC_2(VAR_93, VAR_74, 0xFFFF, 0);
  FUNC_2(VAR_92, VAR_73, 0xFFFF, 0);
  FUNC_2(VAR_91, VAR_72, 0xFFFF, 0);
  FUNC_2(VAR_90, VAR_71, 0xFFFF, 0);
 }
 FUNC_2(VAR_86, VAR_39, VAR_40,
      VAR_41);
 FUNC_2(VAR_87, VAR_39, VAR_42,
      VAR_43);
 FUNC_2(VAR_104, VAR_69, VAR_70, 0);
 FUNC_2(VAR_102, VAR_69, VAR_65,
      VAR_66);
 FUNC_2(VAR_103, VAR_67, VAR_68, 0);
 FUNC_2(VAR_101, VAR_67, VAR_63,
      VAR_64);
 if (VAR_105->revision == 4) {
  FUNC_2(VAR_97, VAR_54, VAR_55, 0);
  FUNC_2(VAR_98, VAR_54, VAR_56,
       VAR_57);
  FUNC_2(VAR_99, VAR_58, VAR_59, 0);
  FUNC_2(VAR_100, VAR_58, VAR_60,
       VAR_61);
 } else {
  FUNC_2(VAR_97, VAR_76, VAR_77, 0);
  FUNC_2(VAR_98, VAR_76, VAR_78,
       VAR_79);
  FUNC_2(VAR_99, VAR_80, VAR_81, 0);
  FUNC_2(VAR_100, VAR_80, VAR_82,
       VAR_83);
 }


 VAR_105->antenna_gain.a0 = FUNC_4(VAR_105->revision, VAR_106,
           VAR_30,
           VAR_29,
           VAR_31);
 VAR_105->antenna_gain.a1 = FUNC_4(VAR_105->revision, VAR_106,
           VAR_30,
           VAR_32,
           VAR_33);
 VAR_105->antenna_gain.a2 = FUNC_4(VAR_105->revision, VAR_106,
           VAR_35,
           VAR_34,
           VAR_36);
 VAR_105->antenna_gain.a3 = FUNC_4(VAR_105->revision, VAR_106,
           VAR_35,
           VAR_37,
           VAR_38);


 for (VAR_109 = 0; VAR_109 < FUNC_0(VAR_107); VAR_109++) {
  u16 VAR_110 = VAR_107[VAR_109];

  FUNC_2(VAR_94[VAR_109].itssi_2g, VAR_110 + VAR_4,
   VAR_1, VAR_2);
  FUNC_2(VAR_94[VAR_109].maxpwr_2g, VAR_110 + VAR_4,
   VAR_3, 0);

  FUNC_2(VAR_94[VAR_109].pa_2g[0], VAR_110 + VAR_5, ~0, 0);
  FUNC_2(VAR_94[VAR_109].pa_2g[1], VAR_110 + VAR_6, ~0, 0);
  FUNC_2(VAR_94[VAR_109].pa_2g[2], VAR_110 + VAR_7, ~0, 0);
  FUNC_2(VAR_94[VAR_109].pa_2g[3], VAR_110 + VAR_8, ~0, 0);

  FUNC_2(VAR_94[VAR_109].itssi_5g, VAR_110 + VAR_24,
   VAR_21, VAR_22);
  FUNC_2(VAR_94[VAR_109].maxpwr_5g, VAR_110 + VAR_24,
   VAR_23, 0);
  FUNC_2(VAR_94[VAR_109].maxpwr_5gh, VAR_110 + VAR_9,
   VAR_10, 0);
  FUNC_2(VAR_94[VAR_109].maxpwr_5gl, VAR_110 + VAR_9,
   VAR_15, VAR_16);

  FUNC_2(VAR_94[VAR_109].pa_5gl[0], VAR_110 + VAR_17, ~0, 0);
  FUNC_2(VAR_94[VAR_109].pa_5gl[1], VAR_110 + VAR_18, ~0, 0);
  FUNC_2(VAR_94[VAR_109].pa_5gl[2], VAR_110 + VAR_19, ~0, 0);
  FUNC_2(VAR_94[VAR_109].pa_5gl[3], VAR_110 + VAR_20, ~0, 0);
  FUNC_2(VAR_94[VAR_109].pa_5g[0], VAR_110 + VAR_25, ~0, 0);
  FUNC_2(VAR_94[VAR_109].pa_5g[1], VAR_110 + VAR_26, ~0, 0);
  FUNC_2(VAR_94[VAR_109].pa_5g[2], VAR_110 + VAR_27, ~0, 0);
  FUNC_2(VAR_94[VAR_109].pa_5g[3], VAR_110 + VAR_28, ~0, 0);
  FUNC_2(VAR_94[VAR_109].pa_5gh[0], VAR_110 + VAR_11, ~0, 0);
  FUNC_2(VAR_94[VAR_109].pa_5gh[1], VAR_110 + VAR_12, ~0, 0);
  FUNC_2(VAR_94[VAR_109].pa_5gh[2], VAR_110 + VAR_13, ~0, 0);
  FUNC_2(VAR_94[VAR_109].pa_5gh[3], VAR_110 + VAR_14, ~0, 0);
 }

 FUNC_5(VAR_105, VAR_106);


}
