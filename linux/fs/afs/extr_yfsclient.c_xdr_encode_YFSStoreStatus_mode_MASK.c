
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct yfs_xdr_YFSStoreStatus {void* group; void* owner; void* mtime_client; void* mode; void* mask; } ;
typedef int mode_t ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (struct yfs_xdr_YFSStoreStatus*) ;

__attribute__((used)) static __be32 *FUNC_3(__be32 *VAR_2, mode_t VAR_3)
{
 struct yfs_xdr_YFSStoreStatus *VAR_4 = (void *)VAR_2;

 VAR_4->mask = FUNC_0(VAR_0);
 VAR_4->mode = FUNC_0(VAR_3 & VAR_1);
 VAR_4->mtime_client = FUNC_1(0);
 VAR_4->owner = FUNC_1(0);
 VAR_4->group = FUNC_1(0);
 return VAR_2 + FUNC_2(VAR_4);
}
