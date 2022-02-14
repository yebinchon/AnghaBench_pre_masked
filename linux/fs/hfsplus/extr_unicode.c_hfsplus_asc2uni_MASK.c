
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int wchar_t ;
typedef int u16 ;
struct super_block {int dummy; } ;
struct hfsplus_unistr {void* length; void** unicode; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct super_block*) ;
 int VAR_1 ;
 int FUNC_1 (struct super_block*,char const*,int,int*) ;
 void* FUNC_2 (int) ;
 int* FUNC_3 (int,int*,int*) ;
 int FUNC_4 (int ,int *) ;

int FUNC_5(struct super_block *VAR_2,
      struct hfsplus_unistr *VAR_3, int VAR_4,
      const char *VAR_5, int VAR_6)
{
 int VAR_7, VAR_8, VAR_9;
 u16 *VAR_10, VAR_11 = 0;
 wchar_t VAR_12;
 u16 VAR_13[3];

 VAR_9 = !FUNC_4(VAR_1, &FUNC_0(VAR_2)->flags);
 while (VAR_11 < VAR_4 && VAR_6 > 0) {
  VAR_7 = FUNC_1(VAR_2, VAR_5, VAR_6, &VAR_12);

  if (VAR_9)
   VAR_10 = FUNC_3(VAR_12, &VAR_8, VAR_13);
  else
   VAR_10 = ((void*)0);
  if (VAR_10) {
   if (VAR_11 + VAR_8 > VAR_4)
    break;
   do {
    VAR_3->unicode[VAR_11++] = FUNC_2(*VAR_10++);
   } while (--VAR_8 > 0);
  } else
   VAR_3->unicode[VAR_11++] = FUNC_2(VAR_12);

  VAR_5 += VAR_7;
  VAR_6 -= VAR_7;
 }
 VAR_3->length = FUNC_2(VAR_11);
 if (VAR_6 > 0)
  return -VAR_0;
 return 0;
}
