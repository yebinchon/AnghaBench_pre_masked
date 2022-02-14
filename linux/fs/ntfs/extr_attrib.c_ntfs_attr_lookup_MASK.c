
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int ntfschar ;
typedef int ntfs_inode ;
struct TYPE_5__ {int * ntfs_ino; int * base_ntfs_ino; int mrec; } ;
typedef TYPE_1__ ntfs_attr_search_ctx ;
typedef int VCN ;
typedef int IGNORE_CASE_BOOL ;
typedef scalar_t__ ATTR_TYPE ;


 scalar_t__ const VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (scalar_t__ const,int const*,int const,int const,int const*,int const,TYPE_1__*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (scalar_t__ const,int const*,int const,int const,int const,int const*,int const,TYPE_1__*) ;

int FUNC_6(const ATTR_TYPE VAR_1, const ntfschar *VAR_2,
  const u32 VAR_3, const IGNORE_CASE_BOOL VAR_4,
  const VCN VAR_5, const u8 *VAR_6, const u32 VAR_7,
  ntfs_attr_search_ctx *VAR_8)
{
 ntfs_inode *VAR_9;

 FUNC_4("Entering.");
 FUNC_0(FUNC_1(VAR_8->mrec));
 if (VAR_8->base_ntfs_ino)
  VAR_9 = VAR_8->base_ntfs_ino;
 else
  VAR_9 = VAR_8->ntfs_ino;

 FUNC_0(!VAR_9);
 if (!FUNC_2(VAR_9) || VAR_1 == VAR_0)
  return FUNC_3(VAR_1, VAR_2, VAR_3, VAR_4, VAR_6, VAR_7,
    VAR_8);
 return FUNC_5(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5,
   VAR_6, VAR_7, VAR_8);
}
