
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u16 ;
struct uni_name_t {scalar_t__* name; } ;
struct super_block {int dummy; } ;
struct nls_table {int dummy; } ;
struct dos_name_t {int* name; int name_case; } ;
struct TYPE_2__ {struct nls_table* nls_disk; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct super_block*) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct nls_table*,scalar_t__*,int*,int *) ;

void FUNC_2(struct super_block *VAR_2,
       struct uni_name_t *VAR_3,
       struct dos_name_t *VAR_4)
{
 int VAR_5 = 0, VAR_6, VAR_7 = 0;
 u8 VAR_8[VAR_0 + 2];
 u8 *VAR_9 = VAR_4->name;
 u16 *VAR_10 = VAR_3->name;
 struct nls_table *VAR_11 = FUNC_0(VAR_2)->nls_disk;

 if (*VAR_9 == 0x05) {
  *VAR_8 = 0xE5;
  VAR_5++;
  VAR_7++;
 }

 for (; VAR_5 < 8; VAR_5++, VAR_7++) {
  if (*(VAR_9 + VAR_5) == ' ')
   break;

  if ((*(VAR_9 + VAR_5) >= 'A') && (*(VAR_9 + VAR_5) <= 'Z') &&
      (VAR_4->name_case & 0x08))
   *(VAR_8 + VAR_7) = *(VAR_9 + VAR_5) + ('a' - 'A');
  else
   *(VAR_8 + VAR_7) = *(VAR_9 + VAR_5);
 }
 if (*(VAR_9 + 8) != ' ') {
  *(VAR_8 + VAR_7) = '.';
  VAR_7++;
 }

 for (VAR_5 = 8; VAR_5 < VAR_0; VAR_5++, VAR_7++) {
  if (*(VAR_9 + VAR_5) == ' ')
   break;

  if ((*(VAR_9 + VAR_5) >= 'A') && (*(VAR_9 + VAR_5) <= 'Z') &&
      (VAR_4->name_case & 0x10))
   *(VAR_8 + VAR_7) = *(VAR_9 + VAR_5) + ('a' - 'A');
  else
   *(VAR_8 + VAR_7) = *(VAR_9 + VAR_5);
 }
 *(VAR_8 + VAR_7) = '\0';

 VAR_5 = 0;
 VAR_6 = 0;
 while (VAR_6 < (VAR_1 - 1)) {
  if (*(VAR_8 + VAR_5) == '\0')
   break;

  VAR_5 += FUNC_1(VAR_11, VAR_10, (VAR_8 + VAR_5), ((void*)0));

  VAR_10++;
  VAR_6++;
 }

 *VAR_10 = (u16)'\0';
}
