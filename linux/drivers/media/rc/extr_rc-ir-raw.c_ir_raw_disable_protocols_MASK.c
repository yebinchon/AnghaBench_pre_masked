
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct rc_dev {int lock; int enabled_protocols; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct rc_dev *VAR_0, u64 VAR_1)
{
 FUNC_0(&VAR_0->lock);
 VAR_0->enabled_protocols &= ~VAR_1;
 FUNC_1(&VAR_0->lock);
}
