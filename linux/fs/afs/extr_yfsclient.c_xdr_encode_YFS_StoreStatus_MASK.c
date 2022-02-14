
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct yfs_xdr_YFSStoreStatus {void* group; void* owner; void* mtime_client; void* mode; void* mask; } ;
struct iattr {int ia_valid; int ia_mode; int ia_gid; int ia_uid; int ia_mtime; } ;
typedef int s64 ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;
 void* FUNC_2 (int) ;
 int VAR_9 ;
 int FUNC_3 (int *) ;
 void* FUNC_4 (int ) ;
 int FUNC_5 (struct yfs_xdr_YFSStoreStatus*) ;

__attribute__((used)) static __be32 *FUNC_6(__be32 *VAR_10, struct iattr *VAR_11)
{
 struct yfs_xdr_YFSStoreStatus *VAR_12 = (void *)VAR_10;
 s64 VAR_13 = 0, VAR_14 = 0, VAR_15 = 0;
 u32 VAR_16 = 0, VAR_17 = 0;

 VAR_16 = 0;
 if (VAR_11->ia_valid & VAR_6) {
  VAR_16 |= VAR_2;
  VAR_13 = FUNC_3(&VAR_11->ia_mtime);
 }

 if (VAR_11->ia_valid & VAR_7) {
  VAR_16 |= VAR_3;
  VAR_14 = FUNC_1(&VAR_9, VAR_11->ia_uid);
 }

 if (VAR_11->ia_valid & VAR_4) {
  VAR_16 |= VAR_0;
  VAR_15 = FUNC_0(&VAR_9, VAR_11->ia_gid);
 }

 if (VAR_11->ia_valid & VAR_5) {
  VAR_16 |= VAR_1;
  VAR_17 = VAR_11->ia_mode & VAR_8;
 }

 VAR_12->mask = FUNC_2(VAR_16);
 VAR_12->mode = FUNC_2(VAR_17);
 VAR_12->mtime_client = FUNC_4(VAR_13);
 VAR_12->owner = FUNC_4(VAR_14);
 VAR_12->group = FUNC_4(VAR_15);
 return VAR_10 + FUNC_5(VAR_12);
}
