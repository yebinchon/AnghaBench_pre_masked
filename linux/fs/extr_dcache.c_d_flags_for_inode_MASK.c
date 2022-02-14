
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_opflags; int i_mode; TYPE_1__* i_op; } ;
struct TYPE_2__ {int get_link; int lookup; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static unsigned FUNC_4(struct inode *VAR_9)
{
 unsigned VAR_10 = VAR_4;

 if (!VAR_9)
  return VAR_2;

 if (FUNC_1(VAR_9->i_mode)) {
  VAR_10 = VAR_1;
  if (FUNC_3(!(VAR_9->i_opflags & VAR_7))) {
   if (FUNC_3(!VAR_9->i_op->lookup))
    VAR_10 = VAR_0;
   else
    VAR_9->i_opflags |= VAR_7;
  }
  goto type_determined;
 }

 if (FUNC_3(!(VAR_9->i_opflags & VAR_8))) {
  if (FUNC_3(VAR_9->i_op->get_link)) {
   VAR_10 = VAR_6;
   goto type_determined;
  }
  VAR_9->i_opflags |= VAR_8;
 }

 if (FUNC_3(!FUNC_2(VAR_9->i_mode)))
  VAR_10 = VAR_5;

type_determined:
 if (FUNC_3(FUNC_0(VAR_9)))
  VAR_10 |= VAR_3;
 return VAR_10;
}
