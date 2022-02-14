
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct super_block {unsigned long s_blocksize_bits; TYPE_1__* s_bdev; } ;
struct TYPE_6__ {char* member_0; char arg_required; int clrmask; int setmask; char* option_name; int * values; } ;
typedef TYPE_2__ opt_desc_t ;
struct TYPE_7__ {char** s_qf_names; unsigned int s_jquota_fmt; } ;
struct TYPE_5__ {int bd_inode; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 TYPE_4__* FUNC_1 (struct super_block*) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int * VAR_17 ;
 int * VAR_18 ;
 int * VAR_19 ;
 unsigned long FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (char*,int ) ;
 int * VAR_20 ;
 int FUNC_5 (struct super_block*,char**,TYPE_2__*,char**,unsigned long*) ;
 int FUNC_6 (struct super_block*,char*,char*,...) ;
 scalar_t__ FUNC_7 (struct super_block*) ;
 scalar_t__ FUNC_8 (struct super_block*,int) ;
 unsigned long FUNC_9 (char*,char**,int ) ;
 scalar_t__ FUNC_10 (char*,char) ;
 scalar_t__ FUNC_11 (char*,char*) ;
 int * VAR_21 ;

__attribute__((used)) static int FUNC_12(struct super_block *VAR_22,


      char *VAR_23,






      unsigned long *VAR_24,


      unsigned long *VAR_25,
      char **VAR_26,
      unsigned int *VAR_27,
      char **VAR_28,
      unsigned int *VAR_29)
{
 int VAR_30;
 char *VAR_31 = ((void*)0);
 char *VAR_32;
 opt_desc_t VAR_33[] = {




  {"tails",.arg_required = 't',.values = VAR_21},
  {"notail",.clrmask =
   (1 << VAR_8) | (1 << VAR_11)},
  {"conv",.setmask = 1 << VAR_5},
  {"attrs",.setmask = 1 << VAR_4},
  {"noattrs",.clrmask = 1 << VAR_4},
  {"expose_privroot", .setmask = 1 << VAR_6},




  {"user_xattr",.setmask = 1 << VAR_12},
  {"nouser_xattr",.clrmask = 1 << VAR_12},





  {"acl",.setmask = 1 << VAR_12},
  {"noacl",.clrmask = 1 << VAR_12},

  {.option_name = "nolog"},
  {"replayonly",.setmask = 1 << VAR_15},
  {"block-allocator",.arg_required = 'a',.values = VAR_17},
  {"data",.arg_required = 'd',.values = VAR_20},
  {"barrier",.arg_required = 'b',.values = VAR_18},
  {"resize",.arg_required = 'r',.values = ((void*)0)},
  {"jdev",.arg_required = 'j',.values = ((void*)0)},
  {"nolargeio",.arg_required = 'w',.values = ((void*)0)},
  {"commit",.arg_required = 'c',.values = ((void*)0)},
  {"usrquota",.setmask = 1 << VAR_13},
  {"grpquota",.setmask = 1 << VAR_7},
  {"noquota",.clrmask = 1 << VAR_13 | 1 << VAR_7},
  {"errors",.arg_required = 'e',.values = VAR_19},
  {"usrjquota",.arg_required =
   'u' | (1 << VAR_9),.values = ((void*)0)},
  {"grpjquota",.arg_required =
   'g' | (1 << VAR_9),.values = ((void*)0)},
  {"jqfmt",.arg_required = 'f',.values = ((void*)0)},
  {.option_name = ((void*)0)}
 };

 *VAR_25 = 0;
 if (!VAR_23 || !*VAR_23)




  return 1;

 for (VAR_32 = VAR_23; VAR_32;) {
  VAR_30 = FUNC_5(VAR_22, &VAR_32, VAR_33, &VAR_31, VAR_24);
  if (VAR_30 == -1)

   return 0;

  if (VAR_30 == 'r') {
   char *VAR_34;

   VAR_34 = ((void*)0);


   if (!FUNC_11(VAR_31, "auto")) {

    *VAR_25 =
        FUNC_2(VAR_22->s_bdev->bd_inode) >> VAR_22->
        s_blocksize_bits;
   } else {
    *VAR_25 = FUNC_9(VAR_31, &VAR_34, 0);
    if (*VAR_34 != '\0') {

     FUNC_6(VAR_22, "super-6507",
        "bad value %s for "
        "-oresize\n", VAR_31);
     return 0;
    }
   }
  }

  if (VAR_30 == 'c') {
   char *VAR_35 = ((void*)0);
   unsigned long VAR_36 = FUNC_9(VAR_31, &VAR_35, 0);

   if (*VAR_35 != '\0' || VAR_36 >= (unsigned int)-1) {
    FUNC_6(VAR_22, "super-6508",
       "bad value %s for -ocommit\n",
       VAR_31);
    return 0;
   }
   *VAR_27 = (unsigned int)VAR_36;
  }

  if (VAR_30 == 'w') {
   FUNC_6(VAR_22, "super-6509", "nolargeio option "
      "is no longer supported");
   return 0;
  }

  if (VAR_30 == 'j') {
   if (VAR_31 && *VAR_31 && VAR_26) {

    if (*VAR_26) {
     FUNC_6(VAR_22, "super-6510",
        "journal device was "
        "already specified to "
        "be %s", *VAR_26);
     return 0;
    }
    *VAR_26 = VAR_31;
   }
  }
  if (VAR_30 == 'u' || VAR_30 == 'g' || VAR_30 == 'f') {
   FUNC_6(VAR_22, "reiserfs-2503", "journaled "
      "quota options not supported.");
   return 0;
  }

 }
 return 1;
}
