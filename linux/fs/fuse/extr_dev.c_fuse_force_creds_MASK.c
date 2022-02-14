
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int pid; int gid; int uid; } ;
struct TYPE_4__ {TYPE_1__ h; } ;
struct fuse_req {TYPE_2__ in; } ;
struct fuse_conn {int pid_ns; int user_ns; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct fuse_conn *VAR_1, struct fuse_req *VAR_2)
{
 VAR_2->in.h.uid = FUNC_3(VAR_1->user_ns, FUNC_1());
 VAR_2->in.h.gid = FUNC_2(VAR_1->user_ns, FUNC_0());
 VAR_2->in.h.pid = FUNC_4(FUNC_5(VAR_0), VAR_1->pid_ns);
}
