
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int FUNC_0 (int ,int ,unsigned int) ;
 int * VAR_2 ;

__attribute__((used)) static unsigned int FUNC_1(u64 VAR_3, unsigned int *VAR_4,
         unsigned int VAR_5)
{
 unsigned int VAR_6, VAR_7;

 for (VAR_6 = VAR_0;; VAR_6++) {
  VAR_7 = FUNC_0(VAR_3, VAR_2[VAR_6], VAR_5);
  if (VAR_7 <= 65536 || VAR_6 == VAR_1)
   break;
 }
 *VAR_4 = VAR_7;
 return VAR_6;
}
