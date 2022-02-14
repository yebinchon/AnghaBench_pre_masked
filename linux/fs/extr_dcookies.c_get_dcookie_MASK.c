
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct path {TYPE_1__* dentry; } ;
struct dcookie_struct {int dummy; } ;
struct TYPE_2__ {int d_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct dcookie_struct* FUNC_0 (struct path const*) ;
 int VAR_3 ;
 unsigned long FUNC_1 (struct dcookie_struct*) ;
 struct dcookie_struct* FUNC_2 (unsigned long) ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

int FUNC_6(const struct path *VAR_4, unsigned long *VAR_5)
{
 int VAR_6 = 0;
 struct dcookie_struct * VAR_7;

 FUNC_4(&VAR_3);

 if (!FUNC_3()) {
  VAR_6 = -VAR_1;
  goto out;
 }

 if (VAR_4->dentry->d_flags & VAR_0) {
  VAR_7 = FUNC_2((unsigned long)VAR_4->dentry);
 } else {
  VAR_7 = FUNC_0(VAR_4);
  if (!VAR_7) {
   VAR_6 = -VAR_2;
   goto out;
  }
 }

 *VAR_5 = FUNC_1(VAR_7);

out:
 FUNC_5(&VAR_3);
 return VAR_6;
}
