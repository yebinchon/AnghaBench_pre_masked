
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct muram_info {int pool; } ;


 unsigned long FUNC_0 (struct muram_info*,unsigned long) ;
 int FUNC_1 (int ,unsigned long,size_t) ;

void FUNC_2(struct muram_info *VAR_0, unsigned long VAR_1,
    size_t VAR_2)
{
 unsigned long VAR_3 = FUNC_0(VAR_0, VAR_1);

 FUNC_1(VAR_0->pool, VAR_3, VAR_2);
}
