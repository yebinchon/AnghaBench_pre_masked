
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ubifs_pnode {int dummy; } ;
struct ubifs_nnode {TYPE_1__* nbranch; int num; } ;
struct ubifs_info {int dummy; } ;
struct ubifs_cnode {int num; int iip; scalar_t__ level; struct ubifs_nnode* parent; } ;
struct TYPE_2__ {struct ubifs_cnode* cnode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (struct ubifs_info*,struct ubifs_pnode*,int) ;
 int FUNC_2 (struct ubifs_info*) ;
 int FUNC_3 (struct ubifs_info*,int) ;
 int FUNC_4 (struct ubifs_info*,char*,int,int,int ,int) ;

int FUNC_5(struct ubifs_info *VAR_3, struct ubifs_cnode *VAR_4,
   int VAR_5, int VAR_6)
{
 struct ubifs_nnode *VAR_7, *VAR_8;
 struct ubifs_cnode *VAR_9;
 int VAR_10, VAR_11 = 0, VAR_12;

 if (!FUNC_2(VAR_3))
  return 0;

 while (VAR_4) {
  FUNC_3(VAR_3, VAR_5 >= 0);
  VAR_7 = VAR_4->parent;
  if (VAR_4->level) {

   VAR_10 = FUNC_0(VAR_5, VAR_6);
   if (VAR_4->num != VAR_10) {
    FUNC_4(VAR_3, "nnode num %d expected %d parent num %d iip %d",
       VAR_4->num, VAR_10,
       (VAR_7 ? VAR_7->num : 0), VAR_4->iip);
    return -VAR_0;
   }
   VAR_8 = (struct ubifs_nnode *)VAR_4;
   while (VAR_11 < VAR_1) {
    VAR_9 = VAR_8->nbranch[VAR_11].cnode;
    if (VAR_9) {

     VAR_5 += 1;
     VAR_6 <<= VAR_2;
     VAR_6 += VAR_11;
     VAR_11 = 0;
     VAR_4 = VAR_9;
     break;
    }

    VAR_11 += 1;
   }
   if (VAR_11 < VAR_1)
    continue;
  } else {
   struct ubifs_pnode *VAR_13;


   VAR_13 = (struct ubifs_pnode *)VAR_4;
   VAR_12 = FUNC_1(VAR_3, VAR_13, VAR_6);
   if (VAR_12)
    return VAR_12;
  }

  VAR_5 -= 1;
  VAR_6 >>= VAR_2;
  VAR_11 = VAR_4->iip + 1;
  VAR_4 = (struct ubifs_cnode *)VAR_7;
 }
 return 0;
}
