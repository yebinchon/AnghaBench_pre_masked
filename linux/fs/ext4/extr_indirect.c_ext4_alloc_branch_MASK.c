
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct ext4_allocation_request {int flags; int len; TYPE_2__* inode; int goal; } ;
struct buffer_head {int b_blocknr; scalar_t__ b_data; int b_size; } ;
typedef int handle_t ;
typedef int ext4_lblk_t ;
typedef int ext4_fsblk_t ;
typedef int __le32 ;
struct TYPE_8__ {int i_sb; } ;
struct TYPE_7__ {struct buffer_head* bh; int * p; void* key; } ;
typedef TYPE_1__ Indirect ;


 int FUNC_0 (struct buffer_head*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (int *,int,TYPE_2__*,struct buffer_head*,int ) ;
 int FUNC_3 (int *,TYPE_2__*,int *,int ,int,int ) ;
 int FUNC_4 (int *,TYPE_2__*,struct buffer_head*) ;
 int FUNC_5 (int *,struct buffer_head*) ;
 int FUNC_6 (int *,struct ext4_allocation_request*,int*) ;
 int FUNC_7 (int *,TYPE_2__*,int ,int,int *,int*) ;
 int FUNC_8 (struct buffer_head*) ;
 int FUNC_9 (scalar_t__,int ,int ) ;
 struct buffer_head* FUNC_10 (int ,int ) ;
 int FUNC_11 (struct buffer_head*) ;
 scalar_t__ FUNC_12 (int) ;
 int FUNC_13 (struct buffer_head*) ;

__attribute__((used)) static int FUNC_14(handle_t *VAR_2,
        struct ext4_allocation_request *VAR_3,
        int VAR_4, ext4_lblk_t *VAR_5,
        Indirect *VAR_6)
{
 struct buffer_head * VAR_7;
 ext4_fsblk_t VAR_8, VAR_9[4];
 __le32 *VAR_10;
 int VAR_11, VAR_12, VAR_13, VAR_14 = 1;

 for (VAR_11 = 0; VAR_11 <= VAR_4; VAR_11++) {
  if (VAR_11 == VAR_4) {
   VAR_9[VAR_11] = FUNC_6(VAR_2, VAR_3, &VAR_13);
  } else
   VAR_3->goal = VAR_9[VAR_11] = FUNC_7(VAR_2,
     VAR_3->inode, VAR_3->goal,
     VAR_3->flags & VAR_1,
     ((void*)0), &VAR_13);
  if (VAR_13) {
   VAR_11--;
   goto failed;
  }
  VAR_6[VAR_11].key = FUNC_1(VAR_9[VAR_11]);
  if (VAR_11 == 0)
   continue;

  VAR_7 = VAR_6[VAR_11].bh = FUNC_10(VAR_3->inode->i_sb, VAR_9[VAR_11-1]);
  if (FUNC_12(!VAR_7)) {
   VAR_13 = -VAR_0;
   goto failed;
  }
  FUNC_8(VAR_7);
  FUNC_0(VAR_7, "call get_create_access");
  VAR_13 = FUNC_5(VAR_2, VAR_7);
  if (VAR_13) {
   FUNC_13(VAR_7);
   goto failed;
  }

  FUNC_9(VAR_7->b_data, 0, VAR_7->b_size);
  VAR_10 = VAR_6[VAR_11].p = (__le32 *) VAR_7->b_data + VAR_5[VAR_11];
  VAR_8 = VAR_9[VAR_11];

  if (VAR_11 == VAR_4)
   VAR_14 = VAR_3->len;
  for (VAR_12 = 0; VAR_12 < VAR_14; VAR_12++)
   *VAR_10++ = FUNC_1(VAR_8++);

  FUNC_0(VAR_7, "marking uptodate");
  FUNC_11(VAR_7);
  FUNC_13(VAR_7);

  FUNC_0(VAR_7, "call ext4_handle_dirty_metadata");
  VAR_13 = FUNC_4(VAR_2, VAR_3->inode, VAR_7);
  if (VAR_13)
   goto failed;
 }
 return 0;
failed:
 for (; VAR_11 >= 0; VAR_11--) {






  if (VAR_11 > 0 && VAR_11 != VAR_4 && VAR_6[VAR_11].bh)
   FUNC_2(VAR_2, 1, VAR_3->inode, VAR_6[VAR_11].bh,
        VAR_6[VAR_11].bh->b_blocknr);
  FUNC_3(VAR_2, VAR_3->inode, ((void*)0), VAR_9[VAR_11],
     (VAR_11 == VAR_4) ? VAR_3->len : 1, 0);
 }
 return VAR_13;
}
