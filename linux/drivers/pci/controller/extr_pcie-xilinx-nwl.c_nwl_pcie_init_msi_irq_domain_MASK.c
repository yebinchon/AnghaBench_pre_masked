
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nwl_msi {int dev_domain; int msi_domain; } ;
struct nwl_pcie {struct nwl_msi msi; struct device* dev; } ;
struct fwnode_handle {int dummy; } ;
struct device {int of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,char*) ;
 int VAR_2 ;
 int FUNC_1 (int *,int ,int *,struct nwl_pcie*) ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 struct fwnode_handle* FUNC_3 (int ) ;
 int FUNC_4 (struct fwnode_handle*,int *,int ) ;

__attribute__((used)) static int FUNC_5(struct nwl_pcie *VAR_4)
{
 return 0;
}
