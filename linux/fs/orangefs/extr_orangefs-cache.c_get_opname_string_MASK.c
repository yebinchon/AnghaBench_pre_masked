
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ type; } ;
struct orangefs_kernel_op_s {TYPE_1__ upcall; } ;
typedef scalar_t__ __s32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;

char *FUNC_0(struct orangefs_kernel_op_s *VAR_26)
{
 if (VAR_26) {
  __s32 VAR_27 = VAR_26->upcall.type;

  if (VAR_27 == VAR_3)
   return "OP_FILE_IO";
  else if (VAR_27 == VAR_11)
   return "OP_LOOKUP";
  else if (VAR_27 == VAR_1)
   return "OP_CREATE";
  else if (VAR_27 == VAR_8)
   return "OP_GETATTR";
  else if (VAR_27 == VAR_18)
   return "OP_REMOVE";
  else if (VAR_27 == VAR_12)
   return "OP_MKDIR";
  else if (VAR_27 == VAR_16)
   return "OP_READDIR";
  else if (VAR_27 == VAR_17)
   return "OP_READDIRPLUS";
  else if (VAR_27 == VAR_21)
   return "OP_SETATTR";
  else if (VAR_27 == VAR_24)
   return "OP_SYMLINK";
  else if (VAR_27 == VAR_20)
   return "OP_RENAME";
  else if (VAR_27 == VAR_23)
   return "OP_STATFS";
  else if (VAR_27 == VAR_25)
   return "OP_TRUNCATE";
  else if (VAR_27 == VAR_15)
   return "OP_RA_FLUSH";
  else if (VAR_27 == VAR_6)
   return "OP_FS_MOUNT";
  else if (VAR_27 == VAR_7)
   return "OP_FS_UMOUNT";
  else if (VAR_27 == VAR_9)
   return "OP_GETXATTR";
  else if (VAR_27 == VAR_22)
   return "OP_SETXATTR";
  else if (VAR_27 == VAR_10)
   return "OP_LISTXATTR";
  else if (VAR_27 == VAR_19)
   return "OP_REMOVEXATTR";
  else if (VAR_27 == VAR_13)
   return "OP_PARAM";
  else if (VAR_27 == VAR_14)
   return "OP_PERF_COUNT";
  else if (VAR_27 == VAR_0)
   return "OP_CANCEL";
  else if (VAR_27 == VAR_5)
   return "OP_FSYNC";
  else if (VAR_27 == VAR_4)
   return "OP_FSKEY";
  else if (VAR_27 == VAR_2)
   return "OP_FEATURES";
 }
 return "OP_UNKNOWN?";
}
