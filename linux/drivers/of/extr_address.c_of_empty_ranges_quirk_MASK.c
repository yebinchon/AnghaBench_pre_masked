
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_node {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct device_node*,char*) ;
 scalar_t__ FUNC_2 (char*) ;

__attribute__((used)) static int FUNC_3(struct device_node *VAR_1)
{
 if (FUNC_0(VAR_0)) {

  static int VAR_2 = -1;


  if (FUNC_1(VAR_1, "1682m-sdc"))
   return 1;


  if (VAR_2 < 0)
   VAR_2 =
    FUNC_2("Power Macintosh") ||
    FUNC_2("MacRISC");
  return VAR_2;
 }
 return 0;
}
