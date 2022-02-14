
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_control_message_down {char space1; char space2; char newline; int uuid; int nodestr; int tag; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 long VAR_2 ;
 long VAR_3 ;
 long VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (struct file*) ;
 int FUNC_1 (int ,long) ;
 long FUNC_2 (int ,char**,int) ;
 scalar_t__ FUNC_3 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_8,
         struct ocfs2_control_message_down *VAR_9)
{
 long VAR_10;
 char *VAR_11 = ((void*)0);

 if (FUNC_0(VAR_8) !=
     VAR_5)
  return -VAR_0;

 if (FUNC_3(VAR_9->tag, VAR_6,
      VAR_7))
  return -VAR_0;

 if ((VAR_9->space1 != ' ') || (VAR_9->space2 != ' ') ||
     (VAR_9->newline != '\n'))
  return -VAR_0;
 VAR_9->space1 = VAR_9->space2 = VAR_9->newline = '\0';

 VAR_10 = FUNC_2(VAR_9->nodestr, &VAR_11, 16);
 if (!VAR_11 || *VAR_11)
  return -VAR_0;

 if ((VAR_10 == VAR_4) || (VAR_10 == VAR_3) ||
     (VAR_10 > VAR_2) || (VAR_10 < 0))
  return -VAR_1;

 FUNC_1(VAR_9->uuid, VAR_10);

 return 0;
}
