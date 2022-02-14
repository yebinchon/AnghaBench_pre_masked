
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int designator; int designator_len; int designator_type; } ;
struct pnfs_block_volume {TYPE_1__ scsi; } ;
struct block_device {int dummy; } ;


 int VAR_0 ;
 struct block_device* FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct block_device* FUNC_1 (char const*,int,int *) ;
 char* FUNC_2 (int ,char*,int ,int ,int ) ;
 int FUNC_3 (char const*) ;

__attribute__((used)) static struct block_device *
FUNC_4(struct pnfs_block_volume *VAR_4)
{
 struct block_device *VAR_5;
 const char *VAR_6;

 VAR_6 = FUNC_2(VAR_3,
   "/dev/disk/by-id/dm-uuid-mpath-%d%*phN",
   VAR_4->scsi.designator_type,
   VAR_4->scsi.designator_len, VAR_4->scsi.designator);
 if (!VAR_6)
  return FUNC_0(-VAR_0);

 VAR_5 = FUNC_1(VAR_6, VAR_1 | VAR_2, ((void*)0));
 FUNC_3(VAR_6);
 return VAR_5;
}
