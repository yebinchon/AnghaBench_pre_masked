
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct device {int parent; } ;
struct ab3100 {int startup_events; int startup_events_read; } ;


 int VAR_0 ;
 struct ab3100* FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_1,
          u8 *VAR_2)
{
 struct ab3100 *VAR_3 = FUNC_0(VAR_1->parent);

 if (!VAR_3->startup_events_read)
  return -VAR_0;
 FUNC_1(VAR_2, VAR_3->startup_events, 3);

 return 0;
}
