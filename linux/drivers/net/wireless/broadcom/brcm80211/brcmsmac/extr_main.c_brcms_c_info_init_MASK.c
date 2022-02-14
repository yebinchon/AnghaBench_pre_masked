
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct brcms_c_info {int shortslot; int include_legacy_erp; TYPE_2__* pub; int LRL; int SRL; int LFBL; int SFBL; int RTSThresh; void** fragthresh; void* usr_fragthresh; int prb_resp_timeout; TYPE_1__* stf; int shortslot_override; int chanspec; } ;
struct TYPE_4__ {int _ampdu; } ;
struct TYPE_3__ {int txant; int ant_rx_ovr; } ;


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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 void* VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_0 (struct brcms_c_info*,int ,int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(struct brcms_c_info *VAR_24, int VAR_25)
{
 int VAR_26;


 VAR_24->chanspec = FUNC_1(1);


 VAR_24->shortslot = 0;
 VAR_24->shortslot_override = VAR_16;

 FUNC_0(VAR_24, VAR_8, VAR_6);
 FUNC_0(VAR_24, VAR_9, 0);

 FUNC_0(VAR_24, VAR_11,
          VAR_6);
 FUNC_0(VAR_24, VAR_10, VAR_4);
 FUNC_0(VAR_24, VAR_13,
          VAR_6);
 FUNC_0(VAR_24, VAR_12, 0);
 FUNC_0(VAR_24, VAR_14, VAR_3);

 FUNC_0(VAR_24, VAR_15,
          VAR_7);


 VAR_24->include_legacy_erp = 1;

 VAR_24->stf->ant_rx_ovr = VAR_1;
 VAR_24->stf->txant = VAR_2;

 VAR_24->prb_resp_timeout = VAR_5;

 VAR_24->usr_fragthresh = VAR_17;
 for (VAR_26 = 0; VAR_26 < VAR_19; VAR_26++)
  VAR_24->fragthresh[VAR_26] = VAR_17;
 VAR_24->RTSThresh = VAR_18;


 VAR_24->SFBL = VAR_23;
 VAR_24->LFBL = VAR_21;


 VAR_24->SRL = VAR_22;
 VAR_24->LRL = VAR_20;


 VAR_24->pub->_ampdu = VAR_0;
}
