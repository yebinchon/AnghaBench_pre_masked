
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs4_xdr_opaque_data {struct nfs4_flexfile_layoutreturn_args* data; } ;
struct nfs4_flexfile_layoutreturn_args {int * pages; int num_dev; int devinfo; int errors; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct nfs4_flexfile_layoutreturn_args*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(struct nfs4_xdr_opaque_data *VAR_0)
{
 struct nfs4_flexfile_layoutreturn_args *VAR_1;

 if (!VAR_0->data)
  return;
 VAR_1 = VAR_0->data;
 VAR_0->data = ((void*)0);

 FUNC_0(&VAR_1->errors);
 FUNC_1(VAR_1->devinfo, VAR_1->num_dev);

 FUNC_3(VAR_1->pages[0]);
 FUNC_2(VAR_1);
}
