
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct audit_krule {char* listnr; int filterkey; } ;
struct audit_fsnotify_mark {int path; struct audit_krule* rule; } ;
struct audit_buffer {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int VAR_2 ;
 int FUNC_1 (struct audit_buffer*) ;
 int FUNC_2 (struct audit_buffer*,char*,char*) ;
 int FUNC_3 (struct audit_buffer*,int ) ;
 int FUNC_4 (struct audit_buffer*) ;
 struct audit_buffer* FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (struct audit_buffer*,int ) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static void FUNC_8(struct audit_fsnotify_mark *VAR_3, char *VAR_4)
{
 struct audit_buffer *VAR_5;
 struct audit_krule *VAR_6 = VAR_3->rule;

 if (!VAR_2)
  return;
 VAR_5 = FUNC_5(FUNC_0(), VAR_1, VAR_0);
 if (FUNC_7(!VAR_5))
  return;
 FUNC_4(VAR_5);
 FUNC_2(VAR_5, " op=%s path=", VAR_4);
 FUNC_6(VAR_5, VAR_3->path);
 FUNC_3(VAR_5, VAR_6->filterkey);
 FUNC_2(VAR_5, " list=%d res=1", VAR_6->listnr);
 FUNC_1(VAR_5);
}
