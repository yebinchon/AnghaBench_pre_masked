
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {struct list_head* next; } ;
struct TYPE_3__ {struct list_head* next; } ;
struct pnp_dev {int id; struct pnp_card* card; TYPE_2__ card_list; TYPE_1__ global_list; } ;
struct list_head {struct list_head* next; } ;
struct pnp_card {struct list_head devices; } ;


 unsigned short VAR_0 ;
 struct pnp_dev* FUNC_0 (struct list_head*) ;
 scalar_t__ FUNC_1 (int ,char*) ;
 struct pnp_dev* FUNC_2 (struct list_head*) ;
 scalar_t__ FUNC_3 (char*,char*,int) ;
 int FUNC_4 (char*,unsigned short,unsigned short) ;
 struct list_head VAR_1 ;

struct pnp_dev *FUNC_5(struct pnp_card *VAR_2, unsigned short VAR_3,
        unsigned short VAR_4, struct pnp_dev *VAR_5)
{
 char VAR_6[8];
 char VAR_7[8];

 FUNC_4(VAR_6, VAR_3, VAR_4);
 FUNC_4(VAR_7, VAR_0, VAR_0);
 if (VAR_2 == ((void*)0)) {
  struct list_head *VAR_8;

  VAR_8 = VAR_1.next;
  if (VAR_5)
   VAR_8 = VAR_5->global_list.next;

  while (VAR_8 != &VAR_1) {
   struct pnp_dev *VAR_9 = FUNC_2(VAR_8);

   if (FUNC_1(VAR_9->id, VAR_6) ||
       (FUNC_3(VAR_6, VAR_7, 7) == 0))
    return VAR_9;
   VAR_8 = VAR_8->next;
  }
 } else {
  struct list_head *VAR_10;

  VAR_10 = VAR_2->devices.next;
  if (VAR_5) {
   VAR_10 = VAR_5->card_list.next;
   if (VAR_5->card != VAR_2)
    return ((void*)0);
  }
  while (VAR_10 != &VAR_2->devices) {
   struct pnp_dev *VAR_11 = FUNC_0(VAR_10);

   if (FUNC_1(VAR_11->id, VAR_6))
    return VAR_11;
   VAR_10 = VAR_10->next;
  }
 }
 return ((void*)0);
}
