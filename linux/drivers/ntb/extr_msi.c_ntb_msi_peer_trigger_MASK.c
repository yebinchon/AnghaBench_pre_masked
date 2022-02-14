
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ntb_msi_desc {int addr_offset; int data; } ;
struct ntb_dev {TYPE_1__* msi; } ;
struct TYPE_2__ {int ** peer_mws; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;

int FUNC_1(struct ntb_dev *VAR_1, int VAR_2,
    struct ntb_msi_desc *VAR_3)
{
 int VAR_4;

 if (!VAR_1->msi)
  return -VAR_0;

 VAR_4 = VAR_3->addr_offset / sizeof(*VAR_1->msi->peer_mws[VAR_2]);

 FUNC_0(VAR_3->data, &VAR_1->msi->peer_mws[VAR_2][VAR_4]);

 return 0;
}
