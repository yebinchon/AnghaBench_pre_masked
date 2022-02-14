
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_7__ {int lock; } ;
struct TYPE_6__ {size_t pidx; int * desc; } ;
struct sge_uld_txq {TYPE_3__ sendq; TYPE_1__ q; int adap; scalar_t__ service_ofldq_running; scalar_t__ full; } ;
struct fw_wr_hdr {int dummy; } ;


 int FUNC_0 (unsigned int,int) ;
 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,TYPE_1__*,unsigned int) ;
 unsigned int FUNC_3 (int ) ;
 int FUNC_4 (void const*,TYPE_1__*,int *,unsigned int) ;
 int FUNC_5 (struct sge_uld_txq*,struct fw_wr_hdr*) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (TYPE_1__*,unsigned int) ;
 unsigned int FUNC_10 (TYPE_1__*) ;
 scalar_t__ FUNC_11 (int) ;

__attribute__((used)) static int FUNC_12(struct sge_uld_txq *VAR_4, const void *VAR_5,
       unsigned int VAR_6)
{
 unsigned int VAR_7;
 int VAR_8;
 u64 *VAR_9;


 if (VAR_6 > VAR_0) {
  FUNC_1(1);
  return VAR_1;
 }





 if (!FUNC_7(&VAR_4->sendq.lock))
  return VAR_1;

 if (VAR_4->full || !FUNC_6(&VAR_4->sendq) ||
     VAR_4->service_ofldq_running) {
  FUNC_8(&VAR_4->sendq.lock);
  return VAR_1;
 }
 VAR_7 = FUNC_3(FUNC_0(VAR_6, 8));
 VAR_8 = FUNC_10(&VAR_4->q) - VAR_7;
 VAR_9 = (u64 *)&VAR_4->q.desc[VAR_4->q.pidx];


 FUNC_4(VAR_5, &VAR_4->q, VAR_9, VAR_6);
 if (FUNC_11(VAR_8 < VAR_3))
  FUNC_5(VAR_4, (struct fw_wr_hdr *)VAR_9);
 FUNC_9(&VAR_4->q, VAR_7);
 FUNC_2(VAR_4->adap, &VAR_4->q, VAR_7);

 FUNC_8(&VAR_4->sendq.lock);
 return VAR_2;
}
