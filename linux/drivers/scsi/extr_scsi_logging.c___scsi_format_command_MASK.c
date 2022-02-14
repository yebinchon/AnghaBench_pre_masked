
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char*,size_t,char*,unsigned char const) ;
 int FUNC_1 (unsigned char const*) ;
 size_t FUNC_2 (char*,size_t,unsigned char const*) ;

size_t FUNC_3(char *VAR_0, size_t VAR_1,
        const unsigned char *VAR_2, size_t VAR_3)
{
 int VAR_4, VAR_5;
 size_t VAR_6;

 VAR_6 = FUNC_2(VAR_0, VAR_1, VAR_2);
 if (VAR_6 >= VAR_1)
  return VAR_6;
 VAR_4 = FUNC_1(VAR_2);
 if (VAR_3 < VAR_4)
  VAR_4 = VAR_3;

 for (VAR_5 = 0; VAR_5 < VAR_4; ++VAR_5) {
  if (VAR_6 > VAR_1 - 3)
   break;
  VAR_6 += FUNC_0(VAR_0 + VAR_6, VAR_1 - VAR_6,
     " %02x", VAR_2[VAR_5]);
 }
 return VAR_6;
}
