
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct notifier_block {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int,int) ;

__attribute__((used)) static int FUNC_1(struct notifier_block *VAR_5,
     unsigned long VAR_6, void *VAR_7)
{

 if (!((VAR_6 & VAR_3) && (*(u8 *)VAR_7 == VAR_2)))
  return 0;

 FUNC_0(VAR_4, 1, VAR_1 | VAR_0);

 return 0;
}
