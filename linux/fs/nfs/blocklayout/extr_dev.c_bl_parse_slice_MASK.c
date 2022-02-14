
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int len; int start; int volume; } ;
struct pnfs_block_volume {TYPE_1__ slice; } ;
struct pnfs_block_dev {int len; int disk_offset; } ;
struct nfs_server {int dummy; } ;
typedef int gfp_t ;


 int FUNC_0 (struct nfs_server*,struct pnfs_block_dev*,struct pnfs_block_volume*,int ,int ) ;

__attribute__((used)) static int
FUNC_1(struct nfs_server *VAR_0, struct pnfs_block_dev *VAR_1,
  struct pnfs_block_volume *VAR_2, int VAR_3, gfp_t VAR_4)
{
 struct pnfs_block_volume *VAR_5 = &VAR_2[VAR_3];
 int VAR_6;

 VAR_6 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_5->slice.volume, VAR_4);
 if (VAR_6)
  return VAR_6;

 VAR_1->disk_offset = VAR_5->slice.start;
 VAR_1->len = VAR_5->slice.len;
 return 0;
}
