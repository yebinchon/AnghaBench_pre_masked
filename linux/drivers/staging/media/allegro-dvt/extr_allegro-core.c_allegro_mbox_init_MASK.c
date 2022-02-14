
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct allegro_mbox {unsigned int head; unsigned int tail; unsigned int data; size_t size; int lock; } ;
struct allegro_dev {int sram; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,unsigned int,int ) ;

__attribute__((used)) static int FUNC_2(struct allegro_dev *VAR_1,
        struct allegro_mbox *VAR_2,
        unsigned int VAR_3, size_t VAR_4)
{
 if (!VAR_2)
  return -VAR_0;

 VAR_2->head = VAR_3;
 VAR_2->tail = VAR_3 + 0x4;
 VAR_2->data = VAR_3 + 0x8;
 VAR_2->size = VAR_4;
 FUNC_0(&VAR_2->lock);

 FUNC_1(VAR_1->sram, VAR_2->head, 0);
 FUNC_1(VAR_1->sram, VAR_2->tail, 0);

 return 0;
}
