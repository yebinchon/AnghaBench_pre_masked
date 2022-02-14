
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsg_common {int * luns; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(struct fsg_common *VAR_0)
{
 int VAR_1 = FUNC_0(VAR_0->luns) - 1;

 while (VAR_1 >= 0 && !VAR_0->luns[VAR_1])
  --VAR_1;

 return VAR_1;
}
