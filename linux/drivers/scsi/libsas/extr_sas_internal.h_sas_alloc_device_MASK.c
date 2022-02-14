
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct domain_device {int done_lock; int kref; int disco_list_node; int dev_list_node; int siblings; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct domain_device* FUNC_2 (int,int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static inline struct domain_device *FUNC_4(void)
{
 struct domain_device *VAR_1 = FUNC_2(sizeof(*VAR_1), VAR_0);

 if (VAR_1) {
  FUNC_0(&VAR_1->siblings);
  FUNC_0(&VAR_1->dev_list_node);
  FUNC_0(&VAR_1->disco_list_node);
  FUNC_1(&VAR_1->kref);
  FUNC_3(&VAR_1->done_lock);
 }
 return VAR_1;
}
