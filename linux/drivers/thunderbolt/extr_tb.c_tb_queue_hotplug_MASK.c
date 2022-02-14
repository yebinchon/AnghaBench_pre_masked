
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
struct tb_hotplug_event {int unplug; int work; int port; int route; struct tb* tb; } ;
struct tb {int wq; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 struct tb_hotplug_event* FUNC_1 (int,int ) ;
 int FUNC_2 (int ,int *) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_3(struct tb *VAR_2, u64 VAR_3, u8 VAR_4, bool VAR_5)
{
 struct tb_hotplug_event *VAR_6;

 VAR_6 = FUNC_1(sizeof(*VAR_6), VAR_0);
 if (!VAR_6)
  return;

 VAR_6->tb = VAR_2;
 VAR_6->route = VAR_3;
 VAR_6->port = VAR_4;
 VAR_6->unplug = VAR_5;
 FUNC_0(&VAR_6->work, VAR_1);
 FUNC_2(VAR_2->wq, &VAR_6->work);
}
