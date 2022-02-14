
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ addr; } ;
struct TYPE_4__ {TYPE_1__ buf; } ;
struct efx_tx_queue {TYPE_2__ txd; scalar_t__ buffer; } ;
typedef int efx_qword_t ;


 unsigned int FUNC_0 (struct efx_tx_queue*) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static inline void FUNC_2(struct efx_tx_queue *VAR_0)
{
 unsigned int VAR_1 = FUNC_0(VAR_0);
 char *VAR_2;

 VAR_2 = (char *) (VAR_0->buffer + VAR_1);
 FUNC_1(VAR_2);
 FUNC_1(VAR_2 + 0x80);

 VAR_2 = (char *) (((efx_qword_t *)VAR_0->txd.buf.addr) + VAR_1);
 FUNC_1(VAR_2);
 FUNC_1(VAR_2 + 0x80);
}
