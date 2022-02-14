
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int umode_t ;
struct v9fs_session_info {int cache; } ;
struct inode {int * i_fop; int * i_op; int i_rdev; int i_mode; TYPE_1__* i_mapping; int i_ctime; int i_mtime; int i_atime; scalar_t__ i_blocks; } ;
typedef int dev_t ;
struct TYPE_2__ {int * a_ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;





 int VAR_5 ;


 int FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*,int ,int ) ;
 int FUNC_3 (struct inode*,int *,int) ;
 int FUNC_4 (int ,char*,...) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_5 (struct v9fs_session_info*) ;
 int FUNC_6 (struct v9fs_session_info*) ;
 int VAR_20 ;
 int VAR_21 ;

int FUNC_7(struct v9fs_session_info *VAR_22,
      struct inode *VAR_23, umode_t VAR_24, dev_t VAR_25)
{
 int VAR_26 = 0;

 FUNC_3(VAR_23, ((void*)0), VAR_24);
 VAR_23->i_blocks = 0;
 VAR_23->i_rdev = VAR_25;
 VAR_23->i_atime = VAR_23->i_mtime = VAR_23->i_ctime = FUNC_0(VAR_23);
 VAR_23->i_mapping->a_ops = &VAR_6;

 switch (VAR_24 & VAR_5) {
 case 131:
 case 134:
 case 133:
 case 128:
  if (FUNC_5(VAR_22)) {
   VAR_23->i_op = &VAR_15;
  } else if (FUNC_6(VAR_22)) {
   VAR_23->i_op = &VAR_14;
  } else {
   FUNC_4(VAR_4,
     "special files without extended mode\n");
   VAR_26 = -VAR_3;
   goto error;
  }
  FUNC_2(VAR_23, VAR_23->i_mode, VAR_23->i_rdev);
  break;
 case 129:
  if (FUNC_5(VAR_22)) {
   VAR_23->i_op = &VAR_15;
   if (VAR_22->cache == VAR_1 ||
       VAR_22->cache == VAR_0)
    VAR_23->i_fop =
     &VAR_8;
   else if (VAR_22->cache == VAR_2)
    VAR_23->i_fop = &VAR_19;
   else
    VAR_23->i_fop = &VAR_17;
  } else {
   VAR_23->i_op = &VAR_14;
   if (VAR_22->cache == VAR_1 ||
       VAR_22->cache == VAR_0)
    VAR_23->i_fop =
     &VAR_7;
   else if (VAR_22->cache == VAR_2)
    VAR_23->i_fop = &VAR_18;
   else
    VAR_23->i_fop = &VAR_16;
  }

  break;
 case 130:
  if (!FUNC_6(VAR_22) && !FUNC_5(VAR_22)) {
   FUNC_4(VAR_4,
     "extended modes used with legacy protocol\n");
   VAR_26 = -VAR_3;
   goto error;
  }

  if (FUNC_5(VAR_22))
   VAR_23->i_op = &VAR_21;
  else
   VAR_23->i_op = &VAR_20;

  break;
 case 132:
  FUNC_1(VAR_23);
  if (FUNC_5(VAR_22))
   VAR_23->i_op = &VAR_10;
  else if (FUNC_6(VAR_22))
   VAR_23->i_op = &VAR_11;
  else
   VAR_23->i_op = &VAR_9;

  if (FUNC_5(VAR_22))
   VAR_23->i_fop = &VAR_13;
  else
   VAR_23->i_fop = &VAR_12;

  break;
 default:
  FUNC_4(VAR_4, "BAD mode 0x%hx S_IFMT 0x%x\n",
    VAR_24, VAR_24 & VAR_5);
  VAR_26 = -VAR_3;
  goto error;
 }
error:
 return VAR_26;

}
