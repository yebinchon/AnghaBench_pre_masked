
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct ti_qspi {scalar_t__ mmap_size; scalar_t__ mmap_base; int list_lock; scalar_t__ rx_chan; int mmap_enabled; } ;
struct TYPE_11__ {int in; } ;
struct TYPE_12__ {scalar_t__ nbytes; scalar_t__ dir; TYPE_4__ buf; int buswidth; } ;
struct TYPE_10__ {int nbytes; } ;
struct TYPE_9__ {int nbytes; scalar_t__ val; } ;
struct TYPE_8__ {int opcode; } ;
struct spi_mem_op {TYPE_5__ data; TYPE_3__ dummy; TYPE_2__ addr; TYPE_1__ cmd; } ;
struct spi_mem {TYPE_6__* spi; } ;
struct sg_table {int dummy; } ;
struct TYPE_13__ {int master; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,scalar_t__,scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,struct spi_mem_op const*,struct sg_table*) ;
 int FUNC_4 (int ,struct spi_mem_op const*,struct sg_table*) ;
 struct ti_qspi* FUNC_5 (int ) ;
 int FUNC_6 (struct ti_qspi*,scalar_t__,int ,scalar_t__) ;
 int FUNC_7 (struct ti_qspi*,struct sg_table,scalar_t__) ;
 int FUNC_8 (TYPE_6__*) ;
 int FUNC_9 (TYPE_6__*,int ,int ,int,int ) ;
 scalar_t__ FUNC_10 (int ) ;

__attribute__((used)) static int FUNC_11(struct spi_mem *VAR_2,
          const struct spi_mem_op *VAR_3)
{
 struct ti_qspi *VAR_4 = FUNC_5(VAR_2->spi->master);
 u32 VAR_5 = 0;
 int VAR_6 = 0;


 if (!VAR_3->data.nbytes || VAR_3->data.dir != VAR_1 ||
     !VAR_3->addr.nbytes || VAR_3->addr.nbytes > 4)
  return -VAR_0;


 VAR_5 = VAR_3->addr.val;
 if (VAR_5 + VAR_3->data.nbytes > VAR_4->mmap_size)
  return -VAR_0;

 FUNC_1(&VAR_4->list_lock);

 if (!VAR_4->mmap_enabled)
  FUNC_8(VAR_2->spi);
 FUNC_9(VAR_2->spi, VAR_3->cmd.opcode, VAR_3->data.buswidth,
    VAR_3->addr.nbytes, VAR_3->dummy.nbytes);

 if (VAR_4->rx_chan) {
  struct sg_table VAR_7;

  if (FUNC_10(VAR_3->data.buf.in) &&
      !FUNC_3(VAR_2->spi->master, VAR_3,
       &VAR_7)) {
   VAR_6 = FUNC_7(VAR_4, VAR_7, VAR_5);
   FUNC_4(VAR_2->spi->master,
            VAR_3, &VAR_7);
  } else {
   VAR_6 = FUNC_6(VAR_4, VAR_5,
       VAR_3->data.buf.in,
       VAR_3->data.nbytes);
  }
 } else {
  FUNC_0(VAR_3->data.buf.in, VAR_4->mmap_base + VAR_5,
         VAR_3->data.nbytes);
 }

 FUNC_2(&VAR_4->list_lock);

 return VAR_6;
}
