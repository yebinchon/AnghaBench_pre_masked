
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wilc_vif {int dummy; } ;
struct host_if_msg {void (* fn ) (struct work_struct*) ;int is_sync; int work_comp; struct wilc_vif* vif; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct host_if_msg* FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 struct host_if_msg* FUNC_2 (int,int ) ;

__attribute__((used)) static struct host_if_msg*
FUNC_3(struct wilc_vif *VAR_3, void (*VAR_4)(struct work_struct *),
  bool VAR_5)
{
 struct host_if_msg *VAR_6;

 if (!VAR_4)
  return FUNC_0(-VAR_0);

 VAR_6 = FUNC_2(sizeof(*VAR_6), VAR_2);
 if (!VAR_6)
  return FUNC_0(-VAR_1);
 VAR_6->fn = VAR_4;
 VAR_6->vif = VAR_3;
 VAR_6->is_sync = VAR_5;
 if (VAR_5)
  FUNC_1(&VAR_6->work_comp);

 return VAR_6;
}
