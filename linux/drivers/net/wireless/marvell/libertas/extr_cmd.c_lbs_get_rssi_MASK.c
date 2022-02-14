
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lbs_private {int dummy; } ;
struct TYPE_2__ {void* size; } ;
struct cmd_ds_802_11_rssi {void* nf; void* n_or_snr; TYPE_1__ hdr; } ;
typedef int s8 ;
typedef int cmd ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int VAR_0 ;
 void* FUNC_3 (int) ;
 int FUNC_4 (struct lbs_private*,int ,struct cmd_ds_802_11_rssi*) ;
 int FUNC_5 (void*) ;
 int FUNC_6 (struct cmd_ds_802_11_rssi*,int ,int) ;

int FUNC_7(struct lbs_private *VAR_1, s8 *VAR_2, s8 *VAR_3)
{
 struct cmd_ds_802_11_rssi VAR_4;
 int VAR_5 = 0;

 FUNC_0(VAR_2 == ((void*)0));
 FUNC_0(VAR_3 == ((void*)0));

 FUNC_6(&VAR_4, 0, sizeof(VAR_4));
 VAR_4.hdr.size = FUNC_3(sizeof(VAR_4));

 VAR_4.n_or_snr = FUNC_3(8);

 VAR_5 = FUNC_4(VAR_1, VAR_0, &VAR_4);
 if (VAR_5 == 0) {
  *VAR_3 = FUNC_1(FUNC_5(VAR_4.nf));
  *VAR_2 = FUNC_2(FUNC_5(VAR_4.n_or_snr), FUNC_5(VAR_4.nf));
 }

 return VAR_5;
}
