
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (void*,void*) ;
 scalar_t__ FUNC_2 (int ,void**,void**) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (void*,unsigned long,int ,int,int ) ;
 int FUNC_5 (void*) ;
 int VAR_4 ;

int FUNC_6(unsigned long *VAR_5, unsigned long VAR_6)
{
 void *VAR_7;
 void *VAR_8;
 int VAR_9, VAR_10;

 FUNC_0(VAR_4);
 if (FUNC_2(VAR_1, &VAR_7, &VAR_8))
  return VAR_3;
 VAR_10 = VAR_6 >> 62;
 FUNC_4(VAR_7, VAR_6, FUNC_3(VAR_8), VAR_10, VAR_2);
 VAR_9 = FUNC_5(VAR_7);
 if (VAR_9 == VAR_0)
  *VAR_5 = *(unsigned long *)VAR_8;
 FUNC_1(VAR_7, VAR_8);
 return VAR_9;
}
