
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef char wchar_t ;
struct super_block {int dummy; } ;
struct nls_table {int (* char2uni ) (char const*,int,char*) ;int (* uni2char ) (char,char*,int) ;} ;
struct hfs_name {char* name; int len; } ;
struct TYPE_2__ {struct nls_table* nls_io; struct nls_table* nls_disk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (struct super_block*) ;
 int FUNC_1 (char const*,int,char*) ;
 int FUNC_2 (char,char*,int) ;

int FUNC_3(struct super_block *VAR_3, char *VAR_4, const struct hfs_name *VAR_5)
{
 struct nls_table *VAR_6 = FUNC_0(VAR_3)->nls_disk;
 struct nls_table *VAR_7 = FUNC_0(VAR_3)->nls_io;
 const char *VAR_8;
 char *VAR_9;
 int VAR_10, VAR_11, VAR_12;

 VAR_8 = VAR_5->name;
 VAR_10 = VAR_5->len;
 if (VAR_10 > VAR_2)
  VAR_10 = VAR_2;
 VAR_9 = VAR_4;
 VAR_11 = VAR_1;
 if (VAR_7) {
  wchar_t VAR_13;

  while (VAR_10 > 0) {
   if (VAR_6) {
    VAR_12 = VAR_6->char2uni(VAR_8, VAR_10, &VAR_13);
    if (VAR_12 <= 0) {
     VAR_13 = '?';
     VAR_12 = 1;
    }
    VAR_8 += VAR_12;
    VAR_10 -= VAR_12;
   } else {
    VAR_13 = *VAR_8++;
    VAR_10--;
   }
   if (VAR_13 == '/')
    VAR_13 = ':';
   VAR_12 = VAR_7->uni2char(VAR_13, VAR_9, VAR_11);
   if (VAR_12 < 0) {
    if (VAR_12 == -VAR_0)
     goto out;
    *VAR_9 = '?';
    VAR_12 = 1;
   }
   VAR_9 += VAR_12;
   VAR_11 -= VAR_12;
  }
 } else {
  char VAR_14;

  while (--VAR_10 >= 0)
   *VAR_9++ = (VAR_14 = *VAR_8++) == '/' ? ':' : VAR_14;
 }
out:
 return VAR_9 - VAR_4;
}
