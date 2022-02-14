
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_4__ {int i_data; } ;
struct udf_inode_info {int i_alloc_type; int * i_lenEAttr; TYPE_1__ i_ext; } ;
struct short_ad {void* extPosition; void* extLength; } ;
struct long_ad {int impUse; int extLocation; void* extLength; } ;
struct kernel_lb_addr {int logicalBlockNum; } ;
struct inode {int i_sb; } ;
struct extent_position {int offset; TYPE_2__* bh; } ;
struct allocExtDesc {int lengthAllocDescs; } ;
struct TYPE_6__ {int s_udfrev; } ;
struct TYPE_5__ {int * b_data; } ;




 int VAR_0 ;
 struct udf_inode_info* FUNC_0 (struct inode*) ;
 int FUNC_1 (int ,int ) ;
 TYPE_3__* FUNC_2 (int ) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (struct kernel_lb_addr) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (TYPE_2__*,struct inode*) ;
 int FUNC_7 (struct inode*) ;
 int FUNC_8 (int ,int,int) ;
 int FUNC_9 (struct inode*) ;
 int FUNC_10 (int *,scalar_t__) ;

void FUNC_11(struct inode *VAR_1, struct extent_position *VAR_2,
      struct kernel_lb_addr *VAR_3, uint32_t VAR_4, int VAR_5)
{
 int VAR_6;
 uint8_t *VAR_7;
 struct short_ad *VAR_8;
 struct long_ad *VAR_9;
 struct udf_inode_info *VAR_10 = FUNC_0(VAR_1);

 if (!VAR_2->bh)
  VAR_7 = VAR_10->i_ext.i_data + VAR_2->offset -
   FUNC_9(VAR_1) +
   VAR_10->i_lenEAttr;
 else
  VAR_7 = VAR_2->bh->b_data + VAR_2->offset;

 switch (VAR_10->i_alloc_type) {
 case 128:
  VAR_8 = (struct short_ad *)VAR_7;
  VAR_8->extLength = FUNC_3(VAR_4);
  VAR_8->extPosition = FUNC_3(VAR_3->logicalBlockNum);
  VAR_6 = sizeof(struct short_ad);
  break;
 case 129:
  VAR_9 = (struct long_ad *)VAR_7;
  VAR_9->extLength = FUNC_3(VAR_4);
  VAR_9->extLocation = FUNC_4(*VAR_3);
  FUNC_8(VAR_9->impUse, 0x00, sizeof(VAR_9->impUse));
  VAR_6 = sizeof(struct long_ad);
  break;
 default:
  return;
 }

 if (VAR_2->bh) {
  if (!FUNC_1(VAR_1->i_sb, VAR_0) ||
      FUNC_2(VAR_1->i_sb)->s_udfrev >= 0x0201) {
   struct allocExtDesc *VAR_11 =
    (struct allocExtDesc *)VAR_2->bh->b_data;
   FUNC_10(VAR_2->bh->b_data,
           FUNC_5(VAR_11->lengthAllocDescs) +
           sizeof(struct allocExtDesc));
  }
  FUNC_6(VAR_2->bh, VAR_1);
 } else {
  FUNC_7(VAR_1);
 }

 if (VAR_5)
  VAR_2->offset += VAR_6;
}
