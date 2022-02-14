
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct fman {TYPE_1__* intr_mng; } ;
typedef enum fman_intr_type { ____Placeholder_fman_intr_type } fman_intr_type ;
typedef enum fman_event_modules { ____Placeholder_fman_event_modules } fman_event_modules ;
struct TYPE_2__ {int * src_handle; int * isr_cb; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int ,int) ;

void FUNC_2(struct fman *VAR_1, enum fman_event_modules VAR_2,
     u8 VAR_3, enum fman_intr_type VAR_4)
{
 int VAR_5 = 0;

 VAR_5 = FUNC_1(VAR_2, VAR_3, VAR_4);
 FUNC_0(VAR_5 >= VAR_0);

 VAR_1->intr_mng[VAR_5].isr_cb = ((void*)0);
 VAR_1->intr_mng[VAR_5].src_handle = ((void*)0);
}
