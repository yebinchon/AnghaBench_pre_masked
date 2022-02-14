
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef char u8 ;
typedef scalar_t__ u16 ;
struct uni_name_t {scalar_t__* name; } ;
struct super_block {int dummy; } ;
struct nls_table {int dummy; } ;
struct dos_name_t {char* name; int name_case; } ;
struct TYPE_2__ {struct nls_table* nls_disk; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct super_block*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct nls_table*,char*,scalar_t__,int*) ;
 int FUNC_2 (struct super_block*,scalar_t__*,scalar_t__*) ;
 scalar_t__ FUNC_3 (int ,scalar_t__) ;

void FUNC_4(struct super_block *VAR_5,
       struct dos_name_t *VAR_6,
       struct uni_name_t *VAR_7, bool *VAR_8)
{
 int VAR_9, VAR_10, VAR_11;
 bool VAR_12 = 0;
 u8 VAR_13[VAR_1];
 u8 VAR_14 = 0, VAR_15 = 0;
 u8 *VAR_16 = VAR_6->name;
 u16 *VAR_17 = VAR_7->name;
 u16 *VAR_18, *VAR_19;
 struct nls_table *VAR_20 = FUNC_0(VAR_5)->nls_disk;

 for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++)
  *(VAR_16 + VAR_9) = ' ';

 if (!FUNC_2(VAR_5, VAR_17, (u16 *)VAR_2)) {
  *(VAR_16) = '.';
  VAR_6->name_case = 0x0;
  if (VAR_8)
   *VAR_8 = 0;
  return;
 }

 if (!FUNC_2(VAR_5, VAR_17, (u16 *)VAR_3)) {
  *(VAR_16) = '.';
  *(VAR_16 + 1) = '.';
  VAR_6->name_case = 0x0;
  if (VAR_8)
   *VAR_8 = 0;
  return;
 }


 VAR_19 = ((void*)0);
 for (VAR_18 = VAR_17; *VAR_18; VAR_18++) {
  if (*VAR_18 == (u16)'.')
   VAR_19 = VAR_18;
 }

 VAR_9 = 0;
 while (VAR_9 < VAR_0) {
  if (VAR_9 == 8) {
   if (!VAR_19)
    break;

   if (VAR_17 <= VAR_19) {
    if (VAR_17 < VAR_19)
     VAR_12 = 1;
    VAR_17 = VAR_19 + 1;
   }
  }

  if (*VAR_17 == (u16)'\0') {
   break;
  } else if (*VAR_17 == (u16)' ') {
   VAR_12 = 1;
  } else if (*VAR_17 == (u16)'.') {
   if (VAR_17 < VAR_19)
    VAR_12 = 1;
   else
    VAR_9 = 8;
  } else if (FUNC_3(VAR_4, *VAR_17)) {
   VAR_12 = 1;
   *(VAR_16 + VAR_9) = '_';
   VAR_9++;
  } else {
   VAR_11 = FUNC_1(VAR_20, VAR_13, *VAR_17, &VAR_12);

   if (VAR_11 > 1) {
    if ((VAR_9 >= 8) && ((VAR_9 + VAR_11) > VAR_0))
     break;

    if ((VAR_9 < 8) && ((VAR_9 + VAR_11) > 8)) {
     VAR_9 = 8;
     continue;
    }

    VAR_14 = 0xFF;

    for (VAR_10 = 0; VAR_10 < VAR_11; VAR_10++, VAR_9++)
     *(VAR_16 + VAR_9) = *(VAR_13 + VAR_10);
   } else {
    if ((*VAR_13 >= 'a') && (*VAR_13 <= 'z')) {
     *(VAR_16 + VAR_9) = *VAR_13 - ('a' - 'A');

     if (VAR_9 < 8)
      VAR_14 |= 0x08;
     else
      VAR_14 |= 0x10;
    } else if ((*VAR_13 >= 'A') && (*VAR_13 <= 'Z')) {
     *(VAR_16 + VAR_9) = *VAR_13;

     if (VAR_9 < 8)
      VAR_15 |= 0x08;
     else
      VAR_15 |= 0x10;
    } else {
     *(VAR_16 + VAR_9) = *VAR_13;
    }
    VAR_9++;
   }
  }

  VAR_17++;
 }

 if (*VAR_16 == 0xE5)
  *VAR_16 = 0x05;

 if (*VAR_17 != 0x0)
  VAR_12 = 1;

 if (VAR_15 & VAR_14)
  VAR_6->name_case = 0xFF;
 else
  VAR_6->name_case = VAR_14;

 if (VAR_8)
  *VAR_8 = VAR_12;
}
