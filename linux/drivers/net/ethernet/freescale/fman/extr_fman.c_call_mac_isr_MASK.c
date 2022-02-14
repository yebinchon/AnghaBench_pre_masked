
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct fman {TYPE_1__* intr_mng; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int src_handle; int (* isr_cb ) (int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static inline irqreturn_t FUNC_1(struct fman *VAR_2, u8 VAR_3)
{
 if (VAR_2->intr_mng[VAR_3].isr_cb) {
  VAR_2->intr_mng[VAR_3].isr_cb(VAR_2->intr_mng[VAR_3].src_handle);

  return VAR_0;
 }

 return VAR_1;
}
