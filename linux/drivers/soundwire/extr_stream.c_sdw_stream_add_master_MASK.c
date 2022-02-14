
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdw_stream_runtime {scalar_t__ m_rt_count; int name; } ;
struct sdw_stream_config {int dummy; } ;
struct sdw_port_config {int dummy; } ;
struct sdw_master_runtime {int dummy; } ;
struct sdw_bus {int bus_lock; int dev; int link_id; int multi_link; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct sdw_master_runtime* FUNC_3 (struct sdw_bus*,struct sdw_stream_config*,struct sdw_stream_runtime*) ;
 int FUNC_4 (int ,struct sdw_stream_runtime*,struct sdw_stream_config*,int) ;
 int FUNC_5 (struct sdw_bus*,struct sdw_master_runtime*,struct sdw_port_config*,unsigned int) ;
 int FUNC_6 (struct sdw_master_runtime*,struct sdw_stream_runtime*) ;

int FUNC_7(struct sdw_bus *VAR_2,
     struct sdw_stream_config *VAR_3,
     struct sdw_port_config *VAR_4,
     unsigned int VAR_5,
     struct sdw_stream_runtime *VAR_6)
{
 struct sdw_master_runtime *VAR_7;
 int VAR_8;

 FUNC_1(&VAR_2->bus_lock);






 if (!VAR_2->multi_link && VAR_6->m_rt_count > 0) {
  FUNC_0(VAR_2->dev,
   "Multilink not supported, link %d\n", VAR_2->link_id);
  VAR_8 = -VAR_0;
  goto unlock;
 }

 VAR_7 = FUNC_3(VAR_2, VAR_3, VAR_6);
 if (!VAR_7) {
  FUNC_0(VAR_2->dev,
   "Master runtime config failed for stream:%s\n",
   VAR_6->name);
  VAR_8 = -VAR_1;
  goto unlock;
 }

 VAR_8 = FUNC_4(VAR_2->dev, VAR_6, VAR_3, 0);
 if (VAR_8)
  goto stream_error;

 VAR_8 = FUNC_5(VAR_2, VAR_7, VAR_4, VAR_5);
 if (VAR_8)
  goto stream_error;

 VAR_6->m_rt_count++;

 goto unlock;

stream_error:
 FUNC_6(VAR_7, VAR_6);
unlock:
 FUNC_2(&VAR_2->bus_lock);
 return VAR_8;
}
