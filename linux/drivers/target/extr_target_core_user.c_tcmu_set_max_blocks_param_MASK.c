
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int substring_t ;
struct tcmu_dev {int cmdr_lock; int max_blocks; scalar_t__ data_bitmap; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,...) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_6(struct tcmu_dev *VAR_2, substring_t *VAR_3)
{
 int VAR_4, VAR_5;

 VAR_5 = FUNC_2(VAR_3, &VAR_4);
 if (VAR_5 < 0) {
  FUNC_5("match_int() failed for max_data_area_mb=. Error %d.\n",
         VAR_5);
  return VAR_5;
 }

 if (VAR_4 <= 0) {
  FUNC_5("Invalid max_data_area %d.\n", VAR_4);
  return -VAR_0;
 }

 FUNC_3(&VAR_2->cmdr_lock);
 if (VAR_2->data_bitmap) {
  FUNC_5("Cannot set max_data_area_mb after it has been enabled.\n");
  VAR_5 = -VAR_0;
  goto unlock;
 }

 VAR_2->max_blocks = FUNC_1(VAR_4);
 if (VAR_2->max_blocks > VAR_1) {
  FUNC_5("%d is too large. Adjusting max_data_area_mb to global limit of %u\n",
         VAR_4, FUNC_0(VAR_1));
  VAR_2->max_blocks = VAR_1;
 }

unlock:
 FUNC_4(&VAR_2->cmdr_lock);
 return VAR_5;
}
