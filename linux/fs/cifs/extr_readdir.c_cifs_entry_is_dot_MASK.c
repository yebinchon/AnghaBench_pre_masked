
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cifs_dirent {char* name; int namelen; } ;
typedef scalar_t__ __le16 ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static int FUNC_0(struct cifs_dirent *VAR_1, bool VAR_2)
{
 int VAR_3 = 0;

 if (!VAR_1->name)
  return 0;

 if (VAR_2) {
  __le16 *VAR_4 = (__le16 *)VAR_1->name;
  if (VAR_1->namelen == 2) {

   if (VAR_4[0] == VAR_0)
    VAR_3 = 1;
  } else if (VAR_1->namelen == 4) {

   if (VAR_4[0] == VAR_0 &&
       VAR_4[1] == VAR_0)
    VAR_3 = 2;
  }
 } else {
  if (VAR_1->namelen == 1) {
   if (VAR_1->name[0] == '.')
    VAR_3 = 1;
  } else if (VAR_1->namelen == 2) {
   if (VAR_1->name[0] == '.' && VAR_1->name[1] == '.')
    VAR_3 = 2;
  }
 }

 return VAR_3;
}
