
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct inode {int dummy; } ;
struct ext4_xattr_info {unsigned int value_len; void* value; int name; int name_index; } ;
struct TYPE_9__ {int bh; } ;
struct TYPE_8__ {TYPE_1__* here; int not_found; } ;
struct ext4_xattr_ibody_find {TYPE_3__ iloc; TYPE_2__ s; } ;
typedef int handle_t ;
struct TYPE_10__ {unsigned int i_inline_size; scalar_t__ i_inline_off; } ;
struct TYPE_7__ {int e_value_size; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_6__* FUNC_2 (struct inode*) ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct inode*,TYPE_3__*) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,struct inode*,TYPE_3__*) ;
 scalar_t__ FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (struct inode*,int ) ;
 int FUNC_9 (struct inode*,struct ext4_xattr_info*,struct ext4_xattr_ibody_find*) ;
 int FUNC_10 (struct inode*,int ,int ,void*,unsigned int) ;
 int FUNC_11 (int *,struct inode*,struct ext4_xattr_info*,struct ext4_xattr_ibody_find*) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (void*) ;
 void* FUNC_14 (unsigned int,int ) ;
 unsigned int FUNC_15 (int ) ;

__attribute__((used)) static int FUNC_16(handle_t *VAR_7, struct inode *VAR_8,
       unsigned int VAR_9)
{
 int VAR_10;
 void *VAR_11 = ((void*)0);
 struct ext4_xattr_ibody_find VAR_12 = {
  .s = { .not_found = -VAR_0, },
 };
 struct ext4_xattr_info VAR_13 = {
  .name_index = VAR_4,
  .name = VAR_5,
 };


 if (VAR_9 <= FUNC_2(VAR_8)->i_inline_size)
  return 0;

 VAR_10 = FUNC_4(VAR_8, &VAR_12.iloc);
 if (VAR_10)
  return VAR_10;

 VAR_10 = FUNC_9(VAR_8, &VAR_13, &VAR_12);
 if (VAR_10)
  goto out;

 FUNC_1(VAR_12.s.not_found);

 VAR_9 -= VAR_2;
 VAR_11 = FUNC_14(VAR_9, VAR_6);
 if (!VAR_11) {
  VAR_10 = -VAR_1;
  goto out;
 }

 VAR_10 = FUNC_10(VAR_8, VAR_13.name_index, VAR_13.name,
         VAR_11, VAR_9);
 if (VAR_10 == -VAR_0)
  goto out;

 FUNC_0(VAR_12.iloc.bh, "get_write_access");
 VAR_10 = FUNC_5(VAR_7, VAR_12.iloc.bh);
 if (VAR_10)
  goto out;


 VAR_13.value = VAR_11;
 VAR_13.value_len = VAR_9;

 VAR_10 = FUNC_11(VAR_7, VAR_8, &VAR_13, &VAR_12);
 if (VAR_10)
  goto out;

 FUNC_2(VAR_8)->i_inline_off = (u16)((void *)VAR_12.s.here -
          (void *)FUNC_7(&VAR_12.iloc));
 FUNC_2(VAR_8)->i_inline_size = VAR_2 +
    FUNC_15(VAR_12.s.here->e_value_size);
 FUNC_8(VAR_8, VAR_3);
 FUNC_12(VAR_12.iloc.bh);
 VAR_10 = FUNC_6(VAR_7, VAR_8, &VAR_12.iloc);

out:
 FUNC_13(VAR_11);
 FUNC_3(VAR_12.iloc.bh);
 return VAR_10;
}
