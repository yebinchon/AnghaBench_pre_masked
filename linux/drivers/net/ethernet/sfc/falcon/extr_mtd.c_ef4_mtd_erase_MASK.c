
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mtd_info {struct ef4_nic* priv; } ;
struct erase_info {int len; int addr; } ;
struct ef4_nic {TYPE_1__* type; } ;
struct TYPE_2__ {int (* mtd_erase ) (struct mtd_info*,int ,int ) ;} ;


 int FUNC_0 (struct mtd_info*,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct mtd_info *VAR_0, struct erase_info *VAR_1)
{
 struct ef4_nic *VAR_2 = VAR_0->priv;

 return VAR_2->type->mtd_erase(VAR_0, VAR_1->addr, VAR_1->len);
}
