
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct notifier_block {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_2(struct notifier_block *VAR_2,
    unsigned long VAR_3,
    void *VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_1(&VAR_1);
 if (VAR_5)
  FUNC_0("Failed to set balloon watcher\n");

 return VAR_0;
}
