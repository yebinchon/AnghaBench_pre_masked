
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct config_group {int dummy; } ;
struct o2nm_node_group {struct config_group cl_group; int cl_fence_method; int cl_keepalive_delay_ms; int cl_idle_timeout_ms; int cl_reconnect_delay_ms; int cl_node_ip_tree; int cl_nodes_lock; struct config_group ns_group; } ;
struct o2nm_cluster {struct config_group cl_group; int cl_fence_method; int cl_keepalive_delay_ms; int cl_idle_timeout_ms; int cl_reconnect_delay_ms; int cl_node_ip_tree; int cl_nodes_lock; struct config_group ns_group; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct config_group* FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct config_group*,char const*,int *) ;
 int FUNC_2 (struct config_group*,struct config_group*) ;
 int FUNC_3 (struct o2nm_node_group*) ;
 struct o2nm_node_group* FUNC_4 (int,int ) ;
 struct config_group* FUNC_5 () ;
 int FUNC_6 (struct config_group*) ;
 int VAR_8 ;
 int VAR_9 ;
 struct o2nm_node_group* VAR_10 ;
 int FUNC_7 (int *) ;

__attribute__((used)) static struct config_group *FUNC_8(struct config_group *VAR_11,
         const char *VAR_12)
{
 struct o2nm_cluster *VAR_13 = ((void*)0);
 struct o2nm_node_group *VAR_14 = ((void*)0);
 struct config_group *VAR_15 = ((void*)0), *VAR_16 = ((void*)0);



 if (VAR_10)
  return FUNC_0(-VAR_1);

 VAR_13 = FUNC_4(sizeof(struct o2nm_cluster), VAR_2);
 VAR_14 = FUNC_4(sizeof(struct o2nm_node_group), VAR_2);
 VAR_15 = FUNC_5();
 if (VAR_13 == ((void*)0) || VAR_14 == ((void*)0) || VAR_15 == ((void*)0))
  goto out;

 FUNC_1(&VAR_13->cl_group, VAR_12,
        &VAR_8);
 FUNC_2(&VAR_14->ns_group, &VAR_13->cl_group);

 FUNC_1(&VAR_14->ns_group, "node",
        &VAR_9);
 FUNC_2(VAR_15, &VAR_13->cl_group);

 FUNC_7(&VAR_13->cl_nodes_lock);
 VAR_13->cl_node_ip_tree = VAR_7;
 VAR_13->cl_reconnect_delay_ms = VAR_5;
 VAR_13->cl_idle_timeout_ms = VAR_3;
 VAR_13->cl_keepalive_delay_ms = VAR_4;
 VAR_13->cl_fence_method = VAR_6;

 VAR_16 = &VAR_13->cl_group;
 VAR_10 = VAR_13;

out:
 if (VAR_16 == ((void*)0)) {
  FUNC_3(VAR_13);
  FUNC_3(VAR_14);
  FUNC_6(VAR_15);
  VAR_16 = FUNC_0(-VAR_0);
 }

 return VAR_16;
}
