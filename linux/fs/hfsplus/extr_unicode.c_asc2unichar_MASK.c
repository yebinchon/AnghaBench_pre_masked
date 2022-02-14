
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef char wchar_t ;
struct super_block {int dummy; } ;
struct TYPE_4__ {TYPE_1__* nls; } ;
struct TYPE_3__ {int (* char2uni ) (char const*,int,char*) ;} ;


 TYPE_2__* FUNC_0 (struct super_block*) ;
 int FUNC_1 (char const*,int,char*) ;

__attribute__((used)) static inline int FUNC_2(struct super_block *VAR_0, const char *VAR_1, int VAR_2,
         wchar_t *VAR_3)
{
 int VAR_4 = FUNC_0(VAR_0)->nls->char2uni(VAR_1, VAR_2, VAR_3);
 if (VAR_4 <= 0) {
  *VAR_3 = '?';
  VAR_4 = 1;
 }
 switch (*VAR_3) {
 case 0x2400:
  *VAR_3 = 0;
  break;
 case ':':
  *VAR_3 = '/';
  break;
 }
 return VAR_4;
}
