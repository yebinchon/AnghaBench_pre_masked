
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct team_mode_item {int list; struct team_mode const* mode; } ;
struct team_mode {scalar_t__ priv_size; int kind; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct team_mode_item*) ;
 struct team_mode_item* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

int FUNC_7(const struct team_mode *VAR_7)
{
 int VAR_8 = 0;
 struct team_mode_item *VAR_9;

 if (!FUNC_1(VAR_7->kind) ||
     VAR_7->priv_size > VAR_4)
  return -VAR_1;

 VAR_9 = FUNC_3(sizeof(*VAR_9), VAR_3);
 if (!VAR_9)
  return -VAR_2;

 FUNC_5(&VAR_6);
 if (FUNC_0(VAR_7->kind)) {
  VAR_8 = -VAR_0;
  FUNC_2(VAR_9);
  goto unlock;
 }
 VAR_9->mode = VAR_7;
 FUNC_4(&VAR_9->list, &VAR_5);
unlock:
 FUNC_6(&VAR_6);
 return VAR_8;
}
