
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct bnxt_vf_info {int mac_addr; } ;
struct TYPE_3__ {int mac_addr; } ;
struct bnxt {TYPE_2__* dev; struct bnxt_vf_info vf; TYPE_1__ pf; } ;
struct TYPE_4__ {int dev_addr; } ;


 scalar_t__ FUNC_0 (struct bnxt*) ;
 int VAR_0 ;
 int FUNC_1 (struct bnxt*,int ,int) ;
 int FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct bnxt *VAR_1)
{
 int VAR_2 = 0;

 if (FUNC_0(VAR_1)) {
  FUNC_4(VAR_1->dev->dev_addr, VAR_1->pf.mac_addr, VAR_0);
 } else {
 }
 return VAR_2;
}
