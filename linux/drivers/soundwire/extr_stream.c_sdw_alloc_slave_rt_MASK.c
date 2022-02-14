
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdw_stream_runtime {int dummy; } ;
struct sdw_stream_config {int direction; int ch_count; } ;
struct sdw_slave_runtime {struct sdw_slave* slave; int direction; int ch_count; int port_list; } ;
struct sdw_slave {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct sdw_slave_runtime* FUNC_1 (int,int ) ;

__attribute__((used)) static struct sdw_slave_runtime
*FUNC_2(struct sdw_slave *VAR_1,
      struct sdw_stream_config *VAR_2,
      struct sdw_stream_runtime *VAR_3)
{
 struct sdw_slave_runtime *VAR_4;

 VAR_4 = FUNC_1(sizeof(*VAR_4), VAR_0);
 if (!VAR_4)
  return ((void*)0);

 FUNC_0(&VAR_4->port_list);
 VAR_4->ch_count = VAR_2->ch_count;
 VAR_4->direction = VAR_2->direction;
 VAR_4->slave = VAR_1;

 return VAR_4;
}
