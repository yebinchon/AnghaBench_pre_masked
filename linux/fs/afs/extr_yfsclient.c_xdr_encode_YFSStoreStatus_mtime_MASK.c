
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct yfs_xdr_YFSStoreStatus {void* group; void* owner; void* mtime_client; void* mode; void* mask; } ;
struct timespec64 {int dummy; } ;
typedef int s64 ;
typedef int __be32 ;


 int VAR_0 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (struct timespec64 const*) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (struct yfs_xdr_YFSStoreStatus*) ;

__attribute__((used)) static __be32 *FUNC_4(__be32 *VAR_1, const struct timespec64 *VAR_2)
{
 struct yfs_xdr_YFSStoreStatus *VAR_3 = (void *)VAR_1;
 s64 VAR_4 = FUNC_1(VAR_2);

 VAR_3->mask = FUNC_0(VAR_0);
 VAR_3->mode = FUNC_0(0);
 VAR_3->mtime_client = FUNC_2(VAR_4);
 VAR_3->owner = FUNC_2(0);
 VAR_3->group = FUNC_2(0);
 return VAR_1 + FUNC_3(VAR_3);
}
