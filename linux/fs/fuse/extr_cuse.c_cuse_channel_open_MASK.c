
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct inode {int dummy; } ;
struct fuse_dev {int dummy; } ;
struct file {struct fuse_dev* private_data; TYPE_1__* f_cred; } ;
struct TYPE_6__ {int initialized; int release; } ;
struct cuse_conn {TYPE_2__ fc; int list; } ;
struct TYPE_5__ {int user_ns; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int FUNC_1 (struct cuse_conn*) ;
 int FUNC_2 (TYPE_2__*,int ,int *,int *) ;
 int FUNC_3 (TYPE_2__*) ;
 struct fuse_dev* FUNC_4 (TYPE_2__*) ;
 int VAR_3 ;
 int FUNC_5 (struct fuse_dev*) ;
 int FUNC_6 (struct cuse_conn*) ;
 struct cuse_conn* FUNC_7 (int,int ) ;

__attribute__((used)) static int FUNC_8(struct inode *VAR_4, struct file *VAR_5)
{
 struct fuse_dev *VAR_6;
 struct cuse_conn *VAR_7;
 int VAR_8;


 VAR_7 = FUNC_7(sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return -VAR_0;





 FUNC_2(&VAR_7->fc, VAR_5->f_cred->user_ns, &VAR_3, ((void*)0));

 VAR_6 = FUNC_4(&VAR_7->fc);
 if (!VAR_6) {
  FUNC_6(VAR_7);
  return -VAR_0;
 }

 FUNC_0(&VAR_7->list);
 VAR_7->fc.release = VAR_2;

 VAR_7->fc.initialized = 1;
 VAR_8 = FUNC_1(VAR_7);
 if (VAR_8) {
  FUNC_5(VAR_6);
  FUNC_3(&VAR_7->fc);
  return VAR_8;
 }
 VAR_5->private_data = VAR_6;

 return 0;
}
