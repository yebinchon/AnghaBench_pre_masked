
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct ad2s1210_state {int lock; int * gpios; } ;
typedef int ssize_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct ad2s1210_state*,int ) ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (int ,int) ;
 struct ad2s1210_state* FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int) ;

__attribute__((used)) static ssize_t FUNC_7(struct device *VAR_2,
        struct device_attribute *VAR_3,
        const char *VAR_4,
        size_t VAR_5)
{
 struct ad2s1210_state *VAR_6 = FUNC_3(FUNC_1(VAR_2));
 int VAR_7;

 FUNC_4(&VAR_6->lock);
 FUNC_2(VAR_6->gpios[VAR_1], 0);

 FUNC_6(1);
 FUNC_2(VAR_6->gpios[VAR_1], 1);
 VAR_7 = FUNC_0(VAR_6, VAR_0);
 if (VAR_7 < 0)
  goto error_ret;
 FUNC_2(VAR_6->gpios[VAR_1], 0);
 FUNC_2(VAR_6->gpios[VAR_1], 1);
error_ret:
 FUNC_5(&VAR_6->lock);

 return VAR_7 < 0 ? VAR_7 : VAR_5;
}
