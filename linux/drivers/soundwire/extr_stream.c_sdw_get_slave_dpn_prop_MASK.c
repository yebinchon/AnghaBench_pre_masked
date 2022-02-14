
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {struct sdw_dpn_prop* sink_dpn_prop; int sink_ports; struct sdw_dpn_prop* src_dpn_prop; int source_ports; } ;
struct sdw_slave {TYPE_1__ prop; } ;
struct sdw_dpn_prop {unsigned int num; } ;
typedef enum sdw_data_direction { ____Placeholder_sdw_data_direction } sdw_data_direction ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

struct sdw_dpn_prop *FUNC_1(struct sdw_slave *VAR_1,
         enum sdw_data_direction VAR_2,
         unsigned int VAR_3)
{
 struct sdw_dpn_prop *VAR_4;
 u8 VAR_5;
 int VAR_6;

 if (VAR_2 == VAR_0) {
  VAR_5 = FUNC_0(VAR_1->prop.source_ports);
  VAR_4 = VAR_1->prop.src_dpn_prop;
 } else {
  VAR_5 = FUNC_0(VAR_1->prop.sink_ports);
  VAR_4 = VAR_1->prop.sink_dpn_prop;
 }

 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {
  if (VAR_4[VAR_6].num == VAR_3)
   return &VAR_4[VAR_6];
 }

 return ((void*)0);
}
