
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int wchar_t ;
struct super_block {int dummy; } ;
struct nls_table {int (* uni2char ) (int,unsigned char*,int) ;} ;
struct TYPE_3__ {int unicode_xlate; } ;
struct TYPE_4__ {TYPE_1__ options; } ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (struct super_block*) ;
 int VAR_1 ;
 int FUNC_1 (struct super_block*,int ,char*) ;
 unsigned char* FUNC_2 (unsigned char*,int) ;
 int FUNC_3 (int,unsigned char*,int) ;
 scalar_t__ FUNC_4 (int const) ;

__attribute__((used)) static int FUNC_5(struct super_block *VAR_2, unsigned char *VAR_3,
         const wchar_t *VAR_4, int VAR_5, struct nls_table *VAR_6)
{
 int VAR_7 = FUNC_0(VAR_2)->options.unicode_xlate;
 const wchar_t *VAR_8;
 wchar_t VAR_9;
 unsigned char *VAR_10;
 int VAR_11;

 VAR_8 = VAR_4;
 VAR_10 = VAR_3;

 while (*VAR_8 && ((VAR_5 - VAR_1) > 0)) {
  VAR_9 = *VAR_8++;
  VAR_11 = VAR_6->uni2char(VAR_9, VAR_10, VAR_1);
  if (VAR_11 > 0) {
   VAR_10 += VAR_11;
   VAR_5 -= VAR_11;
  } else {
   if (VAR_7 == 1) {
    *VAR_10++ = ':';
    VAR_10 = FUNC_2(VAR_10, VAR_9 >> 8);
    VAR_10 = FUNC_2(VAR_10, VAR_9);
    VAR_5 -= 5;
   } else {
    *VAR_10++ = '?';
    VAR_5--;
   }
  }
 }

 if (FUNC_4(*VAR_8)) {
  FUNC_1(VAR_2, VAR_0,
   "filename was truncated while converting.");
 }

 *VAR_10 = 0;
 return VAR_10 - VAR_3;
}
