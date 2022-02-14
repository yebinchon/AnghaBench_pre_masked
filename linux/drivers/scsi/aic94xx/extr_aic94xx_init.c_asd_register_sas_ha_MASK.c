
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct asd_sas_port {int dummy; } ;
typedef struct asd_sas_port asd_sas_phy ;
struct TYPE_6__ {char* sas_ha_name; int num_phys; struct asd_sas_port** sas_port; struct asd_sas_port** sas_phy; int * sas_addr; int lldd_module; } ;
struct TYPE_4__ {int * sas_addr; } ;
struct asd_ha_struct {TYPE_3__ sas_ha; struct asd_sas_port* ports; TYPE_2__* phys; TYPE_1__ hw_prof; scalar_t__ name; } ;
struct TYPE_5__ {struct asd_sas_port sas_phy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct asd_sas_port** FUNC_0 (int,int,int ) ;
 int FUNC_1 (struct asd_sas_port**) ;
 int FUNC_2 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_3(struct asd_ha_struct *VAR_4)
{
 int VAR_5;
 struct asd_sas_phy **VAR_6 =
  FUNC_0(VAR_0, sizeof(*VAR_6), VAR_2);
 struct asd_sas_port **VAR_7 =
  FUNC_0(VAR_0, sizeof(*VAR_7), VAR_2);

 if (!VAR_6 || !VAR_7) {
  FUNC_1(VAR_6);
  FUNC_1(VAR_7);
  return -VAR_1;
 }

 VAR_4->sas_ha.sas_ha_name = (char *) VAR_4->name;
 VAR_4->sas_ha.lldd_module = VAR_3;
 VAR_4->sas_ha.sas_addr = &VAR_4->hw_prof.sas_addr[0];

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  VAR_6[VAR_5] = &VAR_4->phys[VAR_5].sas_phy;
  VAR_7[VAR_5] = &VAR_4->ports[VAR_5];
 }

 VAR_4->sas_ha.sas_phy = VAR_6;
 VAR_4->sas_ha.sas_port= VAR_7;
 VAR_4->sas_ha.num_phys= VAR_0;

 return FUNC_2(&VAR_4->sas_ha);
}
