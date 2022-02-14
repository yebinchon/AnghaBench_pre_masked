
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int wchar_t ;
struct shortname_info {scalar_t__ lower; scalar_t__ upper; scalar_t__ valid; } ;
struct nls_table {int dummy; } ;
struct inode {int i_sb; } ;
struct fat_mount_options {int shortname; scalar_t__ numtail; } ;
typedef int charbuf ;
typedef int buf ;
struct TYPE_2__ {struct fat_mount_options options; } ;


 int FUNC_0 () ;
 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct shortname_info*) ;
 int VAR_5 ;
 TYPE_1__* FUNC_2 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (unsigned char*,unsigned char*,int) ;
 int FUNC_4 (unsigned char*,char,int ) ;
 int FUNC_5 (unsigned char*,int,char*,int) ;
 int FUNC_6 (struct nls_table*,unsigned char*,int,int*,struct shortname_info*) ;
 scalar_t__ FUNC_7 (struct inode*,unsigned char*) ;
 int FUNC_8 (int) ;

__attribute__((used)) static int FUNC_9(struct inode *VAR_10, struct nls_table *VAR_11,
     wchar_t *VAR_12, int VAR_13,
     unsigned char *VAR_14, unsigned char *VAR_15)
{
 struct fat_mount_options *VAR_16 = &FUNC_2(VAR_10->i_sb)->options;
 wchar_t *VAR_17, *VAR_18, *VAR_19, *VAR_20;
 unsigned char VAR_21[9], VAR_22[4], VAR_23[5], *VAR_24;
 unsigned char VAR_25[VAR_6];
 int VAR_26, VAR_27;
 int VAR_28 = 0, VAR_29, VAR_30, VAR_31, VAR_32, VAR_33;
 int VAR_34;
 struct shortname_info VAR_35, VAR_36;

 VAR_34 = 1;
 FUNC_1(&VAR_35);
 FUNC_1(&VAR_36);


 VAR_18 = VAR_19 = &VAR_12[VAR_13];
 while (--VAR_18 >= VAR_12) {
  if (*VAR_18 == 0x002E) {
   if (VAR_18 == VAR_19 - 1) {
    VAR_28 = VAR_13;
    VAR_18 = ((void*)0);
   }
   break;
  }
 }

 if (VAR_18 == VAR_12 - 1) {
  VAR_28 = VAR_13;
  VAR_18 = ((void*)0);
 } else if (VAR_18) {





  VAR_20 = &VAR_12[0];
  while (VAR_20 < VAR_18) {
   if (!FUNC_8(*VAR_20))
    break;
   VAR_20++;
  }
  if (VAR_20 != VAR_18) {
   VAR_28 = VAR_18 - VAR_12;
   VAR_18++;
  } else {
   VAR_28 = VAR_13;
   VAR_18 = ((void*)0);
  }
 }

 VAR_32 = 6;
 VAR_33 = 2;
 for (VAR_30 = VAR_31 = 0, VAR_24 = VAR_21, VAR_17 = VAR_12; VAR_31 < VAR_28; VAR_31++, VAR_17++) {
  VAR_26 = FUNC_6(VAR_11, VAR_25, sizeof(VAR_25),
     VAR_17, &VAR_35);
  if (VAR_26 == 0)
   continue;

  if (VAR_30 < 2 && (VAR_30 + VAR_26) > 2)
   VAR_33 = VAR_30;
  if (VAR_30 < 6 && (VAR_30 + VAR_26) > 6)
   VAR_32 = VAR_30;
  for (VAR_27 = 0; VAR_27 < VAR_26; VAR_27++) {
   *VAR_24++ = VAR_25[VAR_27];
   VAR_30++;
   if (VAR_30 >= 8)
    break;
  }
  if (VAR_30 >= 8) {
   if ((VAR_27 < VAR_26 - 1) || (VAR_17 + 1) - VAR_12 < VAR_28)
    VAR_34 = 0;
   break;
  }
 }
 if (VAR_30 == 0) {
  return -VAR_4;
 }

 VAR_29 = 0;
 if (VAR_18) {
  for (VAR_24 = VAR_22, VAR_17 = VAR_18; VAR_29 < 3 && VAR_17 < VAR_19; VAR_17++) {
   VAR_26 = FUNC_6(VAR_11, VAR_25, sizeof(VAR_25),
      VAR_17, &VAR_36);
   if (VAR_26 == 0)
    continue;

   if ((VAR_29 + VAR_26) > 3) {
    VAR_34 = 0;
    break;
   }
   for (VAR_27 = 0; VAR_27 < VAR_26; VAR_27++) {
    *VAR_24++ = VAR_25[VAR_27];
    VAR_29++;
   }
   if (VAR_29 >= 3) {
    if (VAR_17 + 1 != VAR_19)
     VAR_34 = 0;
    break;
   }
  }
 }
 VAR_22[VAR_29] = '\0';
 VAR_21[VAR_30] = '\0';


 if (VAR_21[0] == VAR_2)
  VAR_21[0] = 0x05;






 FUNC_4(VAR_14, ' ', VAR_5);
 FUNC_3(VAR_14, VAR_21, VAR_30);
 FUNC_3(VAR_14 + 8, VAR_22, VAR_29);
 *VAR_15 = 0;
 if (VAR_34 && VAR_35.valid && VAR_36.valid) {
  if (FUNC_7(VAR_10, VAR_14) == 0)
   return -VAR_3;

  if (VAR_16->shortname & VAR_7) {
   return (VAR_35.upper && VAR_36.upper);
  } else if (VAR_16->shortname & VAR_8) {
   if ((VAR_35.upper || VAR_35.lower) &&
       (VAR_36.upper || VAR_36.lower)) {
    if (!VAR_35.upper && VAR_35.lower)
     *VAR_15 |= VAR_0;
    if (!VAR_36.upper && VAR_36.lower)
     *VAR_15 |= VAR_1;
    return 1;
   }
   return 0;
  } else {
   FUNC_0();
  }
 }

 if (VAR_16->numtail == 0)
  if (FUNC_7(VAR_10, VAR_14) < 0)
   return 0;
 if (VAR_30 > 6) {
  VAR_30 = VAR_32;
  VAR_14[7] = ' ';
 }
 VAR_14[VAR_30] = '~';
 for (VAR_31 = 1; VAR_31 < 10; VAR_31++) {
  VAR_14[VAR_30 + 1] = VAR_31 + '0';
  if (FUNC_7(VAR_10, VAR_14) < 0)
   return 0;
 }

 VAR_31 = VAR_9;
 VAR_28 = (VAR_9 >> 16) & 0x7;
 if (VAR_30 > 2) {
  VAR_30 = VAR_33;
  VAR_14[7] = ' ';
 }
 VAR_14[VAR_30 + 4] = '~';
 VAR_14[VAR_30 + 5] = '1' + VAR_28;
 while (1) {
  FUNC_5(VAR_23, sizeof(VAR_23), "%04X", VAR_31 & 0xffff);
  FUNC_3(&VAR_14[VAR_30], VAR_23, 4);
  if (FUNC_7(VAR_10, VAR_14) < 0)
   break;
  VAR_31 -= 11;
 }
 return 0;
}
