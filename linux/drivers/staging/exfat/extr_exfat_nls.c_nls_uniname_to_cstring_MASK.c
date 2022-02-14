
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
struct TYPE_2__ {struct nls_table* nls_io; } ;


 TYPE_1__* FUNC_0 (struct super_block*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct nls_table*,char*,scalar_t__,int *) ;
 int FUNC_2 (scalar_t__*,int,int ,char*,int) ;

void FUNC_3(struct super_block *VAR_3, u8 *VAR_4,
       struct uni_name_t *VAR_5)
{
 int VAR_6, VAR_7, VAR_8;
 u8 VAR_9[VAR_0];
 u16 *VAR_10 = VAR_5->name;
 struct nls_table *VAR_11 = FUNC_0(VAR_3)->nls_io;

 if (!VAR_11) {
  VAR_8 = FUNC_2(VAR_10, VAR_1,
          VAR_2, VAR_4,
          VAR_1);
  VAR_4[VAR_8] = 0;
  return;
 }

 VAR_6 = 0;
 while (VAR_6 < (VAR_1 - 1)) {
  if (*VAR_10 == (u16)'\0')
   break;

  VAR_8 = FUNC_1(VAR_11, VAR_9, *VAR_10, ((void*)0));

  if (VAR_8 > 1) {
   for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++)
    *VAR_4++ = (char)*(VAR_9 + VAR_7);
  } else {
   *VAR_4++ = (char)*VAR_9;
  }

  VAR_10++;
  VAR_6++;
 }

 *VAR_4 = '\0';
}
