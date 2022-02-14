
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdr_stream {int dummy; } ;
struct xdr_buf {int dummy; } ;
struct pnfs_device {int dev_id; int pglen; int pages; } ;
struct pnfs_block_volume {int dummy; } ;
struct nfs4_deviceid_node {int dummy; } ;
struct pnfs_block_dev {struct nfs4_deviceid_node node; } ;
struct page {int dummy; } ;
struct nfs_server {int dummy; } ;
typedef int gfp_t ;
typedef int __be32 ;


 int VAR_0 ;
 int FUNC_0 (struct page*) ;
 struct page* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct nfs_server*,struct pnfs_block_dev*,struct pnfs_block_volume*,int,int ) ;
 struct pnfs_block_volume* FUNC_4 (int,int,int ) ;
 int FUNC_5 (struct pnfs_block_volume*) ;
 struct pnfs_block_dev* FUNC_6 (int,int ) ;
 int FUNC_7 (struct xdr_stream*,struct pnfs_block_volume*) ;
 int FUNC_8 (struct nfs4_deviceid_node*,struct nfs_server*,int *) ;
 int FUNC_9 (struct nfs4_deviceid_node*) ;
 int FUNC_10 (struct page*) ;
 int FUNC_11 (struct xdr_stream*,struct xdr_buf*,int ,int ) ;
 int * FUNC_12 (struct xdr_stream*,int) ;
 int FUNC_13 (struct xdr_stream*,int ,int ) ;

struct nfs4_deviceid_node *
FUNC_14(struct nfs_server *VAR_1, struct pnfs_device *VAR_2,
  gfp_t VAR_3)
{
 struct nfs4_deviceid_node *VAR_4 = ((void*)0);
 struct pnfs_block_volume *VAR_5;
 struct pnfs_block_dev *VAR_6;
 struct xdr_stream VAR_7;
 struct xdr_buf VAR_8;
 struct page *VAR_9;
 int VAR_10, VAR_11, VAR_12;
 __be32 *VAR_13;

 VAR_9 = FUNC_1(VAR_3);
 if (!VAR_9)
  goto out;

 FUNC_11(&VAR_7, &VAR_8, VAR_2->pages, VAR_2->pglen);
 FUNC_13(&VAR_7, FUNC_10(VAR_9), VAR_0);

 VAR_13 = FUNC_12(&VAR_7, sizeof(__be32));
 if (!VAR_13)
  goto out_free_scratch;
 VAR_10 = FUNC_2(VAR_13++);

 VAR_5 = FUNC_4(VAR_10, sizeof(struct pnfs_block_volume),
     VAR_3);
 if (!VAR_5)
  goto out_free_scratch;

 for (VAR_12 = 0; VAR_12 < VAR_10; VAR_12++) {
  VAR_11 = FUNC_7(&VAR_7, &VAR_5[VAR_12]);
  if (VAR_11 < 0)
   goto out_free_volumes;
 }

 VAR_6 = FUNC_6(sizeof(*VAR_6), VAR_3);
 if (!VAR_6)
  goto out_free_volumes;

 VAR_11 = FUNC_3(VAR_1, VAR_6, VAR_5, VAR_10 - 1, VAR_3);

 VAR_4 = &VAR_6->node;
 FUNC_8(VAR_4, VAR_1, &VAR_2->dev_id);
 if (VAR_11)
  FUNC_9(VAR_4);

out_free_volumes:
 FUNC_5(VAR_5);
out_free_scratch:
 FUNC_0(VAR_9);
out:
 return VAR_4;
}
