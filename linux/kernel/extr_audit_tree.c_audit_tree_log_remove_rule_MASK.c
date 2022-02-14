
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct audit_krule {int listnr; int filterkey; TYPE_1__* tree; } ;
struct audit_context {int dummy; } ;
struct audit_buffer {int dummy; } ;
struct TYPE_2__ {int pathname; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct audit_buffer*) ;
 int FUNC_1 (struct audit_buffer*,char*,...) ;
 int FUNC_2 (struct audit_buffer*,int ) ;
 struct audit_buffer* FUNC_3 (struct audit_context*,int ,int ) ;
 int FUNC_4 (struct audit_buffer*,int ) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(struct audit_context *VAR_3,
           struct audit_krule *VAR_4)
{
 struct audit_buffer *VAR_5;

 if (!VAR_2)
  return;
 VAR_5 = FUNC_3(VAR_3, VAR_1, VAR_0);
 if (FUNC_5(!VAR_5))
  return;
 FUNC_1(VAR_5, "op=remove_rule dir=");
 FUNC_4(VAR_5, VAR_4->tree->pathname);
 FUNC_2(VAR_5, VAR_4->filterkey);
 FUNC_1(VAR_5, " list=%d res=1", VAR_4->listnr);
 FUNC_0(VAR_5);
}
