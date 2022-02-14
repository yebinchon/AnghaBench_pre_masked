
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dentry {void* d_fsdata; } ;


 unsigned long VAR_0 ;
 int FUNC_0 (void*) ;

__attribute__((used)) static void FUNC_1(struct dentry *VAR_1)
{
 void *VAR_2 = VAR_1->d_fsdata;

 if (!((unsigned long)VAR_2 & VAR_0))
  FUNC_0(VAR_1->d_fsdata);
}
