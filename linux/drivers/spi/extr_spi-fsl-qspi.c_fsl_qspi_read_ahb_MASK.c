
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int in; } ;
struct TYPE_6__ {int nbytes; TYPE_1__ buf; } ;
struct spi_mem_op {TYPE_3__ data; } ;
struct fsl_qspi {int selected; TYPE_2__* devtype_data; scalar_t__ ahb_addr; } ;
struct TYPE_5__ {int ahb_buf_size; } ;


 int FUNC_0 (int ,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_1(struct fsl_qspi *VAR_0, const struct spi_mem_op *VAR_1)
{
 FUNC_0(VAR_1->data.buf.in,
        VAR_0->ahb_addr + VAR_0->selected * VAR_0->devtype_data->ahb_buf_size,
        VAR_1->data.nbytes);
}
