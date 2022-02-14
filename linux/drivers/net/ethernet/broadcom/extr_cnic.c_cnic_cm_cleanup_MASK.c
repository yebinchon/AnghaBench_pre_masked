
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cnic_sock {scalar_t__ src_port; struct cnic_dev* dev; } ;
struct cnic_local {int csk_port_tbl; } ;
struct cnic_dev {struct cnic_local* cnic_priv; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static void FUNC_2(struct cnic_sock *VAR_0)
{
 if (VAR_0->src_port) {
  struct cnic_dev *VAR_1 = VAR_0->dev;
  struct cnic_local *VAR_2 = VAR_1->cnic_priv;

  FUNC_1(&VAR_2->csk_port_tbl, FUNC_0(VAR_0->src_port));
  VAR_0->src_port = 0;
 }
}
