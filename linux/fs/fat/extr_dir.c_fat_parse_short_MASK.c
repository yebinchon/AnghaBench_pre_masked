
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int work ;
typedef int wchar_t ;
struct super_block {int dummy; } ;
struct nls_table {int dummy; } ;
struct TYPE_2__ {int isvfat; int nocase; unsigned short shortname; } ;
struct msdos_sb_info {TYPE_1__ options; struct nls_table* nls_disk; } ;
struct msdos_dir_entry {int attr; int lcase; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct msdos_sb_info* FUNC_0 (struct super_block*) ;
 int FUNC_1 (struct nls_table*,char*,int,int*) ;
 int FUNC_2 (struct nls_table*,unsigned char*,int,int*,unsigned short,int) ;
 unsigned char FUNC_3 (unsigned char) ;
 int FUNC_4 (struct super_block*,int*,unsigned char*,int ) ;
 int FUNC_5 (unsigned char*,int ,int) ;
 int FUNC_6 (int,int) ;

__attribute__((used)) static int FUNC_7(struct super_block *VAR_5,
      const struct msdos_dir_entry *VAR_6,
      unsigned char *VAR_7, int VAR_8)
{
 const struct msdos_sb_info *VAR_9 = FUNC_0(VAR_5);
 int VAR_10 = VAR_9->options.isvfat;
 int VAR_11 = VAR_9->options.nocase;
 unsigned short VAR_12 = VAR_9->options.shortname;
 struct nls_table *VAR_13 = VAR_9->nls_disk;
 wchar_t VAR_14[14];
 unsigned char VAR_15, VAR_16[VAR_4];
 unsigned char *VAR_17 = VAR_7;
 int VAR_18, VAR_19, VAR_20, VAR_21, VAR_22;
 int VAR_23 = 0;
 int VAR_24 = 0, VAR_25 = 0;

 if (!VAR_10 && VAR_8 && (VAR_6->attr & VAR_0)) {
  *VAR_17++ = '.';
  VAR_23 = 1;
 }

 FUNC_5(VAR_16, VAR_6->name, sizeof(VAR_16));



 if (VAR_16[0] == 0x05)
  VAR_16[0] = 0xE5;


 for (VAR_20 = 0, VAR_21 = 0; VAR_20 < 8;) {
  VAR_15 = VAR_16[VAR_20];
  if (!VAR_15)
   break;
  VAR_19 = FUNC_2(VAR_13, &VAR_16[VAR_20], 8 - VAR_20,
     &VAR_14[VAR_21++], VAR_12,
     VAR_6->lcase & VAR_1);
  if (VAR_19 <= 1) {
   if (!VAR_10)
    VAR_17[VAR_20] = VAR_11 ? VAR_15 : FUNC_3(VAR_15);
   VAR_20++;
   if (VAR_15 != ' ') {
    VAR_24 = VAR_20;
    VAR_25 = VAR_21;
   }
  } else {
   VAR_25 = VAR_21;
   if (VAR_10)
    VAR_20 += FUNC_6(VAR_19, 8-VAR_20);
   else {
    for (VAR_18 = 0; VAR_18 < VAR_19 && VAR_20 < 8; VAR_18++, VAR_20++)
     VAR_17[VAR_20] = VAR_16[VAR_20];
   }
   if (VAR_19)
    VAR_24 = VAR_20;
  }
 }

 VAR_20 = VAR_24;
 VAR_21 = VAR_25;
 FUNC_1(VAR_13, ".", 1, &VAR_14[VAR_21++]);
 if (!VAR_10)
  VAR_17[VAR_20] = '.';
 VAR_20++;


 for (VAR_22 = 8; VAR_22 < VAR_4;) {
  VAR_15 = VAR_16[VAR_22];
  if (!VAR_15)
   break;
  VAR_19 = FUNC_2(VAR_13, &VAR_16[VAR_22], VAR_4 - VAR_22,
     &VAR_14[VAR_21++], VAR_12,
     VAR_6->lcase & VAR_2);
  if (VAR_19 <= 1) {
   VAR_22++;
   if (!VAR_10)
    VAR_17[VAR_20] = VAR_11 ? VAR_15 : FUNC_3(VAR_15);
   VAR_20++;
   if (VAR_15 != ' ') {
    VAR_24 = VAR_20;
    VAR_25 = VAR_21;
   }
  } else {
   VAR_25 = VAR_21;
   if (VAR_10) {
    int VAR_26 = FUNC_6(VAR_19, VAR_4-VAR_22);
    VAR_22 += VAR_26;
    VAR_20 += VAR_26;
   } else {
    for (VAR_18 = 0; VAR_18 < VAR_19 && VAR_22 < VAR_4;
         VAR_18++, VAR_20++, VAR_22++) {
      VAR_17[VAR_20] = VAR_16[VAR_22];
    }
   }
   if (VAR_19)
    VAR_24 = VAR_20;
  }
 }

 if (VAR_24 > 0) {
  VAR_24 += VAR_23;

  if (VAR_9->options.isvfat) {
   VAR_14[VAR_25] = 0x0000;
   VAR_24 = FUNC_4(VAR_5, VAR_14, VAR_7,
       VAR_3);
  }
 }

 return VAR_24;
}
