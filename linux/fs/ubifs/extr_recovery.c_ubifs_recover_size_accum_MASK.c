
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union ubifs_key {int dummy; } ubifs_key ;
struct ubifs_info {int dummy; } ;
struct size_entry {int exists; void* d_size; void* i_size; } ;
typedef void* loff_t ;
typedef int ino_t ;





 int FUNC_0 (struct ubifs_info*,int ,void*,void*,int) ;
 struct size_entry* FUNC_1 (struct ubifs_info*,int ) ;
 int FUNC_2 (struct ubifs_info*,union ubifs_key*) ;
 int FUNC_3 (struct ubifs_info*,union ubifs_key*) ;
 int FUNC_4 (struct ubifs_info*,int ) ;

int FUNC_5(struct ubifs_info *VAR_0, union ubifs_key *VAR_1,
        int VAR_2, loff_t VAR_3)
{
 ino_t VAR_4 = FUNC_2(VAR_0, VAR_1);
 struct size_entry *VAR_5;
 int VAR_6;

 switch (FUNC_3(VAR_0, VAR_1)) {
 case 129:
  if (VAR_2)
   FUNC_4(VAR_0, VAR_4);
  else {
   VAR_5 = FUNC_1(VAR_0, VAR_4);
   if (VAR_5) {
    VAR_5->i_size = VAR_3;
    VAR_5->exists = 1;
   } else {
    VAR_6 = FUNC_0(VAR_0, VAR_4, VAR_3, 0, 1);
    if (VAR_6)
     return VAR_6;
   }
  }
  break;
 case 130:
  VAR_5 = FUNC_1(VAR_0, VAR_4);
  if (VAR_5) {
   if (VAR_3 > VAR_5->d_size)
    VAR_5->d_size = VAR_3;
  } else {
   VAR_6 = FUNC_0(VAR_0, VAR_4, 0, VAR_3, 0);
   if (VAR_6)
    return VAR_6;
  }
  break;
 case 128:
  VAR_5 = FUNC_1(VAR_0, VAR_4);
  if (VAR_5)
   VAR_5->d_size = VAR_3;
  break;
 }
 return 0;
}
