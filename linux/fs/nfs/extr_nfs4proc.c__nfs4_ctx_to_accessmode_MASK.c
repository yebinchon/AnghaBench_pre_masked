
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_open_context {int mode; } ;
typedef int fmode_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static fmode_t FUNC_0(const struct nfs_open_context *VAR_3)
{
  return VAR_3->mode & (VAR_1|VAR_2|VAR_0);
}
