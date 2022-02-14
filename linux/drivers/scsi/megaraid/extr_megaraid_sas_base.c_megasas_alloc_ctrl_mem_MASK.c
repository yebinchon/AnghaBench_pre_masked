
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct megasas_instance {int adapter_type; int * reply_map; } ;



 int VAR_0 ;
 int VAR_1 ;




 int * FUNC_0 (int ,int,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct megasas_instance*) ;
 int FUNC_3 (struct megasas_instance*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_4(struct megasas_instance *VAR_3)
{
 VAR_3->reply_map = FUNC_0(VAR_2, sizeof(unsigned int),
          VAR_1);
 if (!VAR_3->reply_map)
  return -VAR_0;

 switch (VAR_3->adapter_type) {
 case 130:
  if (FUNC_3(VAR_3))
   goto fail;
  break;
 case 132:
 case 128:
 case 129:
 case 131:
  if (FUNC_2(VAR_3))
   goto fail;
  break;
 }

 return 0;
 fail:
 FUNC_1(VAR_3->reply_map);
 VAR_3->reply_map = ((void*)0);
 return -VAR_0;
}
