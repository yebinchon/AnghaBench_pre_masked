
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ionic_queue {TYPE_1__* head; } ;
typedef int ionic_desc_cb ;
struct TYPE_2__ {int desc; } ;


 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (struct ionic_queue*,int,int ,void*) ;
 int FUNC_2 (struct ionic_queue*) ;

__attribute__((used)) static inline void FUNC_3(struct ionic_queue *VAR_0, bool VAR_1,
      ionic_desc_cb VAR_2, void *VAR_3)
{
 FUNC_0(FUNC_2(VAR_0), VAR_0->head->desc, VAR_1);

 FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3);
}
