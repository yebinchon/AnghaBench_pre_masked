
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct udf_inode_info {scalar_t__ i_alloc_type; scalar_t__ i_lenAlloc; } ;
struct short_ad {int dummy; } ;
struct long_ad {int dummy; } ;
struct kernel_lb_addr {int dummy; } ;
struct inode {TYPE_3__* i_sb; } ;
struct extent_position {int offset; TYPE_1__* bh; } ;
struct allocExtDesc {int lengthAllocDescs; } ;
struct TYPE_7__ {int s_blocksize; } ;
struct TYPE_6__ {int s_udfrev; } ;
struct TYPE_5__ {scalar_t__ b_data; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 struct udf_inode_info* FUNC_0 (struct inode*) ;
 int FUNC_1 (TYPE_3__*,int ) ;
 TYPE_2__* FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_1__*,struct inode*) ;
 int FUNC_7 (struct inode*) ;
 scalar_t__ FUNC_8 (struct inode*) ;
 int FUNC_9 (scalar_t__,int) ;
 int FUNC_10 (struct inode*,struct extent_position*,struct kernel_lb_addr*,int ,int) ;

int FUNC_11(struct inode *VAR_4, struct extent_position *VAR_5,
     struct kernel_lb_addr *VAR_6, uint32_t VAR_7, int VAR_8)
{
 struct udf_inode_info *VAR_9 = FUNC_0(VAR_4);
 struct allocExtDesc *VAR_10;
 int VAR_11;

 if (VAR_9->i_alloc_type == VAR_2)
  VAR_11 = sizeof(struct short_ad);
 else if (VAR_9->i_alloc_type == VAR_1)
  VAR_11 = sizeof(struct long_ad);
 else
  return -VAR_0;

 if (!VAR_5->bh) {
  FUNC_3(VAR_9->i_lenAlloc !=
   VAR_5->offset - FUNC_8(VAR_4));
 } else {
  VAR_10 = (struct allocExtDesc *)VAR_5->bh->b_data;
  FUNC_3(FUNC_5(VAR_10->lengthAllocDescs) !=
   VAR_5->offset - sizeof(struct allocExtDesc));
  FUNC_3(VAR_5->offset + VAR_11 > VAR_4->i_sb->s_blocksize);
 }

 FUNC_10(VAR_4, VAR_5, VAR_6, VAR_7, VAR_8);

 if (!VAR_5->bh) {
  VAR_9->i_lenAlloc += VAR_11;
  FUNC_7(VAR_4);
 } else {
  VAR_10 = (struct allocExtDesc *)VAR_5->bh->b_data;
  FUNC_4(&VAR_10->lengthAllocDescs, VAR_11);
  if (!FUNC_1(VAR_4->i_sb, VAR_3) ||
    FUNC_2(VAR_4->i_sb)->s_udfrev >= 0x0201)
   FUNC_9(VAR_5->bh->b_data,
     VAR_5->offset + (VAR_8 ? 0 : VAR_11));
  else
   FUNC_9(VAR_5->bh->b_data,
     sizeof(struct allocExtDesc));
  FUNC_6(VAR_5->bh, VAR_4);
 }

 return 0;
}
