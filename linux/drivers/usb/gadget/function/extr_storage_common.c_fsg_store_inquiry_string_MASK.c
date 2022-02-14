
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsg_lun {char* inquiry_string; } ;
typedef size_t ssize_t ;


 size_t FUNC_0 (size_t,int) ;
 int FUNC_1 (char*,int,char*,char const*) ;

ssize_t FUNC_2(struct fsg_lun *VAR_0, const char *VAR_1,
     size_t VAR_2)
{
 const size_t VAR_3 = FUNC_0(VAR_2, sizeof(VAR_0->inquiry_string));

 if (VAR_3 == 0 || VAR_1[0] == '\n') {
  VAR_0->inquiry_string[0] = 0;
 } else {
  FUNC_1(VAR_0->inquiry_string,
    sizeof(VAR_0->inquiry_string), "%-28s", VAR_1);
  if (VAR_0->inquiry_string[VAR_3-1] == '\n')
   VAR_0->inquiry_string[VAR_3-1] = ' ';
 }

 return VAR_2;
}
