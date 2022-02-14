
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fuse_copy_state {scalar_t__ move_pages; } ;
struct fuse_conn {int dummy; } ;
typedef enum fuse_notify_code { ____Placeholder_fuse_notify_code } fuse_notify_code ;


 int VAR_0 ;






 int FUNC_0 (struct fuse_copy_state*) ;
 int FUNC_1 (struct fuse_conn*,unsigned int,struct fuse_copy_state*) ;
 int FUNC_2 (struct fuse_conn*,unsigned int,struct fuse_copy_state*) ;
 int FUNC_3 (struct fuse_conn*,unsigned int,struct fuse_copy_state*) ;
 int FUNC_4 (struct fuse_conn*,unsigned int,struct fuse_copy_state*) ;
 int FUNC_5 (struct fuse_conn*,unsigned int,struct fuse_copy_state*) ;
 int FUNC_6 (struct fuse_conn*,unsigned int,struct fuse_copy_state*) ;

__attribute__((used)) static int FUNC_7(struct fuse_conn *VAR_1, enum fuse_notify_code VAR_2,
         unsigned int VAR_3, struct fuse_copy_state *VAR_4)
{

 VAR_4->move_pages = 0;

 switch (VAR_2) {
 case 130:
  return FUNC_4(VAR_1, VAR_3, VAR_4);

 case 131:
  return FUNC_3(VAR_1, VAR_3, VAR_4);

 case 132:
  return FUNC_2(VAR_1, VAR_3, VAR_4);

 case 128:
  return FUNC_6(VAR_1, VAR_3, VAR_4);

 case 129:
  return FUNC_5(VAR_1, VAR_3, VAR_4);

 case 133:
  return FUNC_1(VAR_1, VAR_3, VAR_4);

 default:
  FUNC_0(VAR_4);
  return -VAR_0;
 }
}
