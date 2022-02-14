
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct brcms_c_info {TYPE_1__* pub; TYPE_2__* band; } ;
struct ampdu_info {int* ini_enable; int mfbr; int tx_max_funl; int dur; int rr_retry_limit; int * rr_retry_limit_tid; int retry_limit; int * retry_limit_tid; int rx_factor; int ffpld_rsvd; int max_pdu; int mpdu_density; int ba_rx_wsize; int ba_tx_wsize; struct brcms_c_info* wlc; } ;
struct TYPE_4__ {int phyrev; } ;
struct TYPE_3__ {int _ampdu; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_1 (int ,int) ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 size_t VAR_15 ;
 size_t VAR_16 ;
 int FUNC_2 (struct ampdu_info*,int ) ;
 int FUNC_3 (struct ampdu_info*) ;
 int FUNC_4 (struct ampdu_info*,int ) ;
 struct ampdu_info* FUNC_5 (int,int ) ;

struct ampdu_info *FUNC_6(struct brcms_c_info *VAR_17)
{
 struct ampdu_info *VAR_18;
 int VAR_19;

 VAR_18 = FUNC_5(sizeof(struct ampdu_info), VAR_10);
 if (!VAR_18)
  return ((void*)0);

 VAR_18->wlc = VAR_17;

 for (VAR_19 = 0; VAR_19 < VAR_5; VAR_19++)
  VAR_18->ini_enable[VAR_19] = 1;

 VAR_18->ini_enable[VAR_16] = 0;
 VAR_18->ini_enable[VAR_14] = 0;


 VAR_18->ini_enable[VAR_15] = 0;
 VAR_18->ini_enable[VAR_13] = 0;

 VAR_18->ba_tx_wsize = VAR_7;
 VAR_18->ba_rx_wsize = VAR_6;
 VAR_18->mpdu_density = VAR_1;
 VAR_18->max_pdu = VAR_8;
 VAR_18->dur = VAR_4;

 VAR_18->ffpld_rsvd = VAR_0;




 if (FUNC_0(VAR_17->band) && FUNC_1(VAR_17->band->phyrev, 2))
  VAR_18->rx_factor = VAR_11;
 else
  VAR_18->rx_factor = VAR_12;
 VAR_18->retry_limit = VAR_2;
 VAR_18->rr_retry_limit = VAR_3;

 for (VAR_19 = 0; VAR_19 < VAR_5; VAR_19++) {
  VAR_18->retry_limit_tid[VAR_19] = VAR_18->retry_limit;
  VAR_18->rr_retry_limit_tid[VAR_19] = VAR_18->rr_retry_limit;
 }

 FUNC_4(VAR_18, VAR_18->dur);
 VAR_18->mfbr = 0;

 FUNC_2(VAR_18, VAR_17->pub->_ampdu);

 VAR_18->tx_max_funl = VAR_9;
 FUNC_3(VAR_18);

 return VAR_18;
}
