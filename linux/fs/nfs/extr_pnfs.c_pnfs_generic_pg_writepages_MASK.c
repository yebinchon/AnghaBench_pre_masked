
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_pgio_header {int lseg; } ;
struct nfs_pageio_descriptor {int pg_error; int pg_ioflags; int pg_lseg; int pg_rw_ops; } ;


 int VAR_0 ;
 int FUNC_0 (struct nfs_pageio_descriptor*,struct nfs_pgio_header*) ;
 int FUNC_1 (struct nfs_pageio_descriptor*,struct nfs_pgio_header*,int ) ;
 struct nfs_pgio_header* FUNC_2 (int ) ;
 int FUNC_3 (struct nfs_pageio_descriptor*,struct nfs_pgio_header*,int ) ;
 int FUNC_4 (int ) ;
 int VAR_1 ;

int
FUNC_5(struct nfs_pageio_descriptor *VAR_2)
{
 struct nfs_pgio_header *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_2(VAR_2->pg_rw_ops);
 if (!VAR_3) {
  VAR_2->pg_error = -VAR_0;
  return VAR_2->pg_error;
 }
 FUNC_1(VAR_2, VAR_3, VAR_1);

 VAR_3->lseg = FUNC_4(VAR_2->pg_lseg);
 VAR_4 = FUNC_0(VAR_2, VAR_3);
 if (!VAR_4)
  FUNC_3(VAR_2, VAR_3, VAR_2->pg_ioflags);

 return VAR_4;
}
