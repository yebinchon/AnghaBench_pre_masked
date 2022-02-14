
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct mptsas_portinfo {int num_phys; TYPE_2__* phy_info; } ;
struct mptsas_phyinfo {struct mptsas_portinfo* portinfo; } ;
struct mptsas_devinfo {scalar_t__ sas_address; int handle_enclosure; int handle_parent; int handle; int id; int channel; } ;
struct TYPE_8__ {int sas_topology_mutex; } ;
struct TYPE_6__ {scalar_t__ sas_address; int handle_enclosure; int handle_parent; int handle; int id; int channel; } ;
struct TYPE_7__ {TYPE_1__ attached; } ;
typedef TYPE_3__ MPT_ADAPTER ;


 struct mptsas_phyinfo* FUNC_0 (TYPE_3__*,scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static struct mptsas_phyinfo *
FUNC_3(MPT_ADAPTER *VAR_0,
 struct mptsas_devinfo *VAR_1)
{
 struct mptsas_phyinfo *VAR_2;
 struct mptsas_portinfo *VAR_3;
 int VAR_4;

 VAR_2 = FUNC_0(VAR_0,
     VAR_1->sas_address);
 if (!VAR_2)
  goto out;
 VAR_3 = VAR_2->portinfo;
 if (!VAR_3)
  goto out;
 FUNC_1(&VAR_0->sas_topology_mutex);
 for (VAR_4 = 0; VAR_4 < VAR_3->num_phys; VAR_4++) {
  if (VAR_3->phy_info[VAR_4].attached.sas_address !=
   VAR_1->sas_address)
   continue;
  VAR_3->phy_info[VAR_4].attached.channel = VAR_1->channel;
  VAR_3->phy_info[VAR_4].attached.id = VAR_1->id;
  VAR_3->phy_info[VAR_4].attached.sas_address =
      VAR_1->sas_address;
  VAR_3->phy_info[VAR_4].attached.handle = VAR_1->handle;
  VAR_3->phy_info[VAR_4].attached.handle_parent =
      VAR_1->handle_parent;
  VAR_3->phy_info[VAR_4].attached.handle_enclosure =
      VAR_1->handle_enclosure;
 }
 FUNC_2(&VAR_0->sas_topology_mutex);
 out:
 return VAR_2;
}
