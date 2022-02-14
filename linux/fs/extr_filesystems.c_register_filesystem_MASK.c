
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file_system_type {int name; scalar_t__ next; scalar_t__ parameters; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct file_system_type** FUNC_1 (int ,int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,char) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

int FUNC_7(struct file_system_type * VAR_3)
{
 int VAR_4 = 0;
 struct file_system_type ** VAR_5;

 if (VAR_3->parameters && !FUNC_2(VAR_3->parameters))
  return -VAR_1;

 FUNC_0(FUNC_3(VAR_3->name, '.'));
 if (VAR_3->next)
  return -VAR_0;
 FUNC_5(&VAR_2);
 VAR_5 = FUNC_1(VAR_3->name, FUNC_4(VAR_3->name));
 if (*VAR_5)
  VAR_4 = -VAR_0;
 else
  *VAR_5 = VAR_3;
 FUNC_6(&VAR_2);
 return VAR_4;
}
