
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct ad2s1210_state {int lock; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (struct ad2s1210_state*,int ) ;
 int FUNC_1 (struct device*) ;
 struct ad2s1210_state* FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_1,
         struct device_attribute *VAR_2,
         char *VAR_3)
{
 struct ad2s1210_state *VAR_4 = FUNC_2(FUNC_1(VAR_1));
 int VAR_5;

 FUNC_3(&VAR_4->lock);
 VAR_5 = FUNC_0(VAR_4, VAR_0);
 FUNC_4(&VAR_4->lock);
 return VAR_5 < 0 ? VAR_5 : FUNC_5(VAR_3, "0x%x\n", VAR_5);
}
