
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct o2hb_region {int hr_nego_node_bitmap; int hr_nego_timeout_work; int hr_write_timeout_work; int hr_region_num; int hr_steady_iterations; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,char*,int ) ;
 int FUNC_5 (int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_6 () ;
 int VAR_4 ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static void FUNC_10(struct o2hb_region *VAR_5)
{

 if (FUNC_0(&VAR_5->hr_steady_iterations) != 0)
  return;

 FUNC_4(VAR_0, "Queue write timeout for %u ms\n",
      VAR_1);

 if (FUNC_6()) {
  FUNC_8(&VAR_4);
  FUNC_2(VAR_5->hr_region_num, VAR_3);
  FUNC_9(&VAR_4);
 }
 FUNC_1(&VAR_5->hr_write_timeout_work);
 FUNC_7(&VAR_5->hr_write_timeout_work,
         FUNC_5(VAR_1));

 FUNC_1(&VAR_5->hr_nego_timeout_work);

 FUNC_7(&VAR_5->hr_nego_timeout_work,
         FUNC_5(VAR_2));
 FUNC_3(VAR_5->hr_nego_node_bitmap, 0, sizeof(VAR_5->hr_nego_node_bitmap));
}
