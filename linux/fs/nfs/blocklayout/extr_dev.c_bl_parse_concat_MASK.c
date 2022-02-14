
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct TYPE_4__ {int volumes_count; int * volumes; } ;
struct pnfs_block_volume {TYPE_1__ concat; } ;
struct pnfs_block_dev {int map; scalar_t__ len; TYPE_2__* children; int nr_children; } ;
struct nfs_server {int dummy; } ;
typedef int gfp_t ;
struct TYPE_5__ {scalar_t__ len; int start; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct nfs_server*,TYPE_2__*,struct pnfs_block_volume*,int ,int ) ;
 TYPE_2__* FUNC_1 (int,int,int ) ;

__attribute__((used)) static int
FUNC_2(struct nfs_server *VAR_3, struct pnfs_block_dev *VAR_4,
  struct pnfs_block_volume *VAR_5, int VAR_6, gfp_t VAR_7)
{
 struct pnfs_block_volume *VAR_8 = &VAR_5[VAR_6];
 u64 VAR_9 = 0;
 int VAR_10, VAR_11;

 VAR_4->children = FUNC_1(VAR_8->concat.volumes_count,
   sizeof(struct pnfs_block_dev), VAR_1);
 if (!VAR_4->children)
  return -VAR_0;

 for (VAR_11 = 0; VAR_11 < VAR_8->concat.volumes_count; VAR_11++) {
  VAR_10 = FUNC_0(VAR_3, &VAR_4->children[VAR_11],
    VAR_5, VAR_8->concat.volumes[VAR_11], VAR_7);
  if (VAR_10)
   return VAR_10;

  VAR_4->nr_children++;
  VAR_4->children[VAR_11].start += VAR_9;
  VAR_9 += VAR_4->children[VAR_11].len;
 }

 VAR_4->len = VAR_9;
 VAR_4->map = VAR_2;
 return 0;
}
