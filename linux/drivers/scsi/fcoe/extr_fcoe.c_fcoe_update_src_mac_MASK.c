
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct fcoe_port {int * data_src_addr; struct fcoe_interface* priv; } ;
struct fcoe_interface {int netdev; } ;
struct fc_lport {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *) ;
 struct fcoe_port* FUNC_3 (struct fc_lport*) ;
 int FUNC_4 (int *,int *,int ) ;

__attribute__((used)) static void FUNC_5(struct fc_lport *VAR_1, u8 *VAR_2)
{
 struct fcoe_port *VAR_3 = FUNC_3(VAR_1);
 struct fcoe_interface *VAR_4 = VAR_3->priv;

 if (!FUNC_2(VAR_3->data_src_addr))
  FUNC_1(VAR_4->netdev, VAR_3->data_src_addr);
 if (!FUNC_2(VAR_2))
  FUNC_0(VAR_4->netdev, VAR_2);
 FUNC_4(VAR_3->data_src_addr, VAR_2, VAR_0);
}
