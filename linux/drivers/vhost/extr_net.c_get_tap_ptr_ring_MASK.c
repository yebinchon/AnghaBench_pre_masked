
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ptr_ring {int dummy; } ;
struct file {int dummy; } ;


 int FUNC_0 (struct ptr_ring*) ;
 struct file* FUNC_1 (int) ;
 int FUNC_2 (struct file*) ;
 struct ptr_ring* FUNC_3 (struct file*) ;
 struct ptr_ring* FUNC_4 (struct file*) ;

__attribute__((used)) static struct ptr_ring *FUNC_5(int VAR_0)
{
 struct ptr_ring *VAR_1;
 struct file *VAR_2 = FUNC_1(VAR_0);

 if (!VAR_2)
  return ((void*)0);
 VAR_1 = FUNC_4(VAR_2);
 if (!FUNC_0(VAR_1))
  goto out;
 VAR_1 = FUNC_3(VAR_2);
 if (!FUNC_0(VAR_1))
  goto out;
 VAR_1 = ((void*)0);
out:
 FUNC_2(VAR_2);
 return VAR_1;
}
