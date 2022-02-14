
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct cred {int fsgid; int sgid; int egid; int gid; int fsuid; int suid; int euid; int uid; } ;
struct audit_names {int dummy; } ;
struct audit_field {int val; int op; } ;
struct audit_context {int dummy; } ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int ,struct audit_names*,struct audit_field*,struct audit_context*) ;
 int FUNC_2 (int ,struct audit_names*,struct audit_field*,struct audit_context*) ;
 int FUNC_3 (struct task_struct*) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct task_struct *VAR_0,
          const struct cred *VAR_1,
          struct audit_field *VAR_2,
          struct audit_context *VAR_3,
          struct audit_names *VAR_4)
{
 switch (VAR_2->val) {

 case 129:
  return FUNC_2(VAR_1->uid, VAR_4, VAR_2, VAR_3);
 case 138:
  return FUNC_1(VAR_1->gid, VAR_4, VAR_2, VAR_3);
 case 144:
  return FUNC_2(VAR_1->euid, VAR_4, VAR_2, VAR_3);
 case 147:
  return FUNC_1(VAR_1->egid, VAR_4, VAR_2, VAR_3);
 case 150:
  return FUNC_2(FUNC_3(VAR_0), VAR_4, VAR_2, VAR_3);
 case 133:
  return FUNC_2(VAR_1->suid, VAR_4, VAR_2, VAR_3);
 case 135:
  return FUNC_1(VAR_1->sgid, VAR_4, VAR_2, VAR_3);
 case 141:
  return FUNC_2(VAR_1->fsuid, VAR_4, VAR_2, VAR_3);
 case 142:
  return FUNC_1(VAR_1->fsgid, VAR_4, VAR_2, VAR_3);

 case 132:
  return FUNC_5(VAR_1->uid, VAR_2->op,
         FUNC_3(VAR_0));
 case 131:
  return FUNC_5(VAR_1->uid, VAR_2->op, VAR_1->euid);
 case 128:
  return FUNC_5(VAR_1->uid, VAR_2->op, VAR_1->suid);
 case 130:
  return FUNC_5(VAR_1->uid, VAR_2->op, VAR_1->fsuid);

 case 152:
  return FUNC_5(FUNC_3(VAR_0), VAR_2->op,
         VAR_1->euid);
 case 149:
  return FUNC_5(FUNC_3(VAR_0), VAR_2->op,
         VAR_1->suid);
 case 151:
  return FUNC_5(FUNC_3(VAR_0), VAR_2->op,
         VAR_1->fsuid);

 case 143:
  return FUNC_5(VAR_1->euid, VAR_2->op, VAR_1->suid);
 case 145:
  return FUNC_5(VAR_1->euid, VAR_2->op, VAR_1->fsuid);

 case 134:
  return FUNC_5(VAR_1->suid, VAR_2->op, VAR_1->fsuid);

 case 140:
  return FUNC_4(VAR_1->gid, VAR_2->op, VAR_1->egid);
 case 137:
  return FUNC_4(VAR_1->gid, VAR_2->op, VAR_1->sgid);
 case 139:
  return FUNC_4(VAR_1->gid, VAR_2->op, VAR_1->fsgid);

 case 146:
  return FUNC_4(VAR_1->egid, VAR_2->op, VAR_1->sgid);
 case 148:
  return FUNC_4(VAR_1->egid, VAR_2->op, VAR_1->fsgid);

 case 136:
  return FUNC_4(VAR_1->sgid, VAR_2->op, VAR_1->fsgid);
 default:
  FUNC_0(1, "Missing AUDIT_COMPARE define.  Report as a bug\n");
  return 0;
 }
 return 0;
}
