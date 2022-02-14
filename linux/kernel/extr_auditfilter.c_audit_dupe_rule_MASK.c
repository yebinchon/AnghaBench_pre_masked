
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct audit_krule {int field_count; char* filterkey; scalar_t__ watch; scalar_t__ exe; TYPE_1__* fields; int tree; int inode_f; int buflen; int prio; int * mask; int action; int listnr; int pflags; int flags; } ;
struct audit_field {int dummy; } ;
struct audit_entry {struct audit_krule rule; } ;
struct TYPE_5__ {int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct audit_entry* FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (struct audit_krule*,struct audit_krule*) ;
 int FUNC_2 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_3 (struct audit_entry*) ;
 int FUNC_4 (scalar_t__) ;
 struct audit_entry* FUNC_5 (int) ;
 int FUNC_6 (scalar_t__) ;
 char* FUNC_7 (char*,int ) ;
 int FUNC_8 (TYPE_1__*,TYPE_1__*,int) ;
 scalar_t__ FUNC_9 (int) ;

struct audit_entry *FUNC_10(struct audit_krule *VAR_3)
{
 u32 VAR_4 = VAR_3->field_count;
 struct audit_entry *VAR_5;
 struct audit_krule *VAR_6;
 char *VAR_7;
 int VAR_8, VAR_9 = 0;

 VAR_5 = FUNC_5(VAR_4);
 if (FUNC_9(!VAR_5))
  return FUNC_0(-VAR_1);

 VAR_6 = &VAR_5->rule;
 VAR_6->flags = VAR_3->flags;
 VAR_6->pflags = VAR_3->pflags;
 VAR_6->listnr = VAR_3->listnr;
 VAR_6->action = VAR_3->action;
 for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++)
  VAR_6->mask[VAR_8] = VAR_3->mask[VAR_8];
 VAR_6->prio = VAR_3->prio;
 VAR_6->buflen = VAR_3->buflen;
 VAR_6->inode_f = VAR_3->inode_f;
 VAR_6->field_count = VAR_3->field_count;
 VAR_6->tree = VAR_3->tree;
 FUNC_8(VAR_6->fields, VAR_3->fields, sizeof(struct audit_field) * VAR_4);



 for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8++) {
  switch (VAR_6->fields[VAR_8].type) {
  case 128:
  case 131:
  case 129:
  case 130:
  case 132:
  case 133:
  case 135:
  case 134:
  case 136:
  case 137:
   VAR_9 = FUNC_2(&VAR_6->fields[VAR_8],
             &VAR_3->fields[VAR_8]);
   break;
  case 138:
   VAR_7 = FUNC_7(VAR_3->filterkey, VAR_2);
   if (FUNC_9(!VAR_7))
    VAR_9 = -VAR_1;
   else
    VAR_6->filterkey = VAR_7;
   break;
  case 139:
   VAR_9 = FUNC_1(VAR_6, VAR_3);
   break;
  }
  if (VAR_9) {
   if (VAR_6->exe)
    FUNC_6(VAR_6->exe);
   FUNC_3(VAR_5);
   return FUNC_0(VAR_9);
  }
 }

 if (VAR_3->watch) {
  FUNC_4(VAR_3->watch);
  VAR_6->watch = VAR_3->watch;
 }

 return VAR_5;
}
