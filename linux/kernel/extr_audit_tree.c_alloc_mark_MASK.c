
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsnotify_mark {int mask; } ;
struct audit_tree_mark {struct fsnotify_mark mark; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct fsnotify_mark*,int ) ;
 struct audit_tree_mark* FUNC_1 (int ,int ) ;

__attribute__((used)) static struct fsnotify_mark *FUNC_2(void)
{
 struct audit_tree_mark *VAR_4;

 VAR_4 = FUNC_1(VAR_3, VAR_1);
 if (!VAR_4)
  return ((void*)0);
 FUNC_0(&VAR_4->mark, VAR_2);
 VAR_4->mark.mask = VAR_0;
 return &VAR_4->mark;
}
