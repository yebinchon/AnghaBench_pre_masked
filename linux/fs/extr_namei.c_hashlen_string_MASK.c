
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;


 int FUNC_0 (unsigned long) ;
 int FUNC_1 (int ,unsigned long) ;
 unsigned long FUNC_2 (void const*) ;
 unsigned long FUNC_3 (unsigned long,unsigned long) ;

u64 FUNC_4(const void *VAR_0, const char *VAR_1)
{
 unsigned long VAR_2 = FUNC_2(VAR_0);
 unsigned long VAR_3 = 0, VAR_4;

 VAR_4 = (unsigned char)*VAR_1;
 while (VAR_4) {
  VAR_3++;
  VAR_2 = FUNC_3(VAR_4, VAR_2);
  VAR_4 = (unsigned char)VAR_1[VAR_3];
 }
 return FUNC_1(FUNC_0(VAR_2), VAR_3);
}
