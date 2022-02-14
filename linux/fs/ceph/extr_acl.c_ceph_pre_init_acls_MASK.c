
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int umode_t ;
struct posix_acl {int a_count; } ;
struct inode {int dummy; } ;
struct ceph_pagelist {int dummy; } ;
struct ceph_acl_sec_ctx {struct ceph_pagelist* pagelist; struct posix_acl* default_acl; struct posix_acl* acl; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct ceph_pagelist* FUNC_0 (int ) ;
 int FUNC_1 (struct ceph_pagelist*,void*,size_t) ;
 int FUNC_2 (struct ceph_pagelist*,size_t) ;
 int FUNC_3 (struct ceph_pagelist*,int ,size_t) ;
 int FUNC_4 (struct ceph_pagelist*) ;
 int FUNC_5 (struct ceph_pagelist*,size_t) ;
 int VAR_5 ;
 int FUNC_6 (void*) ;
 void* FUNC_7 (int ,int ) ;
 int FUNC_8 (size_t,size_t) ;
 int FUNC_9 (struct inode*,int *,struct posix_acl**,struct posix_acl**) ;
 int FUNC_10 (struct posix_acl*,int *) ;
 int FUNC_11 (struct posix_acl*) ;
 int FUNC_12 (int *,struct posix_acl*,void*,size_t) ;
 size_t FUNC_13 (int ) ;
 size_t FUNC_14 (int ) ;

int FUNC_15(struct inode *VAR_6, umode_t *VAR_7,
         struct ceph_acl_sec_ctx *VAR_8)
{
 struct posix_acl *VAR_9, *VAR_10;
 size_t VAR_11 = 0, VAR_12 = 0;
 struct ceph_pagelist *VAR_13 = ((void*)0);
 void *VAR_14 = ((void*)0);
 int VAR_15;

 VAR_15 = FUNC_9(VAR_6, VAR_7, &VAR_10, &VAR_9);
 if (VAR_15)
  return VAR_15;

 if (VAR_9) {
  VAR_15 = FUNC_10(VAR_9, VAR_7);
  if (VAR_15 < 0)
   goto out_err;
  if (VAR_15 == 0) {
   FUNC_11(VAR_9);
   VAR_9 = ((void*)0);
  }
 }

 if (!VAR_10 && !VAR_9)
  return 0;

 if (VAR_9)
  VAR_11 = FUNC_13(VAR_9->a_count);
 if (VAR_10)
  VAR_12 = FUNC_13(VAR_10->a_count);

 VAR_15 = -VAR_0;
 VAR_14 = FUNC_7(FUNC_8(VAR_11, VAR_12), VAR_1);
 if (!VAR_14)
  goto out_err;
 VAR_13 = FUNC_0(VAR_1);
 if (!VAR_13)
  goto out_err;

 VAR_15 = FUNC_5(VAR_13, VAR_2);
 if (VAR_15)
  goto out_err;

 FUNC_2(VAR_13, VAR_9 && VAR_10 ? 2 : 1);

 if (VAR_9) {
  size_t VAR_16 = FUNC_14(VAR_3);
  VAR_15 = FUNC_5(VAR_13, VAR_16 + VAR_11 + 8);
  if (VAR_15)
   goto out_err;
  FUNC_3(VAR_13, VAR_3,
         VAR_16);
  VAR_15 = FUNC_12(&VAR_5, VAR_9,
      VAR_14, VAR_11);
  if (VAR_15 < 0)
   goto out_err;
  FUNC_2(VAR_13, VAR_11);
  FUNC_1(VAR_13, VAR_14, VAR_11);
 }
 if (VAR_10) {
  size_t VAR_17 = FUNC_14(VAR_4);
  VAR_15 = FUNC_5(VAR_13, VAR_17 + VAR_12 + 8);
  if (VAR_15)
   goto out_err;
  VAR_15 = FUNC_3(VAR_13,
        VAR_4, VAR_17);
  VAR_15 = FUNC_12(&VAR_5, VAR_10,
      VAR_14, VAR_12);
  if (VAR_15 < 0)
   goto out_err;
  FUNC_2(VAR_13, VAR_12);
  FUNC_1(VAR_13, VAR_14, VAR_12);
 }

 FUNC_6(VAR_14);

 VAR_8->acl = VAR_9;
 VAR_8->default_acl = VAR_10;
 VAR_8->pagelist = VAR_13;
 return 0;

out_err:
 FUNC_11(VAR_9);
 FUNC_11(VAR_10);
 FUNC_6(VAR_14);
 if (VAR_13)
  FUNC_4(VAR_13);
 return VAR_15;
}
