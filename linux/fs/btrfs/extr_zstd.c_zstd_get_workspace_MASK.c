
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct list_head {int dummy; } ;
struct TYPE_2__ {int wait; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct list_head*) ;
 int VAR_0 ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (unsigned int) ;
 unsigned int FUNC_4 () ;
 int FUNC_5 (int *,int *,int ) ;
 int FUNC_6 () ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 struct list_head* FUNC_7 (unsigned int) ;
 struct list_head* FUNC_8 (unsigned int) ;

__attribute__((used)) static struct list_head *FUNC_9(unsigned int VAR_3)
{
 struct list_head *VAR_4;
 unsigned int VAR_5;


 if (!VAR_3)
  VAR_3 = 1;

again:
 VAR_4 = FUNC_8(VAR_3);
 if (VAR_4)
  return VAR_4;

 VAR_5 = FUNC_4();
 VAR_4 = FUNC_7(VAR_3);
 FUNC_3(VAR_5);

 if (FUNC_1(VAR_4)) {
  FUNC_0(VAR_1);

  FUNC_5(&VAR_2.wait, &VAR_1, VAR_0);
  FUNC_6();
  FUNC_2(&VAR_2.wait, &VAR_1);

  goto again;
 }

 return VAR_4;
}
