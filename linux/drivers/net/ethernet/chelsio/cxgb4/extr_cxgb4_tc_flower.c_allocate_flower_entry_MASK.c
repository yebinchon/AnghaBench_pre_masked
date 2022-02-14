
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ch_tc_flower_entry {int lock; } ;


 int VAR_0 ;
 struct ch_tc_flower_entry* FUNC_0 (int,int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static struct ch_tc_flower_entry *FUNC_2(void)
{
 struct ch_tc_flower_entry *VAR_1 = FUNC_0(sizeof(*VAR_1), VAR_0);
 if (VAR_1)
  FUNC_1(&VAR_1->lock);
 return VAR_1;
}
