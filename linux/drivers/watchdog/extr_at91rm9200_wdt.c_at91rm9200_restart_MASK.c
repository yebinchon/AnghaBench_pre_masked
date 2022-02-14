
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct notifier_block {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int VAR_6 ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static int FUNC_3(struct notifier_block *VAR_7,
     unsigned long VAR_8, void *VAR_9)
{



 FUNC_2(VAR_6, VAR_3,
       VAR_2 | VAR_1 | 1);
 FUNC_2(VAR_6, VAR_0, VAR_4);

 FUNC_0(2000);

 FUNC_1("Unable to restart system\n");
 return VAR_5;
}
