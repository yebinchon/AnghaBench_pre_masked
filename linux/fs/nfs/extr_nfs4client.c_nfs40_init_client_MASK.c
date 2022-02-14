
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_client {struct nfs4_slot_table* cl_slot_tbl; } ;
struct nfs4_slot_table {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct nfs4_slot_table*) ;
 struct nfs4_slot_table* FUNC_1 (int,int ) ;
 int FUNC_2 (struct nfs4_slot_table*,int ,char*) ;

int FUNC_3(struct nfs_client *VAR_3)
{
 struct nfs4_slot_table *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_1(sizeof(*VAR_4), VAR_1);
 if (VAR_4 == ((void*)0))
  return -VAR_0;

 VAR_5 = FUNC_2(VAR_4, VAR_2,
     "NFSv4.0 transport Slot table");
 if (VAR_5) {
  FUNC_0(VAR_4);
  return VAR_5;
 }

 VAR_3->cl_slot_tbl = VAR_4;
 return 0;
}
