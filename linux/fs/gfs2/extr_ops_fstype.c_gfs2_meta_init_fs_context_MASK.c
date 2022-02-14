
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fs_context {int * ops; } ;


 int FUNC_0 (struct fs_context*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_1(struct fs_context *VAR_1)
{
 int VAR_2 = FUNC_0(VAR_1);

 if (VAR_2)
  return VAR_2;

 VAR_1->ops = &VAR_0;
 return 0;
}
