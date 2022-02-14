
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct config_group {int dummy; } ;
struct TYPE_4__ {int grpid; struct config_group group; struct nvmet_port* port; } ;
struct TYPE_3__ {int treq; int portid; } ;
struct nvmet_port {int inline_data_size; struct config_group group; struct config_group ana_groups_group; TYPE_2__ ana_default_group; struct config_group referrals_group; struct config_group subsys_group; TYPE_1__ disc_addr; int referrals; int subsystems; int entry; int global_entry; int * ana_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct config_group* FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 char* FUNC_2 (int) ;
 int FUNC_3 (struct config_group*,char const*,int *) ;
 int FUNC_4 (struct config_group*,struct config_group*) ;
 int FUNC_5 (int ) ;
 int * FUNC_6 (int,int,int ) ;
 int FUNC_7 (struct nvmet_port*) ;
 scalar_t__ FUNC_8 (char const*,int ,int *) ;
 struct nvmet_port* FUNC_9 (int,int ) ;
 int FUNC_10 (int *,int *) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;

__attribute__((used)) static struct config_group *FUNC_11(struct config_group *VAR_14,
  const char *VAR_15)
{
 struct nvmet_port *VAR_16;
 u16 VAR_17;
 u32 VAR_18;

 if (FUNC_8(VAR_15, 0, &VAR_17))
  return FUNC_0(-VAR_0);

 VAR_16 = FUNC_9(sizeof(*VAR_16), VAR_2);
 if (!VAR_16)
  return FUNC_0(-VAR_1);

 VAR_16->ana_state = FUNC_6(VAR_4 + 1,
   sizeof(*VAR_16->ana_state), VAR_2);
 if (!VAR_16->ana_state) {
  FUNC_7(VAR_16);
  return FUNC_0(-VAR_1);
 }

 for (VAR_18 = 1; VAR_18 <= VAR_4; VAR_18++) {
  if (VAR_18 == VAR_3)
   VAR_16->ana_state[1] = VAR_6;
  else
   VAR_16->ana_state[VAR_18] = VAR_5;
 }

 FUNC_10(&VAR_16->global_entry, &VAR_12);

 FUNC_1(&VAR_16->entry);
 FUNC_1(&VAR_16->subsystems);
 FUNC_1(&VAR_16->referrals);
 VAR_16->inline_data_size = -1;

 VAR_16->disc_addr.portid = FUNC_5(VAR_17);
 VAR_16->disc_addr.treq = VAR_7;
 FUNC_3(&VAR_16->group, VAR_15, &VAR_11);

 FUNC_3(&VAR_16->subsys_group,
   "subsystems", &VAR_10);
 FUNC_4(&VAR_16->subsys_group, &VAR_16->group);

 FUNC_3(&VAR_16->referrals_group,
   "referrals", &VAR_13);
 FUNC_4(&VAR_16->referrals_group, &VAR_16->group);

 FUNC_3(&VAR_16->ana_groups_group,
   "ana_groups", &VAR_9);
 FUNC_4(&VAR_16->ana_groups_group, &VAR_16->group);

 VAR_16->ana_default_group.port = VAR_16;
 VAR_16->ana_default_group.grpid = VAR_3;
 FUNC_3(&VAR_16->ana_default_group.group,
   FUNC_2(VAR_3),
   &VAR_8);
 FUNC_4(&VAR_16->ana_default_group.group,
   &VAR_16->ana_groups_group);

 return &VAR_16->group;
}
