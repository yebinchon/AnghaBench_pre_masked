
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct udf_sb_info {int s_udfrev; } ;
struct super_block {int dummy; } ;
struct inode {struct super_block* i_sb; } ;
struct extent_position {TYPE_1__* bh; } ;
struct allocExtDesc {int lengthAllocDescs; } ;
struct TYPE_2__ {scalar_t__ b_data; } ;


 int VAR_0 ;
 int FUNC_0 (struct super_block*,int ) ;
 struct udf_sb_info* FUNC_1 (struct super_block*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (TYPE_1__*,struct inode*) ;
 int FUNC_4 (scalar_t__,int) ;

__attribute__((used)) static void FUNC_5(struct inode *VAR_1,
          struct extent_position *VAR_2,
          u32 VAR_3)
{
 struct super_block *VAR_4 = VAR_1->i_sb;
 struct udf_sb_info *VAR_5 = FUNC_1(VAR_4);

 struct allocExtDesc *VAR_6 = (struct allocExtDesc *) (VAR_2->bh->b_data);
 int VAR_7 = sizeof(struct allocExtDesc);

 VAR_6->lengthAllocDescs = FUNC_2(VAR_3);
 if (!FUNC_0(VAR_4, VAR_0) || VAR_5->s_udfrev >= 0x0201)
  VAR_7 += VAR_3;

 FUNC_4(VAR_2->bh->b_data, VAR_7);
 FUNC_3(VAR_2->bh, VAR_1);
}
