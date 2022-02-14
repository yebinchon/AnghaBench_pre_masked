
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_inode {long long compr_type; scalar_t__ xattr_names; scalar_t__ xattr_cnt; scalar_t__ data_len; scalar_t__ xattr; } ;
struct ubifs_info {scalar_t__ max_inode_sz; } ;
struct inode {scalar_t__ i_size; int i_ino; int i_mode; } ;


 int FUNC_0 (int ) ;
 long long VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct ubifs_info*,struct inode const*) ;
 int FUNC_2 (struct ubifs_info*,long long) ;
 int FUNC_3 (struct ubifs_info*,long long) ;
 int FUNC_4 (struct ubifs_info*,char*,long long) ;
 struct ubifs_inode* FUNC_5 (struct inode const*) ;
 int FUNC_6 (struct ubifs_info*,char*,int ,int ) ;

__attribute__((used)) static int FUNC_7(struct ubifs_info *VAR_3, const struct inode *VAR_4)
{
 int VAR_5;
 const struct ubifs_inode *VAR_6 = FUNC_5(VAR_4);

 if (VAR_4->i_size > VAR_3->max_inode_sz) {
  FUNC_4(VAR_3, "inode is too large (%lld)",
     (long long)VAR_4->i_size);
  return 1;
 }

 if (VAR_6->compr_type >= VAR_0) {
  FUNC_4(VAR_3, "unknown compression type %d", VAR_6->compr_type);
  return 2;
 }

 if (VAR_6->xattr_names + VAR_6->xattr_cnt > VAR_2)
  return 3;

 if (VAR_6->data_len < 0 || VAR_6->data_len > VAR_1)
  return 4;

 if (VAR_6->xattr && !FUNC_0(VAR_4->i_mode))
  return 5;

 if (!FUNC_3(VAR_3, VAR_6->compr_type)) {
  FUNC_6(VAR_3, "inode %lu uses '%s' compression, but it was not compiled in",
      VAR_4->i_ino, FUNC_2(VAR_3, VAR_6->compr_type));
 }

 VAR_5 = FUNC_1(VAR_3, VAR_4);
 return VAR_5;
}
