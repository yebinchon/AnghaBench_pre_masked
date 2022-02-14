
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct nic {int cmd_lock; TYPE_2__* csr; } ;
typedef int dma_addr_t ;
struct TYPE_3__ {int cmd_lo; int gen_ptr; } ;
struct TYPE_4__ {TYPE_1__ scb; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (scalar_t__,int *) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int) ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static int FUNC_9(struct nic *VAR_4, u8 VAR_5, dma_addr_t VAR_6)
{
 unsigned long VAR_7;
 unsigned int VAR_8;
 int VAR_9 = 0;

 FUNC_5(&VAR_4->cmd_lock, VAR_7);


 for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++) {
  if (FUNC_4(!FUNC_1(&VAR_4->csr->scb.cmd_lo)))
   break;
  FUNC_0();
  if (FUNC_8(VAR_8 > VAR_0))
   FUNC_7(5);
 }
 if (FUNC_8(VAR_8 == VAR_1)) {
  VAR_9 = -VAR_2;
  goto err_unlock;
 }

 if (FUNC_8(VAR_5 != VAR_3))
  FUNC_2(VAR_6, &VAR_4->csr->scb.gen_ptr);
 FUNC_3(VAR_5, &VAR_4->csr->scb.cmd_lo);

err_unlock:
 FUNC_6(&VAR_4->cmd_lock, VAR_7);

 return VAR_9;
}
