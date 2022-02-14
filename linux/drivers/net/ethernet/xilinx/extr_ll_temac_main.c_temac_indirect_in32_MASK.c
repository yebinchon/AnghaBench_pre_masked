
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct temac_local {int indirect_lock; } ;


 int FUNC_0 (int ,unsigned long) ;
 int FUNC_1 (int ,unsigned long) ;
 int FUNC_2 (struct temac_local*,int) ;

u32 FUNC_3(struct temac_local *VAR_0, int VAR_1)
{
 unsigned long VAR_2;
 int VAR_3;

 FUNC_0(VAR_0->indirect_lock, VAR_2);
 VAR_3 = FUNC_2(VAR_0, VAR_1);
 FUNC_1(VAR_0->indirect_lock, VAR_2);
 return VAR_3;
}
