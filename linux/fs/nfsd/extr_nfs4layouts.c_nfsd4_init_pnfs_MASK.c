
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs4_layout_stateid {int dummy; } ;
struct nfs4_layout {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 void* FUNC_1 (char*,int,int ,int ,int *) ;
 int FUNC_2 (void*) ;
 void* VAR_2 ;
 void* VAR_3 ;
 int * VAR_4 ;

int
FUNC_3(void)
{
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++)
  FUNC_0(&VAR_4[VAR_5]);

 VAR_2 = FUNC_1("nfs4_layout",
   sizeof(struct nfs4_layout), 0, 0, ((void*)0));
 if (!VAR_2)
  return -VAR_1;

 VAR_3 = FUNC_1("nfs4_layout_stateid",
   sizeof(struct nfs4_layout_stateid), 0, 0, ((void*)0));
 if (!VAR_3) {
  FUNC_2(VAR_2);
  return -VAR_1;
 }
 return 0;
}
