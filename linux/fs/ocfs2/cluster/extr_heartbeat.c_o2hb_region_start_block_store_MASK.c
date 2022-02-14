
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct o2hb_region {unsigned long long hr_start_block; scalar_t__ hr_bdev; } ;
struct config_item {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 unsigned long long FUNC_0 (char*,char**,int ) ;
 struct o2hb_region* FUNC_1 (struct config_item*) ;

__attribute__((used)) static ssize_t FUNC_2(struct config_item *VAR_1,
          const char *VAR_2,
          size_t VAR_3)
{
 struct o2hb_region *VAR_4 = FUNC_1(VAR_1);
 unsigned long long VAR_5;
 char *VAR_6 = (char *)VAR_2;

 if (VAR_4->hr_bdev)
  return -VAR_0;

 VAR_5 = FUNC_0(VAR_6, &VAR_6, 0);
 if (!VAR_6 || (*VAR_6 && (*VAR_6 != '\n')))
  return -VAR_0;

 VAR_4->hr_start_block = VAR_5;

 return VAR_3;
}
