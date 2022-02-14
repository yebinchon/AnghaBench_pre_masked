
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct zone_device {int work_scheduled; int work; int cpu; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 struct zone_device* FUNC_1 (int) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 () ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_6(u64 VAR_2)
{
 int VAR_3 = FUNC_3();
 struct zone_device *VAR_4;
 unsigned long VAR_5;

 FUNC_4(&VAR_1, VAR_5);
 ++VAR_0;

 FUNC_0();


 VAR_4 = FUNC_1(VAR_3);
 if (VAR_4 && !VAR_4->work_scheduled) {
  VAR_4->work_scheduled = 1;
  FUNC_2(VAR_4->cpu, &VAR_4->work);
 }

 FUNC_5(&VAR_1, VAR_5);
 return 0;
}
