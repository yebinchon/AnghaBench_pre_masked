
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct udf_sb_info {int s_udfrev; int s_serial_number; } ;
struct TYPE_6__ {int logicalBlockNum; } ;
struct TYPE_5__ {int* i_data; } ;
struct udf_inode_info {int i_lenEAttr; int i_lenAlloc; TYPE_2__ i_location; TYPE_1__ i_ext; } ;
struct tag {int dummy; } ;
struct inode {TYPE_4__* i_sb; } ;
struct genericFormat {int dummy; } ;
struct TYPE_7__ {void* tagIdent; int tagChecksum; void* descCRC; void* descCRCLength; void* tagLocation; void* tagSerialNum; void* descVersion; } ;
struct extendedAttrHeaderDesc {TYPE_3__ descTag; void* appAttrLocation; void* impAttrLocation; } ;
struct TYPE_8__ {int s_blocksize; } ;


 int VAR_0 ;
 struct udf_inode_info* FUNC_0 (struct inode*) ;
 struct udf_sb_info* FUNC_1 (TYPE_4__*) ;
 void* FUNC_2 (int) ;
 void* FUNC_3 (int) ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 (void*) ;
 int FUNC_6 (int*,int*,int) ;
 int FUNC_7 (struct inode*) ;
 int FUNC_8 (TYPE_3__*) ;

struct genericFormat *FUNC_9(struct inode *VAR_1, uint32_t VAR_2,
        uint32_t VAR_3, uint8_t VAR_4)
{
 uint8_t *VAR_5 = ((void*)0), *VAR_6 = ((void*)0);
 int VAR_7;
 uint16_t VAR_8;
 struct udf_inode_info *VAR_9 = FUNC_0(VAR_1);

 VAR_5 = VAR_9->i_ext.i_data;
 if (VAR_9->i_lenEAttr) {
  VAR_6 = VAR_9->i_ext.i_data + VAR_9->i_lenEAttr;
 } else {
  VAR_6 = VAR_5;
  VAR_2 += sizeof(struct extendedAttrHeaderDesc);
 }

 VAR_7 = VAR_1->i_sb->s_blocksize - FUNC_7(VAR_1) -
  VAR_9->i_lenAlloc;



 if (VAR_4 & 0x01 && VAR_7 >= VAR_2) {
  struct extendedAttrHeaderDesc *VAR_10;
  VAR_10 = (struct extendedAttrHeaderDesc *)VAR_5;

  if (VAR_9->i_lenAlloc)
   FUNC_6(&VAR_6[VAR_2], VAR_6, VAR_9->i_lenAlloc);

  if (VAR_9->i_lenEAttr) {

   if (VAR_10->descTag.tagIdent !=
     FUNC_2(VAR_0) ||
       FUNC_5(VAR_10->descTag.tagLocation) !=
     VAR_9->i_location.logicalBlockNum)
    return ((void*)0);
  } else {
   struct udf_sb_info *VAR_11 = FUNC_1(VAR_1->i_sb);

   VAR_2 -= sizeof(struct extendedAttrHeaderDesc);
   VAR_9->i_lenEAttr +=
    sizeof(struct extendedAttrHeaderDesc);
   VAR_10->descTag.tagIdent = FUNC_2(VAR_0);
   if (VAR_11->s_udfrev >= 0x0200)
    VAR_10->descTag.descVersion = FUNC_2(3);
   else
    VAR_10->descTag.descVersion = FUNC_2(2);
   VAR_10->descTag.tagSerialNum =
     FUNC_2(VAR_11->s_serial_number);
   VAR_10->descTag.tagLocation = FUNC_3(
     VAR_9->i_location.logicalBlockNum);
   VAR_10->impAttrLocation = FUNC_3(0xFFFFFFFF);
   VAR_10->appAttrLocation = FUNC_3(0xFFFFFFFF);
  }

  VAR_7 = VAR_9->i_lenEAttr;
  if (VAR_3 < 2048) {
   if (FUNC_5(VAR_10->appAttrLocation) <
     VAR_9->i_lenEAttr) {
    uint32_t VAR_12 =
     FUNC_5(VAR_10->appAttrLocation);
    FUNC_6(&VAR_5[VAR_7 - VAR_12 + VAR_2],
     &VAR_5[VAR_12], VAR_7 - VAR_12);
    VAR_7 -= VAR_12;
    VAR_10->appAttrLocation =
      FUNC_3(VAR_12 + VAR_2);
   }
   if (FUNC_5(VAR_10->impAttrLocation) <
     VAR_9->i_lenEAttr) {
    uint32_t VAR_13 =
     FUNC_5(VAR_10->impAttrLocation);
    FUNC_6(&VAR_5[VAR_7 - VAR_13 + VAR_2],
     &VAR_5[VAR_13], VAR_7 - VAR_13);
    VAR_7 -= VAR_13;
    VAR_10->impAttrLocation =
      FUNC_3(VAR_13 + VAR_2);
   }
  } else if (VAR_3 < 65536) {
   if (FUNC_5(VAR_10->appAttrLocation) <
     VAR_9->i_lenEAttr) {
    uint32_t VAR_14 =
     FUNC_5(VAR_10->appAttrLocation);
    FUNC_6(&VAR_5[VAR_7 - VAR_14 + VAR_2],
     &VAR_5[VAR_14], VAR_7 - VAR_14);
    VAR_7 -= VAR_14;
    VAR_10->appAttrLocation =
      FUNC_3(VAR_14 + VAR_2);
   }
  }

  VAR_8 = sizeof(struct extendedAttrHeaderDesc) - sizeof(struct tag);
  VAR_10->descTag.descCRCLength = FUNC_2(VAR_8);
  VAR_10->descTag.descCRC = FUNC_2(FUNC_4(0, (char *)VAR_10 +
      sizeof(struct tag), VAR_8));
  VAR_10->descTag.tagChecksum = FUNC_8(&VAR_10->descTag);
  VAR_9->i_lenEAttr += VAR_2;
  return (struct genericFormat *)&VAR_5[VAR_7];
 }

 return ((void*)0);
}
