
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct super_block {int dummy; } ;
struct inode {scalar_t__ i_ino; struct super_block* i_sb; } ;
struct buffer_head {int b_blocknr; } ;
struct TYPE_6__ {void* key; void* ptype; } ;
struct TYPE_5__ {int i_extcnt; } ;
struct TYPE_4__ {void* extension; void* parent; void* stype; } ;


 TYPE_3__* FUNC_0 (struct buffer_head*) ;
 TYPE_2__* FUNC_1 (struct inode*) ;
 TYPE_1__* FUNC_2 (struct super_block*,struct buffer_head*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct buffer_head* FUNC_3 (int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (struct buffer_head*,scalar_t__) ;
 scalar_t__ FUNC_5 (struct inode*,int ) ;
 int FUNC_6 (struct super_block*,struct buffer_head*) ;
 int FUNC_7 (struct super_block*,scalar_t__) ;
 struct buffer_head* FUNC_8 (struct super_block*,scalar_t__) ;
 int FUNC_9 (struct super_block*,char*,char*,scalar_t__) ;
 scalar_t__ FUNC_10 (void*) ;
 void* FUNC_11 (scalar_t__) ;
 int FUNC_12 (struct buffer_head*,struct inode*) ;
 int FUNC_13 (struct inode*) ;

__attribute__((used)) static struct buffer_head *
FUNC_14(struct inode *VAR_4, struct buffer_head *VAR_5, u32 VAR_6)
{
 struct super_block *VAR_7 = VAR_4->i_sb;
 struct buffer_head *VAR_8;
 u32 VAR_9, VAR_10;

 VAR_9 = FUNC_5(VAR_4, VAR_5->b_blocknr);
 if (!VAR_9)
  return FUNC_3(-VAR_1);

 VAR_8 = FUNC_8(VAR_7, VAR_9);
 if (!VAR_8) {
  FUNC_7(VAR_7, VAR_9);
  return FUNC_3(-VAR_0);
 }

 FUNC_0(VAR_8)->ptype = FUNC_11(VAR_3);
 FUNC_0(VAR_8)->key = FUNC_11(VAR_9);
 FUNC_2(VAR_7, VAR_8)->stype = FUNC_11(VAR_2);
 FUNC_2(VAR_7, VAR_8)->parent = FUNC_11(VAR_4->i_ino);
 FUNC_6(VAR_7, VAR_8);

 FUNC_12(VAR_8, VAR_4);

 VAR_10 = FUNC_10(FUNC_2(VAR_7, VAR_5)->extension);
 if (VAR_10)
  FUNC_9(VAR_7, "alloc_ext", "previous extension set (%x)", VAR_10);
 FUNC_2(VAR_7, VAR_5)->extension = FUNC_11(VAR_9);
 FUNC_4(VAR_5, VAR_9 - VAR_10);
 FUNC_12(VAR_5, VAR_4);

 FUNC_1(VAR_4)->i_extcnt++;
 FUNC_13(VAR_4);

 return VAR_8;
}
