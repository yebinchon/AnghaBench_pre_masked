
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct ceph_mds_reply_info_parsed {int targeti; TYPE_1__* head; int dlease; int dname_len; void* dname; int dirfrag; int diri; } ;
struct TYPE_2__ {scalar_t__ is_target; scalar_t__ is_dentry; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void**,void*,int ,int ) ;
 int FUNC_1 (void**,void*,int ,int ) ;
 int FUNC_2 (void**,void*,int *,int ) ;
 int FUNC_3 (void**,void*,int *,int ) ;
 int FUNC_4 (void**,void*,int *,int ) ;
 int FUNC_5 (char*,int) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(void **VAR_2, void *VAR_3,
      struct ceph_mds_reply_info_parsed *VAR_4,
      u64 VAR_5)
{
 int VAR_6;

 if (VAR_4->head->is_dentry) {
  VAR_6 = FUNC_3(VAR_2, VAR_3, &VAR_4->diri, VAR_5);
  if (VAR_6 < 0)
   goto out_bad;

  VAR_6 = FUNC_2(VAR_2, VAR_3, &VAR_4->dirfrag, VAR_5);
  if (VAR_6 < 0)
   goto out_bad;

  FUNC_0(VAR_2, VAR_3, VAR_4->dname_len, VAR_1);
  FUNC_1(VAR_2, VAR_3, VAR_4->dname_len, VAR_1);
  VAR_4->dname = *VAR_2;
  *VAR_2 += VAR_4->dname_len;

  VAR_6 = FUNC_4(VAR_2, VAR_3, &VAR_4->dlease, VAR_5);
  if (VAR_6 < 0)
   goto out_bad;
 }

 if (VAR_4->head->is_target) {
  VAR_6 = FUNC_3(VAR_2, VAR_3, &VAR_4->targeti, VAR_5);
  if (VAR_6 < 0)
   goto out_bad;
 }

 if (FUNC_6(*VAR_2 != VAR_3))
  goto bad;
 return 0;

bad:
 VAR_6 = -VAR_0;
out_bad:
 FUNC_5("problem parsing mds trace %d\n", VAR_6);
 return VAR_6;
}
