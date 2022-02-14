
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,int ) ;

__attribute__((used)) static size_t
FUNC_1(const char *VAR_2, size_t VAR_3, char VAR_4[])
{
 unsigned int VAR_5, VAR_6;


 if (VAR_2[VAR_3-1] == '\n')
  VAR_3--;

 if ((VAR_3 < 16) || (VAR_3 > 18) || ((VAR_3 == 17) && (*VAR_2++ != 'x')) ||
     ((VAR_3 == 18) && ((*VAR_2++ != '0') || (*VAR_2++ != 'x'))))
  return -VAR_0;

 FUNC_0(VAR_4, 0, VAR_1);


 for (VAR_5 = 0, VAR_6 = 0; VAR_5 < 16; VAR_5++) {
  if ((*VAR_2 >= 'a') && (*VAR_2 <= 'f'))
   VAR_6 = ((VAR_6 << 4) | ((*VAR_2++ - 'a') + 10));
  else if ((*VAR_2 >= 'A') && (*VAR_2 <= 'F'))
   VAR_6 = ((VAR_6 << 4) | ((*VAR_2++ - 'A') + 10));
  else if ((*VAR_2 >= '0') && (*VAR_2 <= '9'))
   VAR_6 = ((VAR_6 << 4) | (*VAR_2++ - '0'));
  else
   return -VAR_0;
  if (VAR_5 % 2) {
   VAR_4[VAR_5/2] = VAR_6 & 0xff;
   VAR_6 = 0;
  }
 }
 return 0;
}
