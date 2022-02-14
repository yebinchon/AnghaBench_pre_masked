
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct sh_pfc {int lock; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (unsigned int,int ) ;
 unsigned int FUNC_1 (struct sh_pfc*,unsigned int,unsigned int*,unsigned int*) ;
 unsigned int FUNC_2 (struct sh_pfc*,unsigned int) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct sh_pfc *VAR_1,
          unsigned int VAR_2)
{
 unsigned long VAR_3;
 unsigned int VAR_4;
 unsigned int VAR_5;
 u32 VAR_6;
 u32 VAR_7;

 VAR_6 = FUNC_1(VAR_1, VAR_2, &VAR_4, &VAR_5);
 if (!VAR_6)
  return -VAR_0;

 FUNC_3(&VAR_1->lock, VAR_3);
 VAR_7 = FUNC_2(VAR_1, VAR_6);
 FUNC_4(&VAR_1->lock, VAR_3);

 VAR_7 = (VAR_7 >> VAR_4) & FUNC_0(VAR_5 - 1, 0);




 return (VAR_7 + 1) * (VAR_5 == 2 ? 6 : 3);
}
