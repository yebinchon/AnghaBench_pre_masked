
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtd_info {int flags; int _unlock; int _lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_0(struct mtd_info *VAR_3)
{
 VAR_3->_lock = VAR_1;
 VAR_3->_unlock = VAR_2;
 VAR_3->flags |= VAR_0;
}
