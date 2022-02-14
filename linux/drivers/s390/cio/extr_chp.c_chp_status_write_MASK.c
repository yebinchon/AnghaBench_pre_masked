
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct channel_path {int lock; int chpid; } ;
typedef size_t ssize_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (char const*,char*,char*) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (char*,char*,int) ;
 struct channel_path* FUNC_6 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_7(struct device *VAR_1,
    struct device_attribute *VAR_2,
    const char *VAR_3, size_t VAR_4)
{
 struct channel_path *VAR_5 = FUNC_6(VAR_1);
 char VAR_6[10];
 int VAR_7;
 int VAR_8;

 VAR_7 = FUNC_3(VAR_3, "%5s", VAR_6);
 if (!VAR_7)
  return VAR_4;

 if (!FUNC_5(VAR_6, "on", 2) || !FUNC_4(VAR_6, "1")) {
  FUNC_0(&VAR_5->lock);
  VAR_8 = FUNC_2(VAR_5->chpid, 1);
  FUNC_1(&VAR_5->lock);
 } else if (!FUNC_5(VAR_6, "off", 3) || !FUNC_4(VAR_6, "0")) {
  FUNC_0(&VAR_5->lock);
  VAR_8 = FUNC_2(VAR_5->chpid, 0);
  FUNC_1(&VAR_5->lock);
 } else
  VAR_8 = -VAR_0;

 return VAR_8 < 0 ? VAR_8 : VAR_4;
}
