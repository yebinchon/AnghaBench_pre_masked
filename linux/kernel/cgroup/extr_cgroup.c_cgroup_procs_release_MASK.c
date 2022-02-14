
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kernfs_open_file {scalar_t__ priv; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct kernfs_open_file *VAR_0)
{
 if (VAR_0->priv) {
  FUNC_0(VAR_0->priv);
  FUNC_1(VAR_0->priv);
 }
}
