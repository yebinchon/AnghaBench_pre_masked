
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef char u8 ;
typedef int u16 ;
struct uni_name_t {int* name; int name_len; int name_hash; } ;
struct super_block {int dummy; } ;
struct nls_table {int dummy; } ;
struct TYPE_2__ {struct nls_table* nls_io; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct super_block*) ;
 int VAR_1 ;
 int FUNC_1 (char*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (char*,int,int ,int ) ;
 scalar_t__ FUNC_3 (struct nls_table*,int*,char*,int*) ;
 int FUNC_4 (struct super_block*,int) ;
 scalar_t__ FUNC_5 (int ,int) ;
 scalar_t__ FUNC_6 (char*,char*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*,int,int ,int*,int) ;

void FUNC_9(struct super_block *VAR_4,
       struct uni_name_t *VAR_5, u8 *VAR_6,
       bool *VAR_7)
{
 int VAR_8, VAR_9;
 bool VAR_10 = 0;
 u8 *VAR_11;
 u8 VAR_12[VAR_1 * 2];
 u16 *VAR_13 = VAR_5->name;
 struct nls_table *VAR_14 = FUNC_0(VAR_4)->nls_io;


 VAR_11 = VAR_6 + FUNC_7(VAR_6);

 while (*(--VAR_11) == ' ') {
  if (VAR_11 < VAR_6)
   break;
 }
 *(++VAR_11) = '\0';

 if (FUNC_6(VAR_6, ".") && FUNC_6(VAR_6, "..")) {

  while (*(--VAR_11) == '.') {
   if (VAR_11 < VAR_6)
    break;
  }
  *(++VAR_11) = '\0';
 }

 if (*VAR_6 == '\0')
  VAR_10 = 1;

 if (!VAR_14) {
  VAR_8 = FUNC_8(VAR_6, VAR_1,
        VAR_2, VAR_13,
        VAR_1);
  for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++)
   FUNC_1(VAR_12 + VAR_9 * 2, FUNC_4(VAR_4, VAR_13[VAR_9]));
  VAR_13[VAR_8] = '\0';
 } else {
  VAR_8 = 0;
  VAR_9 = 0;
  while (VAR_9 < (VAR_1 - 1)) {
   if (*(VAR_6 + VAR_8) == '\0')
    break;

   VAR_8 += FUNC_3(VAR_14, VAR_13,
            (u8 *)(VAR_6 + VAR_8), &VAR_10);

   if ((*VAR_13 < 0x0020) ||
       FUNC_5(VAR_3, *VAR_13))
    VAR_10 = 1;

   FUNC_1(VAR_12 + VAR_9 * 2, FUNC_4(VAR_4, *VAR_13));

   VAR_13++;
   VAR_9++;
  }

  if (*(VAR_6 + VAR_8) != '\0')
   VAR_10 = 1;
  *VAR_13 = (u16)'\0';
 }

 VAR_5->name_len = VAR_9;
 VAR_5->name_hash = FUNC_2(VAR_12, VAR_9 << 1, 0,
         VAR_0);

 if (VAR_7)
  *VAR_7 = VAR_10;
}
