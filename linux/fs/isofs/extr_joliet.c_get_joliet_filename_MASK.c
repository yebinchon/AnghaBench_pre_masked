
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int wchar_t ;
struct nls_table {int dummy; } ;
struct iso_directory_record {int* name_len; scalar_t__ name; } ;
struct inode {int i_sb; } ;
typedef int __be16 ;
struct TYPE_2__ {unsigned char s_utf8; struct nls_table* s_nls_iocharset; } ;


 TYPE_1__* FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned char FUNC_1 (unsigned char*,int *,int,struct nls_table*) ;
 unsigned char FUNC_2 (int const*,int,int ,unsigned char*,int ) ;

int
FUNC_3(struct iso_directory_record * VAR_2, unsigned char *VAR_3, struct inode * VAR_4)
{
 unsigned char VAR_5;
 struct nls_table *VAR_6;
 unsigned char VAR_7 = 0;

 VAR_5 = FUNC_0(VAR_4->i_sb)->s_utf8;
 VAR_6 = FUNC_0(VAR_4->i_sb)->s_nls_iocharset;

 if (VAR_5) {
  VAR_7 = FUNC_2((const wchar_t *) VAR_2->name,
    VAR_2->name_len[0] >> 1, VAR_1,
    VAR_3, VAR_0);
 } else {
  VAR_7 = FUNC_1(VAR_3, (__be16 *) VAR_2->name,
    VAR_2->name_len[0] >> 1, VAR_6);
 }
 if ((VAR_7 > 2) && (VAR_3[VAR_7-2] == ';') && (VAR_3[VAR_7-1] == '1'))
  VAR_7 -= 2;





 while (VAR_7 >= 2 && (VAR_3[VAR_7-1] == '.'))
  VAR_7--;

 return VAR_7;
}
