
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_6__ {int partitionReferenceNum; } ;
struct TYPE_4__ {void* i_data; } ;
struct udf_inode_info {int i_lenAlloc; int i_alloc_type; TYPE_3__ i_location; int * i_lenEAttr; TYPE_1__ i_ext; } ;
struct short_ad {int extLength; int extPosition; } ;
struct long_ad {int extLength; int extLocation; } ;
struct kernel_lb_addr {int logicalBlockNum; int partitionReferenceNum; } ;
struct inode {int dummy; } ;
struct extent_position {int offset; TYPE_2__* bh; } ;
struct allocExtDesc {int lengthAllocDescs; } ;
typedef int int8_t ;
struct TYPE_5__ {int * b_data; } ;




 int VAR_0 ;
 struct udf_inode_info* FUNC_0 (struct inode*) ;
 int FUNC_1 (int ) ;
 struct kernel_lb_addr FUNC_2 (int ) ;
 int FUNC_3 (char*,int) ;
 void* FUNC_4 (struct inode*) ;
 struct long_ad* FUNC_5 (int *,int,int*,int) ;
 struct short_ad* FUNC_6 (int *,int,int*,int) ;

int8_t FUNC_7(struct inode *VAR_1, struct extent_position *VAR_2,
   struct kernel_lb_addr *VAR_3, uint32_t *VAR_4, int VAR_5)
{
 int VAR_6;
 int8_t VAR_7;
 uint8_t *VAR_8;
 struct short_ad *VAR_9;
 struct long_ad *VAR_10;
 struct udf_inode_info *VAR_11 = FUNC_0(VAR_1);

 if (!VAR_2->bh) {
  if (!VAR_2->offset)
   VAR_2->offset = FUNC_4(VAR_1);
  VAR_8 = VAR_11->i_ext.i_data + VAR_2->offset -
   FUNC_4(VAR_1) +
   VAR_11->i_lenEAttr;
  VAR_6 = FUNC_4(VAR_1) +
       VAR_11->i_lenAlloc;
 } else {
  if (!VAR_2->offset)
   VAR_2->offset = sizeof(struct allocExtDesc);
  VAR_8 = VAR_2->bh->b_data + VAR_2->offset;
  VAR_6 = sizeof(struct allocExtDesc) +
   FUNC_1(((struct allocExtDesc *)VAR_2->bh->b_data)->
       lengthAllocDescs);
 }

 switch (VAR_11->i_alloc_type) {
 case 128:
  VAR_9 = FUNC_6(VAR_8, VAR_6, &VAR_2->offset, VAR_5);
  if (!VAR_9)
   return -1;
  VAR_7 = FUNC_1(VAR_9->extLength) >> 30;
  VAR_3->logicalBlockNum = FUNC_1(VAR_9->extPosition);
  VAR_3->partitionReferenceNum =
    VAR_11->i_location.partitionReferenceNum;
  *VAR_4 = FUNC_1(VAR_9->extLength) & VAR_0;
  break;
 case 129:
  VAR_10 = FUNC_5(VAR_8, VAR_6, &VAR_2->offset, VAR_5);
  if (!VAR_10)
   return -1;
  VAR_7 = FUNC_1(VAR_10->extLength) >> 30;
  *VAR_3 = FUNC_2(VAR_10->extLocation);
  *VAR_4 = FUNC_1(VAR_10->extLength) & VAR_0;
  break;
 default:
  FUNC_3("alloc_type = %u unsupported\n", VAR_11->i_alloc_type);
  return -1;
 }

 return VAR_7;
}
