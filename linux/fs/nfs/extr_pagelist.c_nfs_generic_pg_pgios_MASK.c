
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_pgio_header {int inode; int cred; } ;
struct nfs_pageio_descriptor {int pg_error; int pg_ioflags; int pg_rpc_callops; int pg_rw_ops; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct nfs_pageio_descriptor*,struct nfs_pgio_header*) ;
 int FUNC_3 (int ,struct nfs_pgio_header*,int ,int ,int ,int ,int ) ;
 int FUNC_4 (struct nfs_pageio_descriptor*,struct nfs_pgio_header*,int ) ;
 struct nfs_pgio_header* FUNC_5 (int ) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_6(struct nfs_pageio_descriptor *VAR_2)
{
 struct nfs_pgio_header *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_5(VAR_2->pg_rw_ops);
 if (!VAR_3) {
  VAR_2->pg_error = -VAR_0;
  return VAR_2->pg_error;
 }
 FUNC_4(VAR_2, VAR_3, VAR_1);
 VAR_4 = FUNC_2(VAR_2, VAR_3);
 if (VAR_4 == 0)
  VAR_4 = FUNC_3(FUNC_0(VAR_3->inode),
     VAR_3,
     VAR_3->cred,
     FUNC_1(VAR_3->inode),
     VAR_2->pg_rpc_callops,
     VAR_2->pg_ioflags, 0);
 return VAR_4;
}
