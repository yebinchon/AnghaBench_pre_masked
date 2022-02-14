
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_stack_plugin {char const* sp_name; int sp_count; int sp_owner; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ocfs2_stack_plugin* VAR_2 ;
 char const* VAR_3 ;
 int VAR_4 ;
 struct ocfs2_stack_plugin* FUNC_0 (char const*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (char const*,char const*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(const char *VAR_5,
          const char *VAR_6)
{
 int VAR_7;
 struct ocfs2_stack_plugin *VAR_8;

 FUNC_1(&VAR_4);





 if (FUNC_3(VAR_5, VAR_3)) {
  VAR_7 = -VAR_0;
  goto out;
 }

 if (VAR_2) {




  if (!FUNC_3(VAR_2->sp_name, VAR_6))
   VAR_7 = 0;
  else
   VAR_7 = -VAR_0;
  goto out;
 }

 VAR_8 = FUNC_0(VAR_6);
 if (!VAR_8 || !FUNC_4(VAR_8->sp_owner)) {
  VAR_7 = -VAR_1;
  goto out;
 }

 VAR_2 = VAR_8;
 VAR_7 = 0;

out:

 if (!VAR_7)
  VAR_2->sp_count++;

 FUNC_2(&VAR_4);
 return VAR_7;
}
