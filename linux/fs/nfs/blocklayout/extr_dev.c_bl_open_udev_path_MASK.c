
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int designator; int designator_len; } ;
struct pnfs_block_volume {TYPE_1__ scsi; } ;
struct block_device {int dummy; } ;


 int VAR_0 ;
 struct block_device* FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct block_device*) ;
 int FUNC_2 (struct block_device*) ;
 struct block_device* FUNC_3 (char const*,int,int *) ;
 char* FUNC_4 (int ,char*,int ,int ) ;
 int FUNC_5 (char const*) ;
 int FUNC_6 (char*,char const*,int ) ;

__attribute__((used)) static struct block_device *
FUNC_7(struct pnfs_block_volume *VAR_4)
{
 struct block_device *VAR_5;
 const char *VAR_6;

 VAR_6 = FUNC_4(VAR_3, "/dev/disk/by-id/wwn-0x%*phN",
    VAR_4->scsi.designator_len, VAR_4->scsi.designator);
 if (!VAR_6)
  return FUNC_0(-VAR_0);

 VAR_5 = FUNC_3(VAR_6, VAR_1 | VAR_2, ((void*)0));
 if (FUNC_1(VAR_5)) {
  FUNC_6("pNFS: failed to open device %s (%ld)\n",
   VAR_6, FUNC_2(VAR_5));
 }

 FUNC_5(VAR_6);
 return VAR_5;
}
