
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (void*,int,int) ;
 void* FUNC_1 (int*,void*) ;

__attribute__((used)) static inline int FUNC_2(void *VAR_0, int VAR_1, int VAR_2)
{
 int VAR_3 = 0, VAR_4, VAR_5;
 VAR_0 = FUNC_1(&VAR_3, VAR_0);
 VAR_5 = VAR_1 + VAR_3;
 VAR_2 += VAR_3;

 VAR_4 = FUNC_0(VAR_0, VAR_5, VAR_2) - VAR_3;
 if (VAR_4 > VAR_1)
  return VAR_1;
 return VAR_4;
}
