
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fs_context {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct fs_context*,int ) ;
 int FUNC_2 (struct fs_context*,int ) ;

__attribute__((used)) static int FUNC_3(struct fs_context *VAR_5)
{
 int VAR_6 = -VAR_2;

 if (FUNC_0(VAR_1)) {
  VAR_6 = FUNC_2(VAR_5, VAR_4);
  if (VAR_6 < 0)
   return VAR_6;
 }
 if (FUNC_0(VAR_0))
  VAR_6 = FUNC_1(VAR_5, VAR_3);
 return VAR_6;
}
