
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct show_links_data {char* buf; int offs; } ;
struct device_driver {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int bus; } ;


 int FUNC_0 (int *,int *,struct show_links_data*,int ) ;
 TYPE_1__ VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static ssize_t FUNC_1(struct device_driver *VAR_2, char *VAR_3)
{
 struct show_links_data VAR_4 = { .buf = VAR_3 };

 FUNC_0(&VAR_0.bus, ((void*)0), &VAR_4, VAR_1);
 return VAR_4.offs;
}
