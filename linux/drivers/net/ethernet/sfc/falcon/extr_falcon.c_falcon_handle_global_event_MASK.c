
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct falcon_nic_data {int xmac_poll_required; } ;
struct ef4_nic {int rx_reset; int net_dev; struct falcon_nic_data* nic_data; } ;
struct ef4_channel {int channel; struct ef4_nic* efx; } ;
typedef int ef4_qword_t ;


 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (struct ef4_nic*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct ef4_nic*) ;
 int FUNC_4 (struct ef4_nic*,int ) ;
 int FUNC_5 (struct ef4_nic*,int ,int ,char*,int ) ;
 int VAR_10 ;

__attribute__((used)) static bool
FUNC_6(struct ef4_channel *VAR_11, ef4_qword_t *VAR_12)
{
 struct ef4_nic *VAR_13 = VAR_11->efx;
 struct falcon_nic_data *VAR_14 = VAR_13->nic_data;

 if (FUNC_0(*VAR_12, VAR_3) ||
     FUNC_0(*VAR_12, VAR_5) ||
     FUNC_0(*VAR_12, VAR_4))

  return 1;

 if ((FUNC_3(VAR_13) == VAR_1) &&
     FUNC_0(*VAR_12, VAR_7)) {
  VAR_14->xmac_poll_required = 1;
  return 1;
 }

 if (FUNC_3(VAR_13) <= VAR_0 ?
     FUNC_0(*VAR_12, VAR_2) :
     FUNC_0(*VAR_12, VAR_6)) {
  FUNC_5(VAR_13, VAR_10, VAR_13->net_dev,
     "channel %d seen global RX_RESET event. Resetting.\n",
     VAR_11->channel);

  FUNC_2(&VAR_13->rx_reset);
  FUNC_4(VAR_13, FUNC_1(VAR_13) ?
       VAR_9 : VAR_8);
  return 1;
 }

 return 0;
}
