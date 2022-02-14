
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int s_flags; } ;
struct TYPE_2__ {int s_mount_opt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (struct super_block*) ;




 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,char const*,int) ;
 char* FUNC_3 (int) ;
 int FUNC_4 (char const*) ;

__attribute__((used)) static int FUNC_5(struct super_block *VAR_4,
      char *VAR_5, size_t VAR_6,
      size_t *VAR_7, int VAR_8,
      const char *VAR_9, int VAR_10)
{
 char *VAR_11 = VAR_5 + *VAR_7;
 const char *VAR_12;
 int VAR_13;
 int VAR_14;

 switch(VAR_8) {
 case 128:
  if (FUNC_0(VAR_4)->s_mount_opt & VAR_2)
   return 0;
  break;

 case 131:
 case 130:
  if (!(VAR_4->s_flags & VAR_3))
   return 0;
  break;

 case 129:
  if (!FUNC_1(VAR_0))
   return 0;
  break;
 }

 VAR_12 = FUNC_3(VAR_8);
 if (!VAR_12)
  return 0;
 VAR_13 = FUNC_4(VAR_12);
 VAR_14 = VAR_13 + VAR_10 + 1;
 *VAR_7 += VAR_14;


 if (!VAR_6)
  return 0;

 if (*VAR_7 > VAR_6)
  return -VAR_1;

 FUNC_2(VAR_11, VAR_12, VAR_13);
 FUNC_2(VAR_11 + VAR_13, VAR_9, VAR_10);
 VAR_11[VAR_13 + VAR_10] = '\0';

 return 0;
}
