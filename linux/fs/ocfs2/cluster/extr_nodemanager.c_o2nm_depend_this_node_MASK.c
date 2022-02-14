
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct o2nm_node {int nd_item; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct o2nm_node* FUNC_1 (int ) ;
 int FUNC_2 (struct o2nm_node*) ;
 int FUNC_3 () ;

int FUNC_4(void)
{
 int VAR_1 = 0;
 struct o2nm_node *VAR_2;

 VAR_2 = FUNC_1(FUNC_3());
 if (!VAR_2) {
  VAR_1 = -VAR_0;
  goto out;
 }

 VAR_1 = FUNC_0(&VAR_2->nd_item);
 FUNC_2(VAR_2);

out:
 return VAR_1;
}
