
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct audit_watch {int path; } ;
struct audit_krule {char* listnr; int filterkey; } ;
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

__attribute__((used)) static void FUNC_7(struct audit_krule *VAR_3, struct audit_watch *VAR_4, char *VAR_5)
{
 struct audit_buffer *VAR_6;

 if (!VAR_2)
  return;
 VAR_6 = FUNC_5(FUNC_0(), VAR_1, VAR_0);
 if (!VAR_6)
  return;
 FUNC_4(VAR_6);
 FUNC_2(VAR_6, "op=%s path=", VAR_5);
 FUNC_6(VAR_6, VAR_4->path);
 FUNC_3(VAR_6, VAR_3->filterkey);
 FUNC_2(VAR_6, " list=%d res=1", VAR_3->listnr);
 FUNC_1(VAR_6);
}
