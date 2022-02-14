
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dentry {int dummy; } ;
struct TYPE_4__ {TYPE_1__* head; } ;
struct ceph_mds_request {struct dentry* r_dentry; TYPE_2__ r_reply_info; } ;
struct TYPE_3__ {int is_dentry; } ;


 int VAR_0 ;
 struct dentry* FUNC_0 (int) ;
 int FUNC_1 (struct dentry*,int *) ;
 int FUNC_2 (struct dentry*) ;
 int FUNC_3 (struct dentry*) ;
 scalar_t__ FUNC_4 (struct dentry*) ;
 struct dentry* FUNC_5 (struct dentry*) ;
 int FUNC_6 (char*,struct dentry*,int ) ;

struct dentry *FUNC_7(struct ceph_mds_request *VAR_1,
      struct dentry *VAR_2, int VAR_3)
{
 if (VAR_3 == -VAR_0) {

  VAR_3 = 0;
  if (!VAR_1->r_reply_info.head->is_dentry) {
   FUNC_6("ENOENT and no trace, dentry %p inode %p\n",
        VAR_2, FUNC_3(VAR_2));
   if (FUNC_4(VAR_2)) {
    FUNC_2(VAR_2);
    VAR_3 = -VAR_0;
   } else {
    FUNC_1(VAR_2, ((void*)0));
   }
  }
 }
 if (VAR_3)
  VAR_2 = FUNC_0(VAR_3);
 else if (VAR_2 != VAR_1->r_dentry)
  VAR_2 = FUNC_5(VAR_1->r_dentry);
 else
  VAR_2 = ((void*)0);
 return VAR_2;
}
