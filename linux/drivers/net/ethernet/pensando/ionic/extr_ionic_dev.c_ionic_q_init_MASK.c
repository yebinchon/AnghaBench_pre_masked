
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ionic_queue {unsigned int index; unsigned int num_descs; size_t desc_size; size_t sg_desc_size; unsigned int pid; struct ionic_desc_info* info; int name; struct ionic_desc_info* tail; struct ionic_desc_info* head; struct ionic_dev* idev; struct ionic_lif* lif; } ;
struct ionic_lif {int index; } ;
struct ionic_dev {int dummy; } ;
struct ionic_desc_info {unsigned int index; unsigned int left; struct ionic_desc_info* next; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (int ,int,char*,int,char const*,unsigned int) ;

int FUNC_3(struct ionic_lif *VAR_1, struct ionic_dev *VAR_2,
   struct ionic_queue *VAR_3, unsigned int VAR_4, const char *VAR_5,
   unsigned int VAR_6, size_t VAR_7,
   size_t VAR_8, unsigned int VAR_9)
{
 struct ionic_desc_info *VAR_10;
 unsigned int VAR_11;
 unsigned int VAR_12;

 if (VAR_7 == 0 || !FUNC_1(VAR_6))
  return -VAR_0;

 VAR_11 = FUNC_0(VAR_6);
 if (VAR_11 < 2 || VAR_11 > 16)
  return -VAR_0;

 VAR_3->lif = VAR_1;
 VAR_3->idev = VAR_2;
 VAR_3->index = VAR_4;
 VAR_3->num_descs = VAR_6;
 VAR_3->desc_size = VAR_7;
 VAR_3->sg_desc_size = VAR_8;
 VAR_3->tail = VAR_3->info;
 VAR_3->head = VAR_3->tail;
 VAR_3->pid = VAR_9;

 FUNC_2(VAR_3->name, sizeof(VAR_3->name), "L%d-%s%u", VAR_1->index, VAR_5, VAR_4);

 VAR_10 = VAR_3->info;

 for (VAR_12 = 0; VAR_12 < VAR_6; VAR_12++) {
  if (VAR_12 + 1 == VAR_6)
   VAR_10->next = VAR_3->info;
  else
   VAR_10->next = VAR_10 + 1;
  VAR_10->index = VAR_12;
  VAR_10->left = VAR_6 - VAR_12;
  VAR_10++;
 }

 return 0;
}
