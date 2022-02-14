
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtd_info {int bd_dev; } ;
struct fs_context {char* source; int sb_flags; } ;
struct block_device {int bd_dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct mtd_info*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (struct mtd_info*) ;
 int VAR_2 ;
 int FUNC_4 (struct mtd_info*) ;
 int FUNC_5 (struct fs_context*,char*,char*,...) ;
 struct mtd_info* FUNC_6 (char*) ;
 int FUNC_7 (struct fs_context*,char*) ;
 scalar_t__ FUNC_8 (char) ;
 struct mtd_info* FUNC_9 (char*) ;
 int FUNC_10 (struct fs_context*,struct mtd_info*,int (*) (struct super_block*,struct fs_context*)) ;
 int FUNC_11 (struct fs_context*,int,int (*) (struct super_block*,struct fs_context*)) ;
 int FUNC_12 (char*,...) ;
 int FUNC_13 (char*,char**,int ) ;

int FUNC_14(struct fs_context *VAR_3,
       int (*VAR_4)(struct super_block *VAR_5,
    struct fs_context *VAR_6))
{




 int VAR_7;

 if (!VAR_3->source)
  return FUNC_7(VAR_3, "No source specified");

 FUNC_12("MTDSB: dev_name \"%s\"\n", VAR_3->source);






 if (VAR_3->source[0] == 'm' &&
     VAR_3->source[1] == 't' &&
     VAR_3->source[2] == 'd') {
  if (VAR_3->source[3] == ':') {
   struct mtd_info *VAR_8;


   FUNC_12("MTDSB: mtd:%%s, name \"%s\"\n",
     VAR_3->source + 4);

   VAR_8 = FUNC_6(VAR_3->source + 4);
   if (!FUNC_0(VAR_8))
    return FUNC_10(VAR_3, VAR_8, VAR_4);

   FUNC_5(VAR_3, "MTD: MTD device with name \"%s\" not found",
          VAR_3->source + 4);

  } else if (FUNC_8(VAR_3->source[3])) {

   char *VAR_9;

   VAR_7 = FUNC_13(VAR_3->source + 3, &VAR_9, 0);
   if (!*VAR_9) {

    FUNC_12("MTDSB: mtd%%d, mtdnr %d\n", VAR_7);
    return FUNC_11(VAR_3, VAR_7, VAR_4);
   }
  }
 }
 if (!(VAR_3->sb_flags & VAR_2))
  FUNC_5(VAR_3, "MTD: Attempt to mount non-MTD device \"%s\"",
         VAR_3->source);
 return -VAR_0;
}
