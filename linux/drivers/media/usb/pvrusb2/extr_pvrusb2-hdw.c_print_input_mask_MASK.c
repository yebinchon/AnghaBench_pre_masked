
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int FUNC_0 (int *) ;
 int * VAR_0 ;
 unsigned int FUNC_1 (char*,unsigned int,char*,char*,int ) ;

__attribute__((used)) static unsigned int FUNC_2(unsigned int VAR_1,
         char *VAR_2,unsigned int VAR_3)
{
 unsigned int VAR_4,VAR_5;
 unsigned int VAR_6 = 0;
 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_0); VAR_4++) {
  if (!((1UL << VAR_4) & VAR_1)) continue;
  VAR_5 = FUNC_1(VAR_2+VAR_6,
     VAR_3-VAR_6,
     "%s%s",
     (VAR_6 ? ", " : ""),
     VAR_0[VAR_4]);
  VAR_6 += VAR_5;
 }
 return VAR_6;
}
