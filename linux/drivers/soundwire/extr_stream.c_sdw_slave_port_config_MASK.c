
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdw_slave_runtime {int port_list; } ;
struct sdw_slave {int dev; } ;
struct sdw_port_runtime {int port_node; } ;
struct sdw_port_config {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct sdw_port_runtime*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,struct sdw_port_runtime*) ;
 struct sdw_port_runtime* FUNC_3 (int *,struct sdw_port_config*,int) ;

__attribute__((used)) static int FUNC_4(struct sdw_slave *VAR_1,
     struct sdw_slave_runtime *VAR_2,
     struct sdw_port_config *VAR_3,
     unsigned int VAR_4)
{
 struct sdw_port_runtime *VAR_5;
 int VAR_6, VAR_7;


 for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {
  VAR_5 = FUNC_3(&VAR_1->dev, VAR_3, VAR_6);
  if (!VAR_5)
   return -VAR_0;





  VAR_7 = FUNC_2(&VAR_1->dev, VAR_5);
  if (VAR_7 < 0) {
   FUNC_0(VAR_5);
   return VAR_7;
  }






  FUNC_1(&VAR_5->port_node, &VAR_2->port_list);
 }

 return 0;
}
