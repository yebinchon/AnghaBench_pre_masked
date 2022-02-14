
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ wchar_t ;
typedef scalar_t__ u16 ;
struct super_block {int dummy; } ;
struct qstr {char* name; int len; } ;
struct dentry {struct super_block* d_sb; } ;
struct TYPE_2__ {int flags; } ;


 TYPE_1__* FUNC_0 (struct super_block*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct super_block*,char const*,int,scalar_t__*) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__* FUNC_3 (scalar_t__,int*,scalar_t__*) ;
 int FUNC_4 (int ,int *) ;

int FUNC_5(const struct dentry *VAR_2,
  unsigned int VAR_3, const char *VAR_4, const struct qstr *VAR_5)
{
 struct super_block *VAR_6 = VAR_2->d_sb;
 int VAR_7, VAR_8, VAR_9;
 int VAR_10, VAR_11, VAR_12, VAR_13;
 const u16 *VAR_14, *VAR_15;
 const char *VAR_16, *VAR_17;
 u16 VAR_18, VAR_19;
 wchar_t VAR_20;
 u16 VAR_21[3], VAR_22[3];

 VAR_7 = FUNC_4(VAR_0, &FUNC_0(VAR_6)->flags);
 VAR_8 = !FUNC_4(VAR_1, &FUNC_0(VAR_6)->flags);
 VAR_16 = VAR_4;
 VAR_12 = VAR_3;
 VAR_17 = VAR_5->name;
 VAR_13 = VAR_5->len;
 VAR_10 = VAR_11 = 0;
 VAR_14 = VAR_15 = ((void*)0);

 while (VAR_12 > 0 && VAR_13 > 0) {
  if (!VAR_10) {
   VAR_9 = FUNC_1(VAR_6, VAR_16, VAR_12, &VAR_20);
   VAR_16 += VAR_9;
   VAR_12 -= VAR_9;

   if (VAR_8)
    VAR_14 = FUNC_3(VAR_20, &VAR_10,
         VAR_21);
   if (!VAR_8 || !VAR_14) {
    VAR_18 = VAR_20;
    VAR_14 = &VAR_18;
    VAR_10 = 1;
   }
  }

  if (!VAR_11) {
   VAR_9 = FUNC_1(VAR_6, VAR_17, VAR_13, &VAR_20);
   VAR_17 += VAR_9;
   VAR_13 -= VAR_9;

   if (VAR_8)
    VAR_15 = FUNC_3(VAR_20, &VAR_11,
         VAR_22);
   if (!VAR_8 || !VAR_15) {
    VAR_19 = VAR_20;
    VAR_15 = &VAR_19;
    VAR_11 = 1;
   }
  }

  VAR_18 = *VAR_14;
  VAR_19 = *VAR_15;
  if (VAR_7) {
   VAR_18 = FUNC_2(VAR_18);
   if (!VAR_18) {
    VAR_14++;
    VAR_10--;
    continue;
   }
   VAR_19 = FUNC_2(VAR_19);
   if (!VAR_19) {
    VAR_15++;
    VAR_11--;
    continue;
   }
  }
  if (VAR_18 < VAR_19)
   return -1;
  else if (VAR_18 > VAR_19)
   return 1;

  VAR_14++;
  VAR_10--;
  VAR_15++;
  VAR_11--;
 }

 if (VAR_12 < VAR_13)
  return -1;
 if (VAR_12 > VAR_13)
  return 1;
 return 0;
}
