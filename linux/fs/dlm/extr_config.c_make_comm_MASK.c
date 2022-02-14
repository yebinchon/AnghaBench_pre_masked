
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct config_item {int dummy; } ;
struct dlm_comm {int nodeid; struct config_item item; scalar_t__ addr_count; scalar_t__ local; scalar_t__ seq; } ;
struct config_group {int dummy; } ;


 int VAR_0 ;
 struct config_item* FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct config_item*,char const*,int *) ;
 int VAR_3 ;
 struct dlm_comm* FUNC_2 (int,int ) ;

__attribute__((used)) static struct config_item *FUNC_3(struct config_group *VAR_4, const char *VAR_5)
{
 struct dlm_comm *VAR_6;

 VAR_6 = FUNC_2(sizeof(struct dlm_comm), VAR_1);
 if (!VAR_6)
  return FUNC_0(-VAR_0);

 FUNC_1(&VAR_6->item, VAR_5, &VAR_2);

 VAR_6->seq = VAR_3++;
 if (!VAR_6->seq)
  VAR_6->seq = VAR_3++;

 VAR_6->nodeid = -1;
 VAR_6->local = 0;
 VAR_6->addr_count = 0;
 return &VAR_6->item;
}
