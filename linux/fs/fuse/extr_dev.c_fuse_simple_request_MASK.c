
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ error; } ;
struct TYPE_5__ {TYPE_1__ h; } ;
struct fuse_req {TYPE_2__ out; int flags; } ;
struct fuse_conn {int num_waiting; } ;
struct fuse_args {int out_numargs; TYPE_3__* out_args; scalar_t__ out_argvar; int noreply; int nocreds; scalar_t__ force; } ;
typedef scalar_t__ ssize_t ;
struct TYPE_6__ {scalar_t__ size; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct fuse_req*) ;
 scalar_t__ FUNC_2 (struct fuse_req*) ;
 int FUNC_3 (int ) ;
 int VAR_4 ;
 int FUNC_4 (struct fuse_conn*,struct fuse_req*) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct fuse_conn*,struct fuse_args*) ;
 int FUNC_8 (struct fuse_req*,struct fuse_args*) ;
 int FUNC_9 (struct fuse_conn*,struct fuse_req*) ;
 struct fuse_req* FUNC_10 (struct fuse_conn*,int) ;
 int FUNC_11 (struct fuse_conn*,struct fuse_req*) ;
 struct fuse_req* FUNC_12 (int) ;

ssize_t FUNC_13(struct fuse_conn *VAR_5, struct fuse_args *VAR_6)
{
 struct fuse_req *VAR_7;
 ssize_t VAR_8;

 if (VAR_6->force) {
  FUNC_6(&VAR_5->num_waiting);
  VAR_7 = FUNC_12(VAR_3 | VAR_4);

  if (!VAR_6->nocreds)
   FUNC_9(VAR_5, VAR_7);

  FUNC_5(VAR_2, &VAR_7->flags);
  FUNC_5(VAR_0, &VAR_7->flags);
 } else {
  FUNC_3(VAR_6->nocreds);
  VAR_7 = FUNC_10(VAR_5, 0);
  if (FUNC_1(VAR_7))
   return FUNC_2(VAR_7);
 }


 FUNC_7(VAR_5, VAR_6);
 FUNC_8(VAR_7, VAR_6);

 if (!VAR_6->noreply)
  FUNC_5(VAR_1, &VAR_7->flags);
 FUNC_4(VAR_5, VAR_7);
 VAR_8 = VAR_7->out.h.error;
 if (!VAR_8 && VAR_6->out_argvar) {
  FUNC_0(VAR_6->out_numargs == 0);
  VAR_8 = VAR_6->out_args[VAR_6->out_numargs - 1].size;
 }
 FUNC_11(VAR_5, VAR_7);

 return VAR_8;
}
