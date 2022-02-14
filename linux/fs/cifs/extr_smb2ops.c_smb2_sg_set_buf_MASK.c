
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {int dummy; } ;


 scalar_t__ FUNC_0 (void const*) ;
 int FUNC_1 (void const*) ;
 int FUNC_2 (struct scatterlist*,void*,unsigned int,int ) ;
 void* FUNC_3 (void const*) ;
 void* FUNC_4 (void const*) ;

__attribute__((used)) static inline void FUNC_5(struct scatterlist *VAR_0, const void *VAR_1,
       unsigned int VAR_2)
{
 void *VAR_3;



 if (FUNC_0(VAR_1))
  VAR_3 = FUNC_4(VAR_1);
 else
  VAR_3 = FUNC_3(VAR_1);
 FUNC_2(VAR_0, VAR_3, VAR_2, FUNC_1(VAR_1));
}
