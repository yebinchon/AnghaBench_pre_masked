
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


struct TYPE_13__ {scalar_t__ antswlut; int tr_iso; int pdet_range; int extpa_gain; int tssipos; } ;
struct TYPE_11__ {scalar_t__ antswlut; int tr_iso; int pdet_range; int extpa_gain; int tssipos; } ;
struct TYPE_14__ {TYPE_6__ ghz2; TYPE_4__ ghz5; } ;
struct ssb_sprom {scalar_t__ tempthresh; scalar_t__ tempoffset; scalar_t__ phycal_tempdelta; TYPE_7__ fem; int ant_available_a; int ant_available_bg; int antswitch; } ;
struct TYPE_12__ {scalar_t__ antswctrllut; int triso; int pdetrange; int extpagain; int tssipos; } ;
struct TYPE_10__ {scalar_t__ antswctrllut; int triso; int pdetrange; int extpagain; int tssipos; } ;
struct brcms_phy {scalar_t__ phy_txcore_disable_temp; scalar_t__ phy_tempsense_offset; scalar_t__ phy_txcore_enable_temp; scalar_t__ phycal_tempdelta; TYPE_5__ srom_fem5g; TYPE_3__ srom_fem2g; int aa5g; int aa2g; int antswitch; TYPE_2__* d11core; } ;
struct TYPE_9__ {TYPE_1__* bus; } ;
struct TYPE_8__ {struct ssb_sprom sprom; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct brcms_phy*) ;
 int FUNC_1 (struct brcms_phy*) ;

__attribute__((used)) static bool FUNC_2(struct brcms_phy *VAR_6)
{
 struct ssb_sprom *VAR_7 = &VAR_6->d11core->bus->sprom;

 VAR_6->antswitch = VAR_7->antswitch;
 VAR_6->aa2g = VAR_7->ant_available_bg;
 VAR_6->aa5g = VAR_7->ant_available_a;

 VAR_6->srom_fem2g.tssipos = VAR_7->fem.ghz2.tssipos;
 VAR_6->srom_fem2g.extpagain = VAR_7->fem.ghz2.extpa_gain;
 VAR_6->srom_fem2g.pdetrange = VAR_7->fem.ghz2.pdet_range;
 VAR_6->srom_fem2g.triso = VAR_7->fem.ghz2.tr_iso;
 VAR_6->srom_fem2g.antswctrllut = VAR_7->fem.ghz2.antswlut;

 VAR_6->srom_fem5g.tssipos = VAR_7->fem.ghz5.tssipos;
 VAR_6->srom_fem5g.extpagain = VAR_7->fem.ghz5.extpa_gain;
 VAR_6->srom_fem5g.pdetrange = VAR_7->fem.ghz5.pdet_range;
 VAR_6->srom_fem5g.triso = VAR_7->fem.ghz5.tr_iso;
 if (VAR_7->fem.ghz5.antswlut)
  VAR_6->srom_fem5g.antswctrllut = VAR_7->fem.ghz5.antswlut;
 else
  VAR_6->srom_fem5g.antswctrllut = VAR_7->fem.ghz2.antswlut;

 FUNC_0(VAR_6);

 VAR_6->phy_txcore_disable_temp = VAR_7->tempthresh;
 if (VAR_6->phy_txcore_disable_temp == 0)
  VAR_6->phy_txcore_disable_temp = VAR_4;

 VAR_6->phy_tempsense_offset = VAR_7->tempoffset;
 if (VAR_6->phy_tempsense_offset != 0) {
  if (VAR_6->phy_tempsense_offset >
      (VAR_3 + VAR_1))
   VAR_6->phy_tempsense_offset = VAR_1;
  else if (VAR_6->phy_tempsense_offset < (VAR_3 +
           VAR_2))
   VAR_6->phy_tempsense_offset = VAR_2;
  else
   VAR_6->phy_tempsense_offset -= VAR_3;
 }

 VAR_6->phy_txcore_enable_temp =
  VAR_6->phy_txcore_disable_temp - VAR_5;

 VAR_6->phycal_tempdelta = VAR_7->phycal_tempdelta;
 if (VAR_6->phycal_tempdelta > VAR_0)
  VAR_6->phycal_tempdelta = 0;

 FUNC_1(VAR_6);

 return 1;
}
