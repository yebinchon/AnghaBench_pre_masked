
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

int FUNC_3(void)
{
 int VAR_3 = 0;
 unsigned long VAR_4;

 FUNC_1(&VAR_2, VAR_4);
 if (VAR_1 <= 0) {
  FUNC_0("power state: unbalanced enable/disable calls\n");
  VAR_3 = -VAR_0;
  goto out;
 }

 VAR_1--;
out:
 FUNC_2(&VAR_2, VAR_4);
 return VAR_3;
}
