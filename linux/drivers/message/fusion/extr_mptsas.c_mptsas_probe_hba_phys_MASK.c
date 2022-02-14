
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_8__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {int phy_id; scalar_t__ handle; scalar_t__ sas_address; } ;
struct mptsas_portinfo {int num_phys; int phy_id; struct mptsas_portinfo* phy_info; TYPE_8__ attached; TYPE_8__ identify; scalar_t__ handle; int port_id; int negotiated_link_rate; int list; } ;
struct TYPE_11__ {int hba_port_num_phy; int num_ports; int sas_index; TYPE_1__* sh; scalar_t__ hba_port_sas_addr; int sas_topology_mutex; int sas_topology; struct mptsas_portinfo* hba_port_info; } ;
struct TYPE_10__ {int shost_gendev; } ;
typedef TYPE_2__ MPT_ADAPTER ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct mptsas_portinfo*) ;
 struct mptsas_portinfo* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,struct mptsas_portinfo*,int ,int) ;
 int FUNC_4 (TYPE_2__*,TYPE_8__*,int,scalar_t__) ;
 int FUNC_5 (TYPE_2__*,struct mptsas_portinfo*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*,struct mptsas_portinfo*,int,int) ;
 int FUNC_8 (TYPE_2__*,struct mptsas_portinfo*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static int
FUNC_11(MPT_ADAPTER *VAR_6)
{
 struct mptsas_portinfo *VAR_7, *VAR_8;
 int VAR_9 = -VAR_0, VAR_10;

 VAR_8 = FUNC_1(sizeof(struct mptsas_portinfo), VAR_1);
 if (! VAR_8)
  goto out;

 VAR_9 = FUNC_5(VAR_6, VAR_8);
 if (VAR_9)
  goto out_free_port_info;

 FUNC_6(VAR_6);
 FUNC_9(&VAR_6->sas_topology_mutex);
 VAR_7 = VAR_6->hba_port_info;
 if (!VAR_7) {
  VAR_6->hba_port_info = VAR_7 = VAR_8;
  VAR_6->hba_port_num_phy = VAR_7->num_phys;
  FUNC_2(&VAR_7->list, &VAR_6->sas_topology);
 } else {
  for (VAR_10 = 0; VAR_10 < VAR_8->num_phys; VAR_10++) {
   VAR_7->phy_info[VAR_10].negotiated_link_rate =
    VAR_8->phy_info[VAR_10].negotiated_link_rate;
   VAR_7->phy_info[VAR_10].handle =
    VAR_8->phy_info[VAR_10].handle;
   VAR_7->phy_info[VAR_10].port_id =
    VAR_8->phy_info[VAR_10].port_id;
  }
  FUNC_0(VAR_8->phy_info);
  FUNC_0(VAR_8);
  VAR_8 = ((void*)0);
 }
 FUNC_10(&VAR_6->sas_topology_mutex);



 for (VAR_10 = 0; VAR_10 < VAR_7->num_phys; VAR_10++) {
  FUNC_7(VAR_6, &VAR_7->phy_info[VAR_10],
   (VAR_4 <<
    VAR_5), VAR_10);
  VAR_7->phy_info[VAR_10].identify.handle =
      VAR_7->phy_info[VAR_10].handle;
  FUNC_4(VAR_6, &VAR_7->phy_info[VAR_10].identify,
   (VAR_2 <<
    VAR_3),
    VAR_7->phy_info[VAR_10].identify.handle);
  if (!VAR_6->hba_port_sas_addr)
   VAR_6->hba_port_sas_addr =
       VAR_7->phy_info[VAR_10].identify.sas_address;
  VAR_7->phy_info[VAR_10].identify.phy_id =
      VAR_7->phy_info[VAR_10].phy_id = VAR_10;
  if (VAR_7->phy_info[VAR_10].attached.handle)
   FUNC_4(VAR_6,
    &VAR_7->phy_info[VAR_10].attached,
    (VAR_2 <<
     VAR_3),
    VAR_7->phy_info[VAR_10].attached.handle);
 }

 FUNC_8(VAR_6, VAR_7);

 for (VAR_10 = 0; VAR_10 < VAR_7->num_phys; VAR_10++, VAR_6->sas_index++)
  FUNC_3(&VAR_6->sh->shost_gendev,
      &VAR_7->phy_info[VAR_10], VAR_6->sas_index, 1);

 return 0;

 out_free_port_info:
 FUNC_0(VAR_8);
 out:
 return VAR_9;
}
