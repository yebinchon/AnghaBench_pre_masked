
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct yfs_xdr_YFSVolSync {int vol_creation_date; } ;
struct afs_volsync {int creation; } ;
typedef int __be32 ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct yfs_xdr_YFSVolSync*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(const __be32 **VAR_0,
      struct afs_volsync *VAR_1)
{
 struct yfs_xdr_YFSVolSync *VAR_2 = (void *)*VAR_0;
 u64 VAR_3;

 if (VAR_1) {
  VAR_3 = FUNC_2(VAR_2->vol_creation_date);
  FUNC_0(VAR_3, 10 * 1000 * 1000);
  VAR_1->creation = VAR_3;
 }

 *VAR_0 += FUNC_1(VAR_2);
}
