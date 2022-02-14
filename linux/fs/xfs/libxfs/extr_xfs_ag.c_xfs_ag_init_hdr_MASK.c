
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_mount {int dummy; } ;
struct xfs_buf_ops {int dummy; } ;
struct xfs_buf {int dummy; } ;
struct aghdr_init_data {int buffer_list; int numblks; int daddr; } ;
typedef int (* aghdr_init_work_f ) (struct xfs_mount*,struct xfs_buf*,struct aghdr_init_data*) ;


 int VAR_0 ;
 int FUNC_0 (struct xfs_mount*,struct xfs_buf*,struct aghdr_init_data*) ;
 int FUNC_1 (struct xfs_buf*,int *) ;
 int FUNC_2 (struct xfs_buf*) ;
 struct xfs_buf* FUNC_3 (struct xfs_mount*,int ,int ,struct xfs_buf_ops const*) ;

__attribute__((used)) static int
FUNC_4(
 struct xfs_mount *VAR_1,
 struct aghdr_init_data *VAR_2,
 aghdr_init_work_f VAR_3,
 const struct xfs_buf_ops *VAR_4)

{
 struct xfs_buf *VAR_5;

 VAR_5 = FUNC_3(VAR_1, VAR_2->daddr, VAR_2->numblks, VAR_4);
 if (!VAR_5)
  return -VAR_0;

 (*VAR_3)(VAR_1, VAR_5, VAR_2);

 FUNC_1(VAR_5, &VAR_2->buffer_list);
 FUNC_2(VAR_5);
 return 0;
}
