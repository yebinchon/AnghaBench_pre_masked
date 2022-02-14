
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct goldfish_pipe {int lock; } ;
typedef enum PipeCmdCode { ____Placeholder_PipeCmdCode } PipeCmdCode ;


 int VAR_0 ;
 int FUNC_0 (struct goldfish_pipe*,int) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct goldfish_pipe *VAR_1, enum PipeCmdCode VAR_2)
{
 int VAR_3;

 if (FUNC_1(&VAR_1->lock))
  return VAR_0;
 VAR_3 = FUNC_0(VAR_1, VAR_2);
 FUNC_2(&VAR_1->lock);
 return VAR_3;
}
