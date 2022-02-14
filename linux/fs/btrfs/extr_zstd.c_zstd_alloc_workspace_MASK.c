
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_head {int dummy; } ;
struct workspace {unsigned int level; unsigned int req_level; struct list_head list; struct list_head lru_list; int buf; int mem; int size; int last_used; } ;


 int VAR_0 ;
 struct list_head* FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (struct list_head*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 struct workspace* FUNC_4 (int,int ) ;
 int FUNC_5 (struct list_head*) ;
 int * VAR_4 ;

__attribute__((used)) static struct list_head *FUNC_6(unsigned int VAR_5)
{
 struct workspace *VAR_6;

 VAR_6 = FUNC_4(sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return FUNC_0(-VAR_0);

 VAR_6->size = VAR_4[VAR_5 - 1];
 VAR_6->level = VAR_5;
 VAR_6->req_level = VAR_5;
 VAR_6->last_used = VAR_3;
 VAR_6->mem = FUNC_3(VAR_6->size, VAR_1);
 VAR_6->buf = FUNC_2(VAR_2, VAR_1);
 if (!VAR_6->mem || !VAR_6->buf)
  goto fail;

 FUNC_1(&VAR_6->list);
 FUNC_1(&VAR_6->lru_list);

 return &VAR_6->list;
fail:
 FUNC_5(&VAR_6->list);
 return FUNC_0(-VAR_0);
}
