
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_fs_eofblocks {scalar_t__ eof_version; int eof_flags; int eof_gid; int eof_uid; int eof_min_file_size; int eof_prid; int * pad64; int pad32; } ;
struct xfs_eofblocks {int eof_flags; int eof_gid; int eof_uid; int eof_min_file_size; int eof_prid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (int *,int ,int) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static inline int
FUNC_6(
 struct xfs_fs_eofblocks *VAR_7,
 struct xfs_eofblocks *VAR_8)
{
 if (VAR_7->eof_version != VAR_3)
  return -VAR_0;

 if (VAR_7->eof_flags & ~VAR_6)
  return -VAR_0;

 if (FUNC_4(&VAR_7->pad32, 0, sizeof(VAR_7->pad32)) ||
     FUNC_4(VAR_7->pad64, 0, sizeof(VAR_7->pad64)))
  return -VAR_0;

 VAR_8->eof_flags = VAR_7->eof_flags;
 VAR_8->eof_prid = VAR_7->eof_prid;
 VAR_8->eof_min_file_size = VAR_7->eof_min_file_size;

 VAR_8->eof_uid = VAR_2;
 if (VAR_7->eof_flags & VAR_5) {
  VAR_8->eof_uid = FUNC_3(FUNC_0(), VAR_7->eof_uid);
  if (!FUNC_5(VAR_8->eof_uid))
   return -VAR_0;
 }

 VAR_8->eof_gid = VAR_1;
 if (VAR_7->eof_flags & VAR_4) {
  VAR_8->eof_gid = FUNC_2(FUNC_0(), VAR_7->eof_gid);
  if (!FUNC_1(VAR_8->eof_gid))
   return -VAR_0;
 }
 return 0;
}
