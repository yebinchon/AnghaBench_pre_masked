
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ovl_entry {int dummy; } ;
struct dentry {struct ovl_entry* d_fsdata; } ;


 int FUNC_0 (struct ovl_entry*,int ) ;
 int FUNC_1 (struct ovl_entry*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_2(struct dentry *VAR_1)
{
 struct ovl_entry *VAR_2 = VAR_1->d_fsdata;

 if (VAR_2) {
  FUNC_1(VAR_2);
  FUNC_0(VAR_2, VAR_0);
 }
}
