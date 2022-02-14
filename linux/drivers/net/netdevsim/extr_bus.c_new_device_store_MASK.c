
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nsim_bus_dev {int list; } ;
struct bus_type {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ FUNC_0 (struct nsim_bus_dev*) ;
 size_t FUNC_1 (struct nsim_bus_dev*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 struct nsim_bus_dev* FUNC_5 (unsigned int,unsigned int) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char const*,char*,unsigned int*,unsigned int*) ;

__attribute__((used)) static ssize_t
FUNC_8(struct bus_type *VAR_4, const char *VAR_5, size_t VAR_6)
{
 struct nsim_bus_dev *VAR_7;
 unsigned int VAR_8;
 unsigned int VAR_9;
 int VAR_10;

 VAR_10 = FUNC_7(VAR_5, "%u %u", &VAR_9, &VAR_8);
 switch (VAR_10) {
 case 1:
  VAR_8 = 1;

 case 2:
  if (VAR_9 > VAR_1) {
   FUNC_6("Value of \"id\" is too big.\n");
   return -VAR_0;
  }
  break;
 default:
  FUNC_6("Format for adding new device is \"id port_count\" (uint uint).\n");
  return -VAR_0;
 }
 VAR_7 = FUNC_5(VAR_9, VAR_8);
 if (FUNC_0(VAR_7))
  return FUNC_1(VAR_7);

 FUNC_3(&VAR_3);
 FUNC_2(&VAR_7->list, &VAR_2);
 FUNC_4(&VAR_3);

 return VAR_6;
}
