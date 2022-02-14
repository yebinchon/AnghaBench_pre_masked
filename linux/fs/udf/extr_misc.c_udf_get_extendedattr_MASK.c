
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
struct TYPE_6__ {scalar_t__ logicalBlockNum; } ;
struct TYPE_4__ {scalar_t__* i_data; } ;
struct udf_inode_info {int i_lenEAttr; TYPE_3__ i_location; TYPE_1__ i_ext; } ;
struct inode {int dummy; } ;
struct genericFormat {scalar_t__ attrSubtype; int attrLength; int attrType; } ;
struct TYPE_5__ {scalar_t__ tagIdent; int tagLocation; } ;
struct extendedAttrHeaderDesc {int appAttrLocation; int impAttrLocation; TYPE_2__ descTag; } ;


 int VAR_0 ;
 struct udf_inode_info* FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

struct genericFormat *FUNC_3(struct inode *VAR_1, uint32_t VAR_2,
        uint8_t VAR_3)
{
 struct genericFormat *VAR_4;
 uint8_t *VAR_5 = ((void*)0);
 uint32_t VAR_6;
 struct udf_inode_info *VAR_7 = FUNC_0(VAR_1);

 VAR_5 = VAR_7->i_ext.i_data;

 if (VAR_7->i_lenEAttr) {
  struct extendedAttrHeaderDesc *VAR_8;
  VAR_8 = (struct extendedAttrHeaderDesc *)VAR_5;


  if (VAR_8->descTag.tagIdent !=
    FUNC_1(VAR_0) ||
      FUNC_2(VAR_8->descTag.tagLocation) !=
    VAR_7->i_location.logicalBlockNum)
   return ((void*)0);

  if (VAR_2 < 2048)
   VAR_6 = sizeof(struct extendedAttrHeaderDesc);
  else if (VAR_2 < 65536)
   VAR_6 = FUNC_2(VAR_8->impAttrLocation);
  else
   VAR_6 = FUNC_2(VAR_8->appAttrLocation);

  while (VAR_6 < VAR_7->i_lenEAttr) {
   VAR_4 = (struct genericFormat *)&VAR_5[VAR_6];
   if (FUNC_2(VAR_4->attrType) == VAR_2 &&
     VAR_4->attrSubtype == VAR_3)
    return VAR_4;
   else
    VAR_6 += FUNC_2(VAR_4->attrLength);
  }
 }

 return ((void*)0);
}
