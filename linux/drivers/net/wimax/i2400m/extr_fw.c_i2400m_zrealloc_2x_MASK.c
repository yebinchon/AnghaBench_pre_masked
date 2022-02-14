
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int gfp_t ;


 int VAR_0 ;
 void* FUNC_0 (void*,size_t,int ) ;
 int FUNC_1 (void*,int ,size_t) ;

__attribute__((used)) static
int FUNC_2(void **VAR_1, size_t *VAR_2, size_t VAR_3,
         gfp_t VAR_4)
{
 size_t VAR_5 = *VAR_2,
  VAR_6 = VAR_5 ? 2 * VAR_5 : 2,
  VAR_7 = VAR_3 * VAR_5,
  VAR_8 = VAR_3 * VAR_6;
 void *VAR_9 = FUNC_0(*VAR_1, VAR_8, VAR_4);
 if (VAR_9) {


  if (VAR_7 == 0)
   FUNC_1(VAR_9, 0, VAR_8);
  else
   FUNC_1(VAR_9 + VAR_7, 0, VAR_7);
  *VAR_2 = VAR_6;
  *VAR_1 = VAR_9;
  return 0;
 } else
  return -VAR_0;
}
