
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct pnp_dev_node_info {int no_nodes; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ,int,int ,int ,int ,int ,struct pnp_dev_node_info*,int,int *,int ) ;
 int FUNC_1 () ;

__attribute__((used)) static int FUNC_2(struct pnp_dev_node_info *VAR_4)
{
 u16 VAR_5;

 if (!FUNC_1())
  return VAR_1;
 VAR_5 = FUNC_0(VAR_2, 0, VAR_3, 2,
          VAR_3, VAR_0, 0, 0, VAR_4,
          sizeof(struct pnp_dev_node_info), ((void*)0), 0);
 VAR_4->no_nodes &= 0xff;
 return VAR_5;
}
