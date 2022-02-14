
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct ap_card {int total_request_count; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (int *) ;
 int FUNC_1 (char*,int ,char*,unsigned int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct ap_card* FUNC_4 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_2,
      struct device_attribute *VAR_3,
      char *VAR_4)
{
 struct ap_card *VAR_5 = FUNC_4(VAR_2);
 unsigned int VAR_6;

 VAR_6 = 0;
 FUNC_2(&VAR_1);
 VAR_6 = FUNC_0(&VAR_5->total_request_count);
 FUNC_3(&VAR_1);
 return FUNC_1(VAR_4, VAR_0, "%d\n", VAR_6);
}
