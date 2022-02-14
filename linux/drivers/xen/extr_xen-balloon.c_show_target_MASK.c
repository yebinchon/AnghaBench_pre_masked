
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {scalar_t__ target_pages; } ;


 unsigned long long VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (char*,char*,unsigned long long) ;

__attribute__((used)) static ssize_t FUNC_1(struct device *VAR_2, struct device_attribute *VAR_3,
         char *VAR_4)
{
 return FUNC_0(VAR_4, "%llu\n",
         (unsigned long long)VAR_1.target_pages
         << VAR_0);
}
