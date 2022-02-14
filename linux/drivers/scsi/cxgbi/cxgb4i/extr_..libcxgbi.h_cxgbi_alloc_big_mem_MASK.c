
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int gfp_t ;


 int VAR_0 ;
 void* FUNC_0 (unsigned int,int) ;
 void* FUNC_1 (unsigned int) ;

__attribute__((used)) static inline void *FUNC_2(unsigned int VAR_1,
     gfp_t VAR_2)
{
 void *VAR_3 = FUNC_0(VAR_1, VAR_2 | VAR_0);

 if (!VAR_3)
  VAR_3 = FUNC_1(VAR_1);

 return VAR_3;
}
