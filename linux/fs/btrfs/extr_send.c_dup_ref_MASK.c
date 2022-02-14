
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct recorded_ref {int list; int * full_path; int dir_gen; int dir; } ;
struct list_head {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 struct recorded_ref* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,struct list_head*) ;

__attribute__((used)) static int FUNC_3(struct recorded_ref *VAR_2, struct list_head *VAR_3)
{
 struct recorded_ref *VAR_4;

 VAR_4 = FUNC_1(sizeof(*VAR_2), VAR_1);
 if (!VAR_4)
  return -VAR_0;

 VAR_4->dir = VAR_2->dir;
 VAR_4->dir_gen = VAR_2->dir_gen;
 VAR_4->full_path = ((void*)0);
 FUNC_0(&VAR_4->list);
 FUNC_2(&VAR_4->list, VAR_3);
 return 0;
}
