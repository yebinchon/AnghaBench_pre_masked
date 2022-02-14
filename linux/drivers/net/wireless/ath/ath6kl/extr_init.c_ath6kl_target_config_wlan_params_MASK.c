
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath6kl {int conf_flags; int p2p; int vif_max; int wmi; int rx_meta_ver; } ;


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
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int ,int,int ) ;
 int FUNC_3 (int ,int,int) ;
 int FUNC_4 (int ,int,int ,int,int ,int ,int,int ) ;
 int FUNC_5 (int ,int,int) ;
 int FUNC_6 (int ,int,int ) ;
 int FUNC_7 (int ,int,int ,int ) ;
 int FUNC_8 (int ,int,int ,int ,int ) ;
 int FUNC_9 (int ,int,int ) ;

__attribute__((used)) static int FUNC_10(struct ath6kl *VAR_12, int VAR_13)
{
 int VAR_14;






 VAR_14 = FUNC_8(VAR_12->wmi, VAR_13,
       VAR_12->rx_meta_ver, 0, 0);
 if (VAR_14) {
  FUNC_1("unable to set the rx frame format: %d\n", VAR_14);
  return VAR_14;
 }

 if (VAR_12->conf_flags & VAR_2) {
  VAR_14 = FUNC_4(VAR_12->wmi, VAR_13, 0, 1, 0, 0, 1,
           VAR_4);
  if (VAR_14) {
   FUNC_1("unable to set power save fail event policy: %d\n",
       VAR_14);
   return VAR_14;
  }
 }

 if (!(VAR_12->conf_flags & VAR_1)) {
  VAR_14 = FUNC_7(VAR_12->wmi, VAR_13, 0,
         VAR_10);
  if (VAR_14) {
   FUNC_1("unable to set barker preamble policy: %d\n",
       VAR_14);
   return VAR_14;
  }
 }

 VAR_14 = FUNC_6(VAR_12->wmi, VAR_13,
        VAR_9);
 if (VAR_14) {
  FUNC_1("unable to set keep alive interval: %d\n", VAR_14);
  return VAR_14;
 }

 VAR_14 = FUNC_2(VAR_12->wmi, VAR_13,
      VAR_8);
 if (VAR_14) {
  FUNC_1("unable to set disconnect timeout: %d\n", VAR_14);
  return VAR_14;
 }

 if (!(VAR_12->conf_flags & VAR_0)) {
  VAR_14 = FUNC_9(VAR_12->wmi, VAR_13, VAR_11);
  if (VAR_14) {
   FUNC_1("unable to set txop bursting: %d\n", VAR_14);
   return VAR_14;
  }
 }

 if (VAR_12->p2p && (VAR_12->vif_max == 1 || VAR_13)) {
  VAR_14 = FUNC_3(VAR_12->wmi, VAR_13,
           VAR_5 |
           VAR_7 |
           VAR_6);
  if (VAR_14) {
   FUNC_0(VAR_3,
       "failed to request P2P capabilities (%d) - assuming P2P not supported\n",
       VAR_14);
   VAR_12->p2p = 0;
  }
 }

 if (VAR_12->p2p && (VAR_12->vif_max == 1 || VAR_13)) {

  VAR_14 = FUNC_5(VAR_12->wmi, VAR_13, 1);
  if (VAR_14) {
   FUNC_0(VAR_3,
       "failed to enable Probe Request reporting (%d)\n",
       VAR_14);
  }
 }

 return VAR_14;
}
