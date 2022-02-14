
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qtnf_shm_ipc {int (* irq_handler ) (struct qtnf_shm_ipc*) ;} ;


 int FUNC_0 (struct qtnf_shm_ipc*) ;

__attribute__((used)) static inline void FUNC_1(struct qtnf_shm_ipc *VAR_0)
{
 VAR_0->irq_handler(VAR_0);
}
