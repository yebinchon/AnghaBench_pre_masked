
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef char wchar_t ;
struct super_block {int dummy; } ;
struct qstr {char* name; int len; } ;
struct nls_table {int (* char2uni ) (char const*,int,char*) ;int (* uni2char ) (char,char*,int) ;} ;
struct hfs_name {char* name; int len; } ;
struct TYPE_2__ {struct nls_table* nls_io; struct nls_table* nls_disk; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (struct super_block*) ;
 int FUNC_1 (char const*,int,char*) ;
 int FUNC_2 (char,char*,int) ;

void FUNC_3(struct super_block *VAR_2, struct hfs_name *VAR_3, const struct qstr *VAR_4)
{
 struct nls_table *VAR_5 = FUNC_0(VAR_2)->nls_disk;
 struct nls_table *VAR_6 = FUNC_0(VAR_2)->nls_io;
 const char *VAR_7;
 char *VAR_8;
 int VAR_9, VAR_10, VAR_11;

 VAR_7 = VAR_4->name;
 VAR_9 = VAR_4->len;
 VAR_8 = VAR_3->name;
 VAR_10 = VAR_1;
 if (VAR_6) {
  wchar_t VAR_12;

  while (VAR_9 > 0) {
   VAR_11 = VAR_6->char2uni(VAR_7, VAR_9, &VAR_12);
   if (VAR_11 < 0) {
    VAR_12 = '?';
    VAR_11 = 1;
   }
   VAR_7 += VAR_11;
   VAR_9 -= VAR_11;
   if (VAR_12 == ':')
    VAR_12 = '/';
   if (VAR_5) {
    VAR_11 = VAR_5->uni2char(VAR_12, VAR_8, VAR_10);
    if (VAR_11 < 0) {
     if (VAR_11 == -VAR_0)
      goto out;
     *VAR_8 = '?';
     VAR_11 = 1;
    }
    VAR_8 += VAR_11;
    VAR_10 -= VAR_11;
   } else {
    *VAR_8++ = VAR_12 > 0xff ? '?' : VAR_12;
    VAR_10--;
   }
  }
 } else {
  char VAR_13;

  if (VAR_10 > VAR_9)
   VAR_10 = VAR_9;
  while (--VAR_10 >= 0)
   *VAR_8++ = (VAR_13 = *VAR_7++) == ':' ? '/' : VAR_13;
 }
out:
 VAR_3->len = VAR_8 - (char *)VAR_3->name;
 VAR_10 = VAR_1 - VAR_3->len;
 while (--VAR_10 >= 0)
  *VAR_8++ = 0;
}
