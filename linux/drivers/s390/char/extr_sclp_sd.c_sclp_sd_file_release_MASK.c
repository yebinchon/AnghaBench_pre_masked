
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sclp_sd_file {int data; } ;
struct kobject {int dummy; } ;


 int FUNC_0 (struct sclp_sd_file*) ;
 int FUNC_1 (int *) ;
 struct sclp_sd_file* FUNC_2 (struct kobject*) ;

__attribute__((used)) static void FUNC_3(struct kobject *VAR_0)
{
 struct sclp_sd_file *VAR_1 = FUNC_2(VAR_0);

 FUNC_1(&VAR_1->data);
 FUNC_0(VAR_1);
}
