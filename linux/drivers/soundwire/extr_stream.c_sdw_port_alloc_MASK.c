
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdw_port_runtime {int num; int ch_mask; } ;
struct sdw_port_config {int num; int ch_mask; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 struct sdw_port_runtime* FUNC_0 (int,int ) ;

__attribute__((used)) static struct sdw_port_runtime
*FUNC_1(struct device *VAR_1,
  struct sdw_port_config *VAR_2,
  int VAR_3)
{
 struct sdw_port_runtime *VAR_4;

 VAR_4 = FUNC_0(sizeof(*VAR_4), VAR_0);
 if (!VAR_4)
  return ((void*)0);

 VAR_4->ch_mask = VAR_2[VAR_3].ch_mask;
 VAR_4->num = VAR_2[VAR_3].num;

 return VAR_4;
}
