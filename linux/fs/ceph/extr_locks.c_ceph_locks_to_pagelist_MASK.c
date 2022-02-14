
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ceph_pagelist {int dummy; } ;
struct ceph_filelock {int dummy; } ;
typedef int nlocks ;
typedef struct ceph_filelock __le32 ;


 int FUNC_0 (struct ceph_pagelist*,struct ceph_filelock*,int) ;
 struct ceph_filelock FUNC_1 (int) ;

int FUNC_2(struct ceph_filelock *VAR_0,
      struct ceph_pagelist *VAR_1,
      int VAR_2, int VAR_3)
{
 int VAR_4 = 0;
 __le32 VAR_5;

 VAR_5 = FUNC_1(VAR_2);
 VAR_4 = FUNC_0(VAR_1, &VAR_5, sizeof(VAR_5));
 if (VAR_4)
  goto out_fail;

 if (VAR_2 > 0) {
  VAR_4 = FUNC_0(VAR_1, VAR_0,
        VAR_2 * sizeof(*VAR_0));
  if (VAR_4)
   goto out_fail;
 }

 VAR_5 = FUNC_1(VAR_3);
 VAR_4 = FUNC_0(VAR_1, &VAR_5, sizeof(VAR_5));
 if (VAR_4)
  goto out_fail;

 if (VAR_3 > 0) {
  VAR_4 = FUNC_0(VAR_1, &VAR_0[VAR_2],
        VAR_3 * sizeof(*VAR_0));
 }
out_fail:
 return VAR_4;
}
