
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pnfs_block_volume {int type; } ;
struct pnfs_block_dev {int dummy; } ;
struct nfs_server {int dummy; } ;
typedef int gfp_t ;


 int VAR_0 ;





 int FUNC_0 (struct nfs_server*,struct pnfs_block_dev*,struct pnfs_block_volume*,int,int ) ;
 int FUNC_1 (struct nfs_server*,struct pnfs_block_dev*,struct pnfs_block_volume*,int,int ) ;
 int FUNC_2 (struct nfs_server*,struct pnfs_block_dev*,struct pnfs_block_volume*,int,int ) ;
 int FUNC_3 (struct nfs_server*,struct pnfs_block_dev*,struct pnfs_block_volume*,int,int ) ;
 int FUNC_4 (struct nfs_server*,struct pnfs_block_dev*,struct pnfs_block_volume*,int,int ) ;
 int FUNC_5 (char*,int) ;

__attribute__((used)) static int
FUNC_6(struct nfs_server *VAR_1, struct pnfs_block_dev *VAR_2,
  struct pnfs_block_volume *VAR_3, int VAR_4, gfp_t VAR_5)
{
 switch (VAR_3[VAR_4].type) {
 case 130:
  return FUNC_2(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
 case 129:
  return FUNC_3(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
 case 132:
  return FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
 case 128:
  return FUNC_4(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
 case 131:
  return FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
 default:
  FUNC_5("unsupported volume type: %d\n", VAR_3[VAR_4].type);
  return -VAR_0;
 }
}
