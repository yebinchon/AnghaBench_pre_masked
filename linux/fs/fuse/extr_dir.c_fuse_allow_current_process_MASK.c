
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fuse_conn {int group_id; int user_id; int user_ns; scalar_t__ allow_other; } ;
struct cred {int gid; int sgid; int egid; int uid; int suid; int euid; } ;


 struct cred* FUNC_0 () ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int ,int ) ;

int FUNC_4(struct fuse_conn *VAR_0)
{
 const struct cred *VAR_1;

 if (VAR_0->allow_other)
  return FUNC_1(VAR_0->user_ns);

 VAR_1 = FUNC_0();
 if (FUNC_3(VAR_1->euid, VAR_0->user_id) &&
     FUNC_3(VAR_1->suid, VAR_0->user_id) &&
     FUNC_3(VAR_1->uid, VAR_0->user_id) &&
     FUNC_2(VAR_1->egid, VAR_0->group_id) &&
     FUNC_2(VAR_1->sgid, VAR_0->group_id) &&
     FUNC_2(VAR_1->gid, VAR_0->group_id))
  return 1;

 return 0;
}
