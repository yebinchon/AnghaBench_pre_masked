
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int typebuf ;
struct efx_udp_tunnel {scalar_t__ type; int count; int port; } ;
struct efx_nic {int net_dev; struct efx_ef10_nic_data* nic_data; } ;
struct efx_ef10_nic_data {int datapath_caps; int udp_tunnels_lock; struct efx_udp_tunnel* udp_tunnels; } ;


 size_t FUNC_0 (struct efx_udp_tunnel*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct efx_udp_tunnel* FUNC_1 (struct efx_nic*,int ) ;
 int VAR_3 ;
 int FUNC_2 (struct efx_nic*) ;
 int FUNC_3 (struct efx_nic*,int) ;
 int FUNC_4 (scalar_t__,char*,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct efx_nic*,int ,int ,char*,...) ;
 char* FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(struct efx_nic *VAR_4,
         struct efx_udp_tunnel VAR_5)
{
 struct efx_ef10_nic_data *VAR_6 = VAR_4->nic_data;
 struct efx_udp_tunnel *VAR_7;
 char VAR_8[8];
 size_t VAR_9;
 int VAR_10;

 if (!(VAR_6->datapath_caps &
       (1 << VAR_2)))
  return 0;

 FUNC_4(VAR_5.type, VAR_8, sizeof(VAR_8));
 FUNC_7(VAR_4, VAR_3, VAR_4->net_dev, "Adding UDP tunnel (%s) port %d\n",
    VAR_8, FUNC_8(VAR_5.port));

 FUNC_5(&VAR_6->udp_tunnels_lock);



 FUNC_2(VAR_4);

 VAR_7 = FUNC_1(VAR_4, VAR_5.port);
 if (VAR_7 != ((void*)0)) {
  if (VAR_7->type == VAR_5.type) {
   FUNC_7(VAR_4, VAR_3, VAR_4->net_dev,
      "Referencing existing tunnel entry\n");
   VAR_7->count++;

   VAR_10 = 0;
   goto unlock_out;
  }
  FUNC_4(VAR_7->type,
          VAR_8, sizeof(VAR_8));
  FUNC_7(VAR_4, VAR_3, VAR_4->net_dev,
     "UDP port %d is already in use by %s\n",
     FUNC_8(VAR_5.port), VAR_8);
  VAR_10 = -VAR_0;
  goto unlock_out;
 }

 for (VAR_9 = 0; VAR_9 < FUNC_0(VAR_6->udp_tunnels); ++VAR_9)
  if (!VAR_6->udp_tunnels[VAR_9].count) {
   VAR_6->udp_tunnels[VAR_9] = VAR_5;
   VAR_6->udp_tunnels[VAR_9].count = 1;
   VAR_10 = FUNC_3(VAR_4, 0);
   goto unlock_out;
  }

 FUNC_7(VAR_4, VAR_3, VAR_4->net_dev,
    "Unable to add UDP tunnel (%s) port %d; insufficient resources.\n",
    VAR_8, FUNC_8(VAR_5.port));

 VAR_10 = -VAR_1;

unlock_out:
 FUNC_6(&VAR_6->udp_tunnels_lock);
 return VAR_10;
}
