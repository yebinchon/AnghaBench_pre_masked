
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct o2nm_node {unsigned long nd_num; int nd_set_attributes; } ;
struct o2nm_cluster {int cl_nodes_lock; int cl_nodes_bitmap; struct o2nm_node** cl_nodes; } ;
struct config_item {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (unsigned long,int ) ;
 unsigned long FUNC_3 (char*,char**,int ) ;
 scalar_t__ FUNC_4 (int ,int *) ;
 int FUNC_5 (int ,int *) ;
 struct o2nm_cluster* FUNC_6 (struct o2nm_node*) ;
 struct o2nm_node* FUNC_7 (struct config_item*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static ssize_t FUNC_10(struct config_item *VAR_8, const char *VAR_9,
       size_t VAR_10)
{
 struct o2nm_node *VAR_11 = FUNC_7(VAR_8);
 struct o2nm_cluster *VAR_12;
 unsigned long VAR_13;
 char *VAR_14 = (char *)VAR_9;
 int VAR_15 = 0;

 VAR_13 = FUNC_3(VAR_14, &VAR_14, 0);
 if (!VAR_14 || (*VAR_14 && (*VAR_14 != '\n')))
  return -VAR_2;

 if (VAR_13 >= VAR_4)
  return -VAR_3;





 if (!FUNC_5(VAR_5, &VAR_11->nd_set_attributes) ||
     !FUNC_5(VAR_7, &VAR_11->nd_set_attributes))
  return -VAR_2;

 FUNC_0();
 VAR_12 = FUNC_6(VAR_11);
 if (!VAR_12) {
  FUNC_1();
  return -VAR_2;
 }

 FUNC_8(&VAR_12->cl_nodes_lock);
 if (VAR_12->cl_nodes[VAR_13])
  VAR_15 = -VAR_1;
 else if (FUNC_4(VAR_6,
   &VAR_11->nd_set_attributes))
  VAR_15 = -VAR_0;
 else {
  VAR_12->cl_nodes[VAR_13] = VAR_11;
  VAR_11->nd_num = VAR_13;
  FUNC_2(VAR_13, VAR_12->cl_nodes_bitmap);
 }
 FUNC_9(&VAR_12->cl_nodes_lock);
 FUNC_1();

 if (VAR_15)
  return VAR_15;

 return VAR_10;
}
