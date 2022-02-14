
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfp_port {int app; } ;
struct net_device {int dummy; } ;
typedef enum tc_setup_type { ____Placeholder_tc_setup_type } tc_setup_type ;


 int VAR_0 ;
 int FUNC_0 (int ,struct net_device*,int,void*) ;
 struct nfp_port* FUNC_1 (struct net_device*) ;

int FUNC_2(struct net_device *VAR_1, enum tc_setup_type VAR_2,
        void *VAR_3)
{
 struct nfp_port *VAR_4;

 VAR_4 = FUNC_1(VAR_1);
 if (!VAR_4)
  return -VAR_0;

 return FUNC_0(VAR_4->app, VAR_1, VAR_2, VAR_3);
}
