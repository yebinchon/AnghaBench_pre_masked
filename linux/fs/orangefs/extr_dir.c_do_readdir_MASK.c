
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct orangefs_readdir_response_s {int token; } ;
struct TYPE_8__ {int status; scalar_t__ trailer_size; scalar_t__ trailer_buf; } ;
struct TYPE_5__ {int buf_index; int max_dirent_count; int token; int refn; } ;
struct TYPE_6__ {TYPE_1__ readdir; } ;
struct TYPE_7__ {TYPE_2__ req; } ;
struct orangefs_kernel_op_s {int uses_shared_memory; TYPE_4__ downcall; TYPE_3__ upcall; } ;
struct orangefs_inode_s {int refn; } ;
struct orangefs_dir {int error; int token; } ;
struct dentry {int d_inode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct orangefs_kernel_op_s*) ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct orangefs_kernel_op_s*,char*,int ) ;
 int FUNC_5 (scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct orangefs_inode_s *VAR_4,
    struct orangefs_dir *VAR_5, struct dentry *VAR_6,
    struct orangefs_kernel_op_s *VAR_7)
{
 struct orangefs_readdir_response_s *VAR_8;
 int VAR_9, VAR_10;







 VAR_7->uses_shared_memory = 1;
 VAR_7->upcall.req.readdir.refn = VAR_4->refn;
 VAR_7->upcall.req.readdir.token = VAR_5->token;
 VAR_7->upcall.req.readdir.max_dirent_count =
     VAR_2;

again:
 VAR_9 = FUNC_2();
 if (VAR_9 < 0) {
  VAR_5->error = VAR_9;
  return VAR_9;
 }

 VAR_7->upcall.req.readdir.buf_index = VAR_9;

 VAR_10 = FUNC_4(VAR_7, "orangefs_readdir",
     FUNC_0(VAR_6->d_inode));

 FUNC_3(VAR_9);

 if (FUNC_1(VAR_7)) {
  if (VAR_10 == -VAR_0) {
   FUNC_5(VAR_7->downcall.trailer_buf);
   goto again;
  } else if (VAR_10 == -VAR_1) {
   FUNC_5(VAR_7->downcall.trailer_buf);
   VAR_5->error = VAR_10;
   return VAR_10;
  }
 }

 if (VAR_10 < 0) {
  FUNC_5(VAR_7->downcall.trailer_buf);
  VAR_5->error = VAR_10;
  return VAR_10;
 } else if (VAR_7->downcall.status) {
  FUNC_5(VAR_7->downcall.trailer_buf);
  VAR_5->error = VAR_7->downcall.status;
  return VAR_7->downcall.status;
 }





 if (VAR_7->downcall.trailer_size > VAR_3) {
  FUNC_5(VAR_7->downcall.trailer_buf);
  VAR_5->error = -VAR_1;
  return -VAR_1;
 }

 VAR_8 = (struct orangefs_readdir_response_s *)
     VAR_7->downcall.trailer_buf;
 VAR_5->token = VAR_8->token;
 return 0;
}
