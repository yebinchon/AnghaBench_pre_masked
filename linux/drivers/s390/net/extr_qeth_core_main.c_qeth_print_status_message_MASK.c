
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int type; int* mcl_level; } ;
struct qeth_card {TYPE_2__ info; TYPE_1__* gdev; } ;
typedef size_t __u8 ;
struct TYPE_3__ {int dev; } ;


 int FUNC_0 (struct qeth_card*) ;




 size_t VAR_0 ;
 scalar_t__* VAR_1 ;
 int FUNC_1 (int *,char*,int ,char*,char*,char*,int ) ;
 int FUNC_2 (char*,int ,int ) ;
 int FUNC_3 (struct qeth_card*) ;
 int FUNC_4 (struct qeth_card*) ;
 int FUNC_5 (int*,char*,int,int) ;

void FUNC_6(struct qeth_card *VAR_2)
{
 switch (VAR_2->info.type) {
 case 130:
 case 129:
 case 128:




  if (!VAR_2->info.mcl_level[0]) {
   FUNC_5(VAR_2->info.mcl_level, "%02x%02x",
    VAR_2->info.mcl_level[2],
    VAR_2->info.mcl_level[3]);
   break;
  }

 case 131:
  if (FUNC_0(VAR_2) || (VAR_2->info.mcl_level[0] & 0x80)) {
   VAR_2->info.mcl_level[0] = (char) VAR_1[(__u8)
    VAR_2->info.mcl_level[0]];
   VAR_2->info.mcl_level[1] = (char) VAR_1[(__u8)
    VAR_2->info.mcl_level[1]];
   VAR_2->info.mcl_level[2] = (char) VAR_1[(__u8)
    VAR_2->info.mcl_level[2]];
   VAR_2->info.mcl_level[3] = (char) VAR_1[(__u8)
    VAR_2->info.mcl_level[3]];
   VAR_2->info.mcl_level[VAR_0] = 0;
  }
  break;
 default:
  FUNC_2(&VAR_2->info.mcl_level[0], 0, VAR_0 + 1);
 }
 FUNC_1(&VAR_2->gdev->dev,
   "Device is a%s card%s%s%s\nwith link type %s.\n",
   FUNC_3(VAR_2),
   (VAR_2->info.mcl_level[0]) ? " (level: " : "",
   (VAR_2->info.mcl_level[0]) ? VAR_2->info.mcl_level : "",
   (VAR_2->info.mcl_level[0]) ? ")" : "",
   FUNC_4(VAR_2));
}
