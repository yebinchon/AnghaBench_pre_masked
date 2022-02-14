
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (char*,char const*) ;
 unsigned long FUNC_1 (char const*,char**,int ) ;

__attribute__((used)) static int FUNC_2(const char *VAR_2)
{
 char *VAR_3;
 unsigned long VAR_4;

 VAR_4 = FUNC_1(VAR_2, &VAR_3, 0);
 if (VAR_2 == VAR_3 || VAR_4 >= VAR_1) {
  FUNC_0("UBI error: incorrect bytes count: \"%s\"\n", VAR_2);
  return -VAR_0;
 }

 switch (*VAR_3) {
 case 'G':
  VAR_4 *= 1024;

 case 'M':
  VAR_4 *= 1024;

 case 'K':
  VAR_4 *= 1024;
  if (VAR_3[1] == 'i' && VAR_3[2] == 'B')
   VAR_3 += 2;
 case '\0':
  break;
 default:
  FUNC_0("UBI error: incorrect bytes count: \"%s\"\n", VAR_2);
  return -VAR_0;
 }

 return VAR_4;
}
