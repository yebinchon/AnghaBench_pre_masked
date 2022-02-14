
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct channel_path {int chpid; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int ,char*,int) ;
 struct channel_path* FUNC_2 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_1,
      struct device_attribute *VAR_2, char *VAR_3)
{
 struct channel_path *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_2(VAR_1);
 VAR_5 = FUNC_0(VAR_4->chpid);
 if (VAR_5 < 0)
  return VAR_5;

 return FUNC_1(VAR_3, VAR_0, "%d\n", VAR_5);
}
