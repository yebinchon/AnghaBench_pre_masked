
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nvmet_port {int dummy; } ;
struct config_group {int cg_item; } ;
struct nvmet_ana_group {int grpid; struct config_group group; struct nvmet_port* port; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct config_group* FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 struct nvmet_port* FUNC_1 (int *) ;
 int FUNC_2 (struct config_group*,char const*,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char const*,int ,int*) ;
 struct nvmet_ana_group* FUNC_5 (int,int ) ;
 int * VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_6 (struct nvmet_port*) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static struct config_group *FUNC_8(
  struct config_group *VAR_7, const char *VAR_8)
{
 struct nvmet_port *VAR_9 = FUNC_1(&VAR_7->cg_item);
 struct nvmet_ana_group *VAR_10;
 u32 VAR_11;
 int VAR_12;

 VAR_12 = FUNC_4(VAR_8, 0, &VAR_11);
 if (VAR_12)
  goto out;

 VAR_12 = -VAR_0;
 if (VAR_11 <= 1 || VAR_11 > VAR_3)
  goto out;

 VAR_12 = -VAR_1;
 VAR_10 = FUNC_5(sizeof(*VAR_10), VAR_2);
 if (!VAR_10)
  goto out;
 VAR_10->port = VAR_9;
 VAR_10->grpid = VAR_11;

 FUNC_3(&VAR_6);
 VAR_4[VAR_11]++;
 FUNC_7(&VAR_6);

 FUNC_6(VAR_10->port);

 FUNC_2(&VAR_10->group, VAR_8, &VAR_5);
 return &VAR_10->group;
out:
 return FUNC_0(VAR_12);
}
