
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct notifier_block {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct notifier_block *VAR_3,
         unsigned long VAR_4, void *VAR_5)
{
 FUNC_2(1, VAR_1 + 0xb0);
 FUNC_2(1, VAR_2 + 0x34);

 FUNC_0(50);
 FUNC_1("Unable to restart system\n");

 return VAR_0;
}
