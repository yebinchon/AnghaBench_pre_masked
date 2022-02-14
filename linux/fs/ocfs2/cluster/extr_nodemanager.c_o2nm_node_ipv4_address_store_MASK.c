
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rb_node {int dummy; } ;
struct o2nm_node {int nd_ipv4_address; int nd_ip_node; int nd_set_attributes; } ;
struct o2nm_cluster {int cl_nodes_lock; int cl_node_ip_tree; } ;
struct config_item {int dummy; } ;
typedef int ssize_t ;
typedef int ipv4_addr ;
typedef int __be32 ;


 int FUNC_0 (unsigned int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,unsigned int) ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (struct o2nm_cluster*,int ,struct rb_node***,struct rb_node**) ;
 int FUNC_5 () ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *,struct rb_node*,struct rb_node**) ;
 int FUNC_8 (char const*,char*,unsigned int*,unsigned int*,unsigned int*,unsigned int*) ;
 scalar_t__ FUNC_9 (int ,int *) ;
 struct o2nm_cluster* FUNC_10 (struct o2nm_node*) ;
 struct o2nm_node* FUNC_11 (struct config_item*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static ssize_t FUNC_14(struct config_item *VAR_5,
         const char *VAR_6,
         size_t VAR_7)
{
 struct o2nm_node *VAR_8 = FUNC_11(VAR_5);
 struct o2nm_cluster *VAR_9;
 int VAR_10, VAR_11;
 struct rb_node **VAR_12, *VAR_13;
 unsigned int VAR_14[4];
 __be32 VAR_15 = 0;

 VAR_10 = FUNC_8(VAR_6, "%3u.%3u.%3u.%3u", &VAR_14[3], &VAR_14[2],
       &VAR_14[1], &VAR_14[0]);
 if (VAR_10 != 4)
  return -VAR_2;

 for (VAR_11 = 0; VAR_11 < FUNC_0(VAR_14); VAR_11++) {
  if (VAR_14[VAR_11] > 255)
   return -VAR_3;
  FUNC_1(&VAR_15, VAR_14[VAR_11] << (VAR_11 * 8));
 }

 FUNC_3();
 VAR_9 = FUNC_10(VAR_8);
 if (!VAR_9) {
  FUNC_5();
  return -VAR_2;
 }

 VAR_10 = 0;
 FUNC_12(&VAR_9->cl_nodes_lock);
 if (FUNC_4(VAR_9, VAR_15, &VAR_12, &VAR_13))
  VAR_10 = -VAR_1;
 else if (FUNC_9(VAR_4,
   &VAR_8->nd_set_attributes))
  VAR_10 = -VAR_0;
 else {
  FUNC_7(&VAR_8->nd_ip_node, VAR_13, VAR_12);
  FUNC_6(&VAR_8->nd_ip_node, &VAR_9->cl_node_ip_tree);
 }
 FUNC_13(&VAR_9->cl_nodes_lock);
 FUNC_5();

 if (VAR_10)
  return VAR_10;

 FUNC_2(&VAR_8->nd_ipv4_address, &VAR_15, sizeof(VAR_15));

 return VAR_7;
}
