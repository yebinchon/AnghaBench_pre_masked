
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long FUNC_0 (char const*,char**,unsigned int) ;

__attribute__((used)) static int FUNC_1(const char *VAR_0, char **VAR_1, unsigned int VAR_2)
{
 unsigned long VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_2);
 switch (**VAR_1) {
 case 'G' :
  VAR_3 *= 1024;

 case 'M':
  VAR_3 *= 1024;

 case 'K':
 case 'k':
  VAR_3 *= 1024;

  if ((*VAR_1)[1] == 'i') {
   if ((*VAR_1)[2] == 'B')
    (*VAR_1) += 3;
   else
    (*VAR_1) += 2;
  }
 }
 return VAR_3;
}
