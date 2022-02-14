
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct w1_master {long search_count; int thread; int mutex; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 struct w1_master* FUNC_0 (struct device*) ;
 int FUNC_1 (char const*,int ,long*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static ssize_t FUNC_5(struct device * VAR_0,
      struct device_attribute *VAR_1,
      const char * VAR_2, size_t VAR_3)
{
 long VAR_4;
 struct w1_master *VAR_5 = FUNC_0(VAR_0);
 int VAR_6;

 VAR_6 = FUNC_1(VAR_2, 0, &VAR_4);
 if (VAR_6)
  return VAR_6;

 FUNC_2(&VAR_5->mutex);
 VAR_5->search_count = VAR_4;
 FUNC_3(&VAR_5->mutex);

 if (VAR_4)
  FUNC_4(VAR_5->thread);

 return VAR_3;
}
