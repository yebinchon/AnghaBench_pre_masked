
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef long u8 ;
struct ocfs2_protocol_version {long pv_major; long pv_minor; } ;
struct TYPE_3__ {long pv_major; long pv_minor; } ;
struct ocfs2_control_private {TYPE_1__ op_proto; } ;
struct ocfs2_control_message_setv {char space1; char space2; char newline; int minor; int major; int tag; } ;
struct file {struct ocfs2_control_private* private_data; } ;
struct TYPE_4__ {struct ocfs2_protocol_version sp_max_proto; } ;


 int VAR_0 ;
 int VAR_1 ;
 long VAR_2 ;
 long VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (struct file*) ;
 int FUNC_1 (struct file*) ;
 TYPE_2__ VAR_7 ;
 long FUNC_2 (int ,char**,int) ;
 scalar_t__ FUNC_3 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_8,
        struct ocfs2_control_message_setv *VAR_9)
{
 long VAR_10, VAR_11;
 char *VAR_12 = ((void*)0);
 struct ocfs2_control_private *VAR_13 = VAR_8->private_data;
 struct ocfs2_protocol_version *VAR_14 =
  &VAR_7.sp_max_proto;

 if (FUNC_0(VAR_8) !=
     VAR_4)
  return -VAR_0;

 if (FUNC_3(VAR_9->tag, VAR_6,
      VAR_5))
  return -VAR_0;

 if ((VAR_9->space1 != ' ') || (VAR_9->space2 != ' ') ||
     (VAR_9->newline != '\n'))
  return -VAR_0;
 VAR_9->space1 = VAR_9->space2 = VAR_9->newline = '\0';

 VAR_10 = FUNC_2(VAR_9->major, &VAR_12, 16);
 if (!VAR_12 || *VAR_12)
  return -VAR_0;
 VAR_11 = FUNC_2(VAR_9->minor, &VAR_12, 16);
 if (!VAR_12 || *VAR_12)
  return -VAR_0;






 if ((VAR_10 == VAR_3) || (VAR_10 == VAR_2) ||
     (VAR_10 > (u8)-1) || (VAR_10 < 1))
  return -VAR_1;
 if ((VAR_11 == VAR_3) || (VAR_11 == VAR_2) ||
     (VAR_11 > (u8)-1) || (VAR_11 < 0))
  return -VAR_1;
 if ((VAR_10 != VAR_14->pv_major) ||
     (VAR_11 > VAR_14->pv_minor))
  return -VAR_0;

 VAR_13->op_proto.pv_major = VAR_10;
 VAR_13->op_proto.pv_minor = VAR_11;

 return FUNC_1(VAR_8);
}
