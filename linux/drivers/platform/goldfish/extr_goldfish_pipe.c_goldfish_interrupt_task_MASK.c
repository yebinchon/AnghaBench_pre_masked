
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct goldfish_pipe_dev {int dummy; } ;
struct goldfish_pipe {int flags; int wake_queue; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int*) ;
 struct goldfish_pipe* FUNC_1 (struct goldfish_pipe_dev*,int*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(unsigned long VAR_6)
{

 struct goldfish_pipe_dev *VAR_7 = (struct goldfish_pipe_dev *)VAR_6;
 struct goldfish_pipe *VAR_8;
 int VAR_9;

 while ((VAR_8 = FUNC_1(VAR_7, &VAR_9)) != ((void*)0)) {
  if (VAR_9 & VAR_3) {
   VAR_8->flags = 1 << VAR_0;
  } else {
   if (VAR_9 & VAR_4)
    FUNC_0(VAR_1, &VAR_8->flags);
   if (VAR_9 & VAR_5)
    FUNC_0(VAR_2, &VAR_8->flags);
  }




  FUNC_2(&VAR_8->wake_queue);
 }
}
