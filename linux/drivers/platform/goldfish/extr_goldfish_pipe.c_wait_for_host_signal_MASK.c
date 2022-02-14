
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct goldfish_pipe {int flags; int wake_queue; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct goldfish_pipe*,int ) ;
 int FUNC_1 (int ,int *) ;
 scalar_t__ FUNC_2 (int ,int *) ;
 scalar_t__ FUNC_3 (int ,int) ;

__attribute__((used)) static int FUNC_4(struct goldfish_pipe *VAR_7, int VAR_8)
{
 u32 VAR_9 = VAR_8 ? VAR_2 : VAR_1;

 FUNC_1(VAR_9, &VAR_7->flags);


 FUNC_0(VAR_7,
  VAR_8 ? VAR_6 : VAR_5);

 while (FUNC_2(VAR_9, &VAR_7->flags)) {
  if (FUNC_3(VAR_7->wake_queue,
          !FUNC_2(VAR_9, &VAR_7->flags)))
   return -VAR_4;

  if (FUNC_2(VAR_0, &VAR_7->flags))
   return -VAR_3;
 }

 return 0;
}
