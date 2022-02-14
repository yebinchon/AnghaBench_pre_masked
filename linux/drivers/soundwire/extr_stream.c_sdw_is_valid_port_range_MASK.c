
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdw_port_runtime {int num; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct device*,char*,int ) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_1,
       struct sdw_port_runtime *VAR_2)
{
 if (!FUNC_0(VAR_2->num)) {
  FUNC_1(VAR_1,
   "SoundWire: Invalid port number :%d\n", VAR_2->num);
  return -VAR_0;
 }

 return 0;
}
