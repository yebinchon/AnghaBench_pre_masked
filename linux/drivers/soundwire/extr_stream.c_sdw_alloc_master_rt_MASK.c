
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdw_stream_runtime {int master_list; } ;
struct sdw_stream_config {int direction; int ch_count; } ;
struct sdw_master_runtime {int direction; struct sdw_stream_runtime* stream; struct sdw_bus* bus; int ch_count; int bus_node; int stream_node; int slave_rt_list; int port_list; } ;
struct sdw_bus {int m_rt_list; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct sdw_master_runtime* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int *) ;
 struct sdw_master_runtime* FUNC_3 (struct sdw_bus*,struct sdw_stream_runtime*) ;

__attribute__((used)) static struct sdw_master_runtime
*FUNC_4(struct sdw_bus *VAR_1,
       struct sdw_stream_config *VAR_2,
       struct sdw_stream_runtime *VAR_3)
{
 struct sdw_master_runtime *VAR_4;





 VAR_4 = FUNC_3(VAR_1, VAR_3);
 if (VAR_4)
  goto stream_config;

 VAR_4 = FUNC_1(sizeof(*VAR_4), VAR_0);
 if (!VAR_4)
  return ((void*)0);


 FUNC_0(&VAR_4->port_list);
 FUNC_0(&VAR_4->slave_rt_list);
 FUNC_2(&VAR_4->stream_node, &VAR_3->master_list);

 FUNC_2(&VAR_4->bus_node, &VAR_1->m_rt_list);

stream_config:
 VAR_4->ch_count = VAR_2->ch_count;
 VAR_4->bus = VAR_1;
 VAR_4->stream = VAR_3;
 VAR_4->direction = VAR_2->direction;

 return VAR_4;
}
