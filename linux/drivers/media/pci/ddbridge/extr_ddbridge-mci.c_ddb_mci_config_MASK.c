
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct mci {TYPE_1__* base; } ;
struct TYPE_4__ {int device; } ;
struct ddb_link {TYPE_2__ ids; } ;
struct TYPE_3__ {struct ddb_link* link; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ddb_link*,int ,int ) ;

int FUNC_1(struct mci *VAR_2, u32 VAR_3)
{
 struct ddb_link *VAR_4 = VAR_2->base->link;

 if (VAR_4->ids.device != 0x0009)
  return -VAR_0;
 FUNC_0(VAR_4, VAR_3, VAR_1);
 return 0;
}
