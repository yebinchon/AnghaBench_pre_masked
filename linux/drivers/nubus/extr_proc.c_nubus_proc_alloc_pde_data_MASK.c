
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nubus_proc_pde_data {unsigned char* res_ptr; unsigned int res_size; } ;


 int VAR_0 ;
 struct nubus_proc_pde_data* FUNC_0 (int,int ) ;

__attribute__((used)) static struct nubus_proc_pde_data *
FUNC_1(unsigned char *VAR_1, unsigned int VAR_2)
{
 struct nubus_proc_pde_data *VAR_3;

 VAR_3 = FUNC_0(sizeof(*VAR_3), VAR_0);
 if (!VAR_3)
  return ((void*)0);

 VAR_3->res_ptr = VAR_1;
 VAR_3->res_size = VAR_2;
 return VAR_3;
}
