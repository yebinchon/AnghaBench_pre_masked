
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
struct afs_vnode_cache_aux {int data_version; } ;
struct TYPE_4__ {int data_version; } ;
struct TYPE_3__ {int unique; int vnode; } ;
struct afs_vnode {TYPE_2__ status; TYPE_1__ fid; } ;
typedef int loff_t ;
typedef enum fscache_checkaux { ____Placeholder_fscache_checkaux } fscache_checkaux ;
typedef int aux ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,int ,int ,void const*,int) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (struct afs_vnode_cache_aux*,void const*,int) ;

__attribute__((used)) static enum fscache_checkaux FUNC_3(void *VAR_2,
             const void *VAR_3,
             uint16_t VAR_4,
             loff_t VAR_5)
{
 struct afs_vnode *VAR_6 = VAR_2;
 struct afs_vnode_cache_aux VAR_7;

 FUNC_0("{%llx,%x,%llx},%p,%u",
        VAR_6->fid.vnode, VAR_6->fid.unique, VAR_6->status.data_version,
        VAR_3, VAR_4);

 FUNC_2(&VAR_7, VAR_3, sizeof(VAR_7));


 if (VAR_4 != sizeof(VAR_7)) {
  FUNC_1(" = OBSOLETE [len %hx != %zx]", VAR_4, sizeof(VAR_7));
  return VAR_0;
 }

 if (VAR_6->status.data_version != VAR_7.data_version) {
  FUNC_1(" = OBSOLETE [vers %llx != %llx]",
         VAR_7.data_version, VAR_6->status.data_version);
  return VAR_0;
 }

 FUNC_1(" = SUCCESS");
 return VAR_1;
}
