
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct path {int dummy; } ;
struct audit_buffer {int gfp_mask; } ;


 scalar_t__ FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct audit_buffer*,char*,char const*) ;
 int FUNC_2 (struct audit_buffer*,char*) ;
 int FUNC_3 (struct audit_buffer*,char*) ;
 char* FUNC_4 (struct path const*,char*,scalar_t__) ;
 int FUNC_5 (char*) ;
 char* FUNC_6 (scalar_t__,int ) ;

void FUNC_7(struct audit_buffer *VAR_1, const char *VAR_2,
        const struct path *VAR_3)
{
 char *VAR_4, *VAR_5;

 if (VAR_2)
  FUNC_1(VAR_1, "%s", VAR_2);


 VAR_5 = FUNC_6(VAR_0+11, VAR_1->gfp_mask);
 if (!VAR_5) {
  FUNC_2(VAR_1, "<no_memory>");
  return;
 }
 VAR_4 = FUNC_4(VAR_3, VAR_5, VAR_0+11);
 if (FUNC_0(VAR_4)) {

  FUNC_2(VAR_1, "<too_long>");
 } else
  FUNC_3(VAR_1, VAR_4);
 FUNC_5(VAR_5);
}
