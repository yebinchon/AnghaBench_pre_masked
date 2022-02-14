
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fs_context {int dummy; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (char*,int *,struct fs_context*,unsigned int) ;
 int VAR_1 ;
 int FUNC_1 (struct fs_context*) ;

__attribute__((used)) static int FUNC_2(struct fs_context *VAR_2, unsigned int VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_0("[fscontext]", &VAR_1, VAR_2,
         VAR_0 | VAR_3);
 if (VAR_4 < 0)
  FUNC_1(VAR_2);
 return VAR_4;
}
