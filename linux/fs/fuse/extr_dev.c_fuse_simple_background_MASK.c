
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fuse_req {int flags; } ;
struct fuse_conn {int dummy; } ;
struct fuse_args {int nocreds; scalar_t__ force; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct fuse_req*) ;
 int FUNC_1 (struct fuse_req*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (struct fuse_req*,struct fuse_args*) ;
 struct fuse_req* FUNC_5 (struct fuse_conn*,int) ;
 int FUNC_6 (struct fuse_conn*,struct fuse_req*) ;
 struct fuse_req* FUNC_7 (int ) ;
 int FUNC_8 (struct fuse_conn*,struct fuse_req*) ;

int FUNC_9(struct fuse_conn *VAR_3, struct fuse_args *VAR_4,
       gfp_t VAR_5)
{
 struct fuse_req *VAR_6;

 if (VAR_4->force) {
  FUNC_2(!VAR_4->nocreds);
  VAR_6 = FUNC_7(VAR_5);
  if (!VAR_6)
   return -VAR_0;
  FUNC_3(VAR_2, &VAR_6->flags);
 } else {
  FUNC_2(VAR_4->nocreds);
  VAR_6 = FUNC_5(VAR_3, 1);
  if (FUNC_0(VAR_6))
   return FUNC_1(VAR_6);
 }

 FUNC_4(VAR_6, VAR_4);

 if (!FUNC_8(VAR_3, VAR_6)) {
  FUNC_6(VAR_3, VAR_6);
  return -VAR_1;
 }

 return 0;
}
