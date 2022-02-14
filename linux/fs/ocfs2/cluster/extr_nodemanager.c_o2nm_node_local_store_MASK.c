
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct o2nm_node {scalar_t__ nd_num; unsigned long nd_local; int nd_set_attributes; } ;
struct o2nm_cluster {unsigned long cl_has_local; scalar_t__ cl_local_node; } ;
struct config_item {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t FUNC_0 (struct o2nm_node*) ;
 int FUNC_1 (struct o2nm_node*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 unsigned long FUNC_4 (char*,char**,int ) ;
 int FUNC_5 (int ,int *) ;
 struct o2nm_cluster* FUNC_6 (struct o2nm_node*) ;
 struct o2nm_node* FUNC_7 (struct config_item*) ;

__attribute__((used)) static ssize_t FUNC_8(struct config_item *VAR_6, const char *VAR_7,
         size_t VAR_8)
{
 struct o2nm_node *VAR_9 = FUNC_7(VAR_6);
 struct o2nm_cluster *VAR_10;
 unsigned long VAR_11;
 char *VAR_12 = (char *)VAR_7;
 ssize_t VAR_13;

 VAR_11 = FUNC_4(VAR_12, &VAR_12, 0);
 if (!VAR_12 || (*VAR_12 && (*VAR_12 != '\n')))
  return -VAR_1;

 VAR_11 = !!VAR_11;



 if (!FUNC_5(VAR_3, &VAR_9->nd_set_attributes) ||
     !FUNC_5(VAR_4, &VAR_9->nd_set_attributes) ||
     !FUNC_5(VAR_5, &VAR_9->nd_set_attributes))
  return -VAR_1;

 FUNC_2();
 VAR_10 = FUNC_6(VAR_9);
 if (!VAR_10) {
  VAR_13 = -VAR_1;
  goto out;
 }



 if (VAR_11 && VAR_11 == VAR_10->cl_has_local &&
     VAR_10->cl_local_node != VAR_9->nd_num) {
  VAR_13 = -VAR_0;
  goto out;
 }


 if (VAR_11 && !VAR_10->cl_has_local) {
  VAR_13 = FUNC_0(VAR_9);
  if (VAR_13)
   goto out;
 }

 if (!VAR_11 && VAR_10->cl_has_local &&
     VAR_10->cl_local_node == VAR_9->nd_num) {
  FUNC_1(VAR_9);
  VAR_10->cl_local_node = VAR_2;
 }

 VAR_9->nd_local = VAR_11;
 if (VAR_9->nd_local) {
  VAR_10->cl_has_local = VAR_11;
  VAR_10->cl_local_node = VAR_9->nd_num;
 }

 VAR_13 = VAR_8;

out:
 FUNC_3();
 return VAR_13;
}
