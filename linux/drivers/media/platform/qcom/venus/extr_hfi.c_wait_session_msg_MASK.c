
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct venus_inst {scalar_t__ error; int done; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ) ;

__attribute__((used)) static int FUNC_1(struct venus_inst *VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_0(&VAR_4->done, VAR_3);
 if (!VAR_5)
  return -VAR_1;

 if (VAR_4->error != VAR_2)
  return -VAR_0;

 return 0;
}
