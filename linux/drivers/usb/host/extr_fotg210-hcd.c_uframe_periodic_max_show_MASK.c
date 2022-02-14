
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fotg210_hcd {int uframe_periodic_max; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct device*) ;
 struct fotg210_hcd* FUNC_2 (int ) ;
 int FUNC_3 (char*,int ,char*,int ) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_1,
  struct device_attribute *VAR_2, char *VAR_3)
{
 struct fotg210_hcd *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_2(FUNC_0(FUNC_1(VAR_1)));
 VAR_5 = FUNC_3(VAR_3, VAR_0, "%d\n", VAR_4->uframe_periodic_max);
 return VAR_5;
}
