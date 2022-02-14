
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtnet_info {int node; int node_dead; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int *) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_2(struct virtnet_info *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_0(VAR_1, &VAR_2->node);
 if (VAR_3)
  return VAR_3;
 VAR_3 = FUNC_0(VAR_0,
            &VAR_2->node_dead);
 if (!VAR_3)
  return VAR_3;
 FUNC_1(VAR_1, &VAR_2->node);
 return VAR_3;
}
