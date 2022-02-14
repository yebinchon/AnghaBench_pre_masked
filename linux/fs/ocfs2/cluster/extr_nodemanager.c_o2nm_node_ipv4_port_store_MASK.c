
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u16 ;
struct o2nm_node {int nd_ipv4_port; int nd_set_attributes; } ;
struct config_item {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (unsigned long) ;
 unsigned long FUNC_1 (char*,char**,int ) ;
 scalar_t__ FUNC_2 (int ,int *) ;
 struct o2nm_node* FUNC_3 (struct config_item*) ;

__attribute__((used)) static ssize_t FUNC_4(struct config_item *VAR_4,
      const char *VAR_5, size_t VAR_6)
{
 struct o2nm_node *VAR_7 = FUNC_3(VAR_4);
 unsigned long VAR_8;
 char *VAR_9 = (char *)VAR_5;

 VAR_8 = FUNC_1(VAR_9, &VAR_9, 0);
 if (!VAR_9 || (*VAR_9 && (*VAR_9 != '\n')))
  return -VAR_1;

 if (VAR_8 == 0)
  return -VAR_1;
 if (VAR_8 >= (u16)-1)
  return -VAR_2;

 if (FUNC_2(VAR_3, &VAR_7->nd_set_attributes))
  return -VAR_0;
 VAR_7->nd_ipv4_port = FUNC_0(VAR_8);

 return VAR_6;
}
