
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;


 int FUNC_0 (int) ;
 unsigned int FUNC_1 (unsigned int,unsigned int*) ;
 unsigned int FUNC_2 (void*,unsigned int,unsigned int) ;

u32 FUNC_3(u32 VAR_0, void *VAR_1, unsigned int VAR_2, unsigned int VAR_3)
{
 unsigned int VAR_4, VAR_5, VAR_6 = 0;

 FUNC_0(!VAR_2);
 for (VAR_4 = 0; (VAR_4 = FUNC_2(VAR_1, VAR_2, VAR_4)) < VAR_2; VAR_4++)
 {




  VAR_5 = FUNC_1(VAR_3 + VAR_4, &VAR_6);
  VAR_0 ^= VAR_5;
 }



 return VAR_0;
}
