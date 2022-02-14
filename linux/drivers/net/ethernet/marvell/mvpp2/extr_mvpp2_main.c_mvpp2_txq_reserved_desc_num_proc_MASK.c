
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mvpp2_txq_pcpu {int reserved_num; scalar_t__ count; } ;
struct mvpp2_tx_queue {int size; int pcpu; } ;
struct mvpp2_port {TYPE_1__* priv; } ;
struct TYPE_2__ {unsigned int nthreads; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 (struct mvpp2_port*,struct mvpp2_tx_queue*,int) ;
 struct mvpp2_txq_pcpu* FUNC_2 (int ,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct mvpp2_port *VAR_3,
         struct mvpp2_tx_queue *VAR_4,
         struct mvpp2_txq_pcpu *VAR_5,
         int VAR_6)
{
 int VAR_7, VAR_8;
 unsigned int VAR_9;

 if (VAR_5->reserved_num >= VAR_6)
  return 0;





 VAR_8 = 0;

 for (VAR_9 = 0; VAR_9 < VAR_3->priv->nthreads; VAR_9++) {
  struct mvpp2_txq_pcpu *VAR_10;

  VAR_10 = FUNC_2(VAR_4->pcpu, VAR_9);
  VAR_8 += VAR_10->count;
  VAR_8 += VAR_10->reserved_num;
 }

 VAR_7 = FUNC_0(VAR_1, VAR_6 - VAR_5->reserved_num);
 VAR_8 += VAR_7;

 if (VAR_8 >
    (VAR_4->size - (VAR_2 * VAR_1)))
  return -VAR_0;

 VAR_5->reserved_num += FUNC_1(VAR_3, VAR_4, VAR_7);


 if (VAR_5->reserved_num < VAR_6)
  return -VAR_0;
 return 0;
}
