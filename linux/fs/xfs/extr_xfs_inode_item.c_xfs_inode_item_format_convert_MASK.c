
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_log_iovec {int i_len; struct xfs_inode_log_format_32* i_addr; } ;
struct xfs_inode_log_format_32 {int ilf_boffset; int ilf_len; int ilf_blkno; int ilf_u; int ilf_ino; int ilf_dsize; int ilf_asize; int ilf_fields; int ilf_size; int ilf_type; } ;
struct xfs_inode_log_format {int ilf_boffset; int ilf_len; int ilf_blkno; int ilf_u; int ilf_ino; int ilf_dsize; int ilf_asize; int ilf_fields; int ilf_size; int ilf_type; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int) ;

int
FUNC_1(
 struct xfs_log_iovec *VAR_1,
 struct xfs_inode_log_format *VAR_2)
{
 struct xfs_inode_log_format_32 *VAR_3 = VAR_1->i_addr;

 if (VAR_1->i_len != sizeof(*VAR_3))
  return -VAR_0;

 VAR_2->ilf_type = VAR_3->ilf_type;
 VAR_2->ilf_size = VAR_3->ilf_size;
 VAR_2->ilf_fields = VAR_3->ilf_fields;
 VAR_2->ilf_asize = VAR_3->ilf_asize;
 VAR_2->ilf_dsize = VAR_3->ilf_dsize;
 VAR_2->ilf_ino = VAR_3->ilf_ino;
 FUNC_0(&VAR_2->ilf_u, &VAR_3->ilf_u, sizeof(VAR_2->ilf_u));
 VAR_2->ilf_blkno = VAR_3->ilf_blkno;
 VAR_2->ilf_len = VAR_3->ilf_len;
 VAR_2->ilf_boffset = VAR_3->ilf_boffset;
 return 0;
}
