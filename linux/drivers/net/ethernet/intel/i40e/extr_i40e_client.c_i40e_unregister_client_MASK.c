
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i40e_client {int name; } ;


 int VAR_0 ;
 int FUNC_0 (struct i40e_client*) ;
 int FUNC_1 (char*,int ) ;
 struct i40e_client* VAR_1 ;

int FUNC_2(struct i40e_client *VAR_2)
{
 int VAR_3 = 0;

 if (VAR_1 != VAR_2) {
  FUNC_1("i40e: Client %s has not been registered\n",
   VAR_2->name);
  VAR_3 = -VAR_0;
  goto out;
 }
 VAR_1 = ((void*)0);




 FUNC_0(VAR_2);

 FUNC_1("i40e: Unregistered client %s\n", VAR_2->name);
out:
 return VAR_3;
}
