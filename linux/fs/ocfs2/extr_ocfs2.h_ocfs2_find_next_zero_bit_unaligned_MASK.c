
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 void* FUNC_0 (int*,void*) ;
 int FUNC_1 (void*,int,int) ;

__attribute__((used)) static inline int FUNC_2(void *VAR_0, int VAR_1,
       int VAR_2)
{
 int VAR_3 = 0, VAR_4, VAR_5;
 VAR_0 = FUNC_0(&VAR_3, VAR_0);
 VAR_5 = VAR_1 + VAR_3;
 VAR_2 += VAR_3;

 VAR_4 = FUNC_1(VAR_0, VAR_5, VAR_2) - VAR_3;
 if (VAR_4 > VAR_1)
  return VAR_1;
 return VAR_4;
}
