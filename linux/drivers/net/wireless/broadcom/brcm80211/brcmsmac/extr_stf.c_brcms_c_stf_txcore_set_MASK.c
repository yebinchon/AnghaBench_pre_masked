
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u8 ;
struct brcms_c_info {int bcn_rspec; scalar_t__ clk; TYPE_2__* stf; TYPE_3__* hw; TYPE_1__* pub; } ;
struct TYPE_6__ {int d11core; } ;
struct TYPE_5__ {scalar_t__ txstreams; size_t txchain; size_t* txcore; size_t phytxant; } ;
struct TYPE_4__ {int unit; } ;


 size_t VAR_0 ;
 int FUNC_0 (TYPE_3__*,size_t) ;
 int FUNC_1 (struct brcms_c_info*,int ) ;
 int FUNC_2 (struct brcms_c_info*) ;
 int FUNC_3 (struct brcms_c_info*) ;
 int FUNC_4 (int ,char*,int ,size_t,size_t) ;
 scalar_t__ FUNC_5 (size_t) ;

__attribute__((used)) static int FUNC_6(struct brcms_c_info *VAR_1, u8 VAR_2,
      u8 VAR_3)
{
 FUNC_4(VAR_1->hw->d11core, "wl%d: Nsts %d core_mask %x\n",
       VAR_1->pub->unit, VAR_2, VAR_3);

 if (FUNC_5(VAR_3) > VAR_1->stf->txstreams)
  VAR_3 = 0;

 if ((FUNC_5(VAR_3) == VAR_1->stf->txstreams) &&
     ((VAR_3 & ~VAR_1->stf->txchain)
      || !(VAR_3 & VAR_1->stf->txchain)))
  VAR_3 = VAR_1->stf->txchain;

 VAR_1->stf->txcore[VAR_2] = VAR_3;

 if (VAR_2 == 1) {



  VAR_1->stf->phytxant = VAR_3 << VAR_0;
  FUNC_0(VAR_1->hw, VAR_1->stf->phytxant);
  if (VAR_1->clk) {
   FUNC_3(VAR_1);
   FUNC_1(VAR_1, VAR_1->bcn_rspec);
   FUNC_2(VAR_1);
  }
 }

 return 0;
}
