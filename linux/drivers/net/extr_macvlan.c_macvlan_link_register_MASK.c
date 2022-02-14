
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtnl_link_ops {int fill_info; int get_size; int changelink; int policy; int maxtype; int validate; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct rtnl_link_ops*) ;

int FUNC_1(struct rtnl_link_ops *VAR_6)
{

 VAR_6->validate = VAR_5;
 VAR_6->maxtype = VAR_0;
 VAR_6->policy = VAR_4;
 VAR_6->changelink = VAR_1;
 VAR_6->get_size = VAR_3;
 VAR_6->fill_info = VAR_2;

 return FUNC_0(VAR_6);
}
