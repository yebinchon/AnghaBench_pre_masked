
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct udf_part_map {scalar_t__ s_partition_type; } ;
struct super_block {int dummy; } ;
struct TYPE_10__ {int extLength; } ;
struct TYPE_9__ {int extLength; } ;
struct TYPE_8__ {int extLength; } ;
struct TYPE_7__ {int extLength; } ;
struct partitionHeaderDesc {TYPE_5__ freedSpaceBitmap; TYPE_4__ freedSpaceTable; TYPE_3__ unallocSpaceBitmap; TYPE_2__ unallocSpaceTable; } ;
struct TYPE_6__ {int ident; } ;
struct partitionDesc {scalar_t__ partitionContentsUse; TYPE_1__ partitionContents; int accessType; } ;


 int VAR_0 ;




 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct super_block*,int ) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct super_block*) ;
 scalar_t__ FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(struct super_block *VAR_6,
    struct partitionDesc *VAR_7,
    struct udf_part_map *VAR_8)
{
 bool VAR_9, VAR_10, VAR_11, VAR_12;
 struct partitionHeaderDesc *VAR_13;

 switch (FUNC_1(VAR_7->accessType)) {
 case 130:
 case 128:
 case 129:
 case 131:
  goto force_ro;
 }


 if (FUNC_3(VAR_7->partitionContents.ident, VAR_1) &&
     FUNC_3(VAR_7->partitionContents.ident, VAR_2))
  goto force_ro;

 VAR_13 = (struct partitionHeaderDesc *)VAR_7->partitionContentsUse;
 VAR_10 = VAR_13->unallocSpaceTable.extLength;
 VAR_9 = VAR_13->unallocSpaceBitmap.extLength;
 VAR_12 = VAR_13->freedSpaceTable.extLength;
 VAR_11 = VAR_13->freedSpaceBitmap.extLength;


 if (!VAR_10 && !VAR_9 && !VAR_12 && !VAR_11)
  goto force_ro;


 if (VAR_12 || VAR_11)
  goto force_ro;

 if (VAR_10 && VAR_9)
  goto force_ro;

 if (VAR_8->s_partition_type == VAR_4 ||
     VAR_8->s_partition_type == VAR_5)
  goto force_ro;

 return 0;
force_ro:
 if (!FUNC_2(VAR_6))
  return -VAR_0;
 FUNC_0(VAR_6, VAR_3);
 return 0;
}
