
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hclge_vport {int last_active_jiffies; int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;

int FUNC_1(struct hclge_vport *VAR_2)
{
 FUNC_0(VAR_0, &VAR_2->state);
 VAR_2->last_active_jiffies = VAR_1;
 return 0;
}
