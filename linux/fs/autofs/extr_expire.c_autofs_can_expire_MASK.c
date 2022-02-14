
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dentry {int dummy; } ;
struct autofs_info {scalar_t__ last_used; } ;


 unsigned int VAR_0 ;
 struct autofs_info* FUNC_0 (struct dentry*) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (scalar_t__,int ) ;

__attribute__((used)) static inline int FUNC_2(struct dentry *VAR_2,
        unsigned long VAR_3, unsigned int VAR_4)
{
 struct autofs_info *VAR_5 = FUNC_0(VAR_2);


 if (VAR_5 == ((void*)0))
  return 0;

 if (!(VAR_4 & VAR_0)) {

  if (!VAR_3 || FUNC_1(VAR_5->last_used + VAR_3, VAR_1))
   return 0;
 }
 return 1;
}
