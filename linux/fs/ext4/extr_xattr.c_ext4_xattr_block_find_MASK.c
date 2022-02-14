
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_8__ ;
typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct inode {struct super_block* i_sb; } ;
struct ext4_xattr_info {int name; int name_index; scalar_t__ value_len; int value; } ;
struct TYPE_11__ {int not_found; scalar_t__ end; int here; int first; TYPE_8__* base; } ;
struct ext4_xattr_block_find {TYPE_1__ s; TYPE_2__* bh; } ;
struct TYPE_14__ {int h_refcount; } ;
struct TYPE_13__ {scalar_t__ i_file_acl; } ;
struct TYPE_12__ {scalar_t__ b_size; scalar_t__ b_data; int b_count; } ;


 int FUNC_0 (TYPE_2__*) ;
 TYPE_8__* FUNC_1 (TYPE_2__*) ;
 int VAR_0 ;
 TYPE_7__* FUNC_2 (struct inode*) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int VAR_1 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_2__*,char*,int ,int ) ;
 int FUNC_7 (struct inode*,char*,int ,int ,int ,long) ;
 TYPE_2__* FUNC_8 (struct super_block*,scalar_t__,int ) ;
 int FUNC_9 (struct inode*,TYPE_2__*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (struct inode*,int *,scalar_t__,int ,int ,int) ;

__attribute__((used)) static int
FUNC_12(struct inode *VAR_2, struct ext4_xattr_info *VAR_3,
        struct ext4_xattr_block_find *VAR_4)
{
 struct super_block *VAR_5 = VAR_2->i_sb;
 int VAR_6;

 FUNC_7(VAR_2, "name=%d.%s, value=%p, value_len=%ld",
    VAR_3->name_index, VAR_3->name, VAR_3->value, (long)VAR_3->value_len);

 if (FUNC_2(VAR_2)->i_file_acl) {

  VAR_4->bh = FUNC_8(VAR_5, FUNC_2(VAR_2)->i_file_acl, VAR_1);
  if (FUNC_3(VAR_4->bh))
   return FUNC_4(VAR_4->bh);
  FUNC_6(VAR_4->bh, "b_count=%d, refcount=%d",
   FUNC_5(&(VAR_4->bh->b_count)),
   FUNC_10(FUNC_1(VAR_4->bh)->h_refcount));
  VAR_6 = FUNC_9(VAR_2, VAR_4->bh);
  if (VAR_6)
   return VAR_6;

  VAR_4->s.base = FUNC_1(VAR_4->bh);
  VAR_4->s.first = FUNC_0(VAR_4->bh);
  VAR_4->s.end = VAR_4->bh->b_data + VAR_4->bh->b_size;
  VAR_4->s.here = VAR_4->s.first;
  VAR_6 = FUNC_11(VAR_2, &VAR_4->s.here, VAR_4->s.end,
      VAR_3->name_index, VAR_3->name, 1);
  if (VAR_6 && VAR_6 != -VAR_0)
   return VAR_6;
  VAR_4->s.not_found = VAR_6;
 }
 return 0;
}
