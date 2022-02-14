
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t FUNC_0 (size_t,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int,scalar_t__) ;
 scalar_t__ FUNC_2 (size_t) ;
 void* FUNC_3 (size_t) ;

__attribute__((used)) static inline void *FUNC_4(size_t VAR_4)
{
 void *VAR_5 = ((void*)0);
 size_t VAR_6 = FUNC_0(VAR_4, VAR_2);

 if (VAR_6 && FUNC_2(VAR_6) < VAR_1)
  VAR_5 = (void *)FUNC_1(VAR_0 | VAR_3,
            FUNC_2(VAR_6));
 return VAR_5 ? VAR_5 : FUNC_3(VAR_6);
}
