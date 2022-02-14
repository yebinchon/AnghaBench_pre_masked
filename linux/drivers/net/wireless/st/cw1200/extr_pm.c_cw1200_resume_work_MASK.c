
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct delayed_work {int dummy; } ;
struct cw1200_common {int workqueue; } ;


 int FUNC_0 (int ,struct delayed_work*,unsigned long) ;

__attribute__((used)) static int FUNC_1(struct cw1200_common *VAR_0,
          struct delayed_work *VAR_1,
          unsigned long VAR_2)
{
 if ((long)VAR_2 < 0)
  return 1;

 return FUNC_0(VAR_0->workqueue, VAR_1, VAR_2);
}
