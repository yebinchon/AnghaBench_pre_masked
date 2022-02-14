
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int typebuf ;
struct efx_udp_tunnel {scalar_t__ type; int port; scalar_t__ count; } ;
struct efx_nic {int net_dev; struct efx_ef10_nic_data* nic_data; } ;
struct efx_ef10_nic_data {int datapath_caps; int udp_tunnels_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct efx_udp_tunnel* FUNC_0 (struct efx_nic*,int ) ;
 int VAR_2 ;
 int FUNC_1 (struct efx_nic*) ;
 int FUNC_2 (struct efx_nic*,int) ;
 int FUNC_3 (scalar_t__,char*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct efx_nic*,int ,int ,char*,char*,...) ;
 int FUNC_7 (struct efx_nic*,int ,int ,char*,int ,char*) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(struct efx_nic *VAR_3,
         struct efx_udp_tunnel VAR_4)
{
 struct efx_ef10_nic_data *VAR_5 = VAR_3->nic_data;
 struct efx_udp_tunnel *VAR_6;
 char VAR_7[8];
 int VAR_8;

 if (!(VAR_5->datapath_caps &
       (1 << VAR_1)))
  return 0;

 FUNC_3(VAR_4.type, VAR_7, sizeof(VAR_7));
 FUNC_6(VAR_3, VAR_2, VAR_3->net_dev, "Removing UDP tunnel (%s) port %d\n",
    VAR_7, FUNC_8(VAR_4.port));

 FUNC_4(&VAR_5->udp_tunnels_lock);



 FUNC_1(VAR_3);

 VAR_6 = FUNC_0(VAR_3, VAR_4.port);
 if (VAR_6 != ((void*)0)) {
  if (VAR_6->type == VAR_4.type) {
   if (--VAR_6->count) {

    FUNC_6(VAR_3, VAR_2, VAR_3->net_dev,
       "UDP tunnel port %d remains active\n",
       FUNC_8(VAR_4.port));
    VAR_8 = 0;
    goto out_unlock;
   }
   VAR_8 = FUNC_2(VAR_3, 0);
   goto out_unlock;
  }
  FUNC_3(VAR_6->type,
          VAR_7, sizeof(VAR_7));
  FUNC_7(VAR_3, VAR_2, VAR_3->net_dev,
      "UDP port %d is actually in use by %s, not removing\n",
      FUNC_8(VAR_4.port), VAR_7);
 }
 VAR_8 = -VAR_0;

out_unlock:
 FUNC_5(&VAR_5->udp_tunnels_lock);
 return VAR_8;
}
