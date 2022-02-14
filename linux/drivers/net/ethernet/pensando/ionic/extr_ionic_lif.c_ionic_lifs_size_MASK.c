
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


union ionic_lif_config {int * queue_count; } ;
struct TYPE_8__ {int qid_count; } ;
struct TYPE_9__ {TYPE_3__ eq_qtype; } ;
struct TYPE_6__ {union ionic_lif_config config; } ;
struct TYPE_10__ {TYPE_4__ rdma; TYPE_1__ eth; } ;
struct TYPE_7__ {int nintrs; } ;
struct ionic_identity {TYPE_5__ lif; TYPE_2__ dev; } ;
struct ionic {unsigned int nnqs_per_lif; unsigned int neqs_per_lif; unsigned int ntxqs_per_lif; unsigned int nrxqs_per_lif; unsigned int nintrs; int dev; struct ionic_identity ident; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (int ,char*,unsigned int) ;
 int FUNC_1 (struct ionic*,unsigned int) ;
 int FUNC_2 (struct ionic*) ;
 int FUNC_3 (struct ionic*) ;
 unsigned int FUNC_4 (int ) ;
 unsigned int FUNC_5 (unsigned int,unsigned int) ;
 unsigned int FUNC_6 () ;

int FUNC_7(struct ionic *VAR_4)
{
 struct ionic_identity *VAR_5 = &VAR_4->ident;
 unsigned int VAR_6, VAR_7;
 union ionic_lif_config *VAR_8;
 unsigned int VAR_9;
 unsigned int VAR_10;
 unsigned int VAR_11;
 unsigned int VAR_12;
 unsigned int VAR_13, VAR_14;
 unsigned int VAR_15;
 int VAR_16;

 VAR_8 = &VAR_5->lif.eth.config;
 VAR_7 = FUNC_4(VAR_5->dev.nintrs);
 VAR_11 = FUNC_4(VAR_5->lif.rdma.eq_qtype.qid_count);
 VAR_12 = FUNC_4(VAR_8->queue_count[VAR_1]);
 VAR_9 = FUNC_4(VAR_8->queue_count[VAR_3]);
 VAR_10 = FUNC_4(VAR_8->queue_count[VAR_2]);

 VAR_13 = FUNC_5(VAR_9, VAR_10);
 VAR_13 = FUNC_5(VAR_13, FUNC_6());
 VAR_14 = FUNC_5(VAR_11, FUNC_6());

try_again:





 VAR_6 = 1 + VAR_13 + VAR_14;
 VAR_15 = 2;

 if (VAR_6 > VAR_7)
  goto try_fewer;

 VAR_16 = FUNC_1(VAR_4, VAR_6);
 if (VAR_16 < 0 && VAR_16 != -VAR_0) {
  FUNC_0(VAR_4->dev, "Can't get intrs from OS: %d\n", VAR_16);
  return VAR_16;
 }
 if (VAR_16 == -VAR_0)
  goto try_fewer;

 if (VAR_16 != VAR_6) {
  FUNC_2(VAR_4);
  goto try_fewer;
 }

 VAR_4->nnqs_per_lif = VAR_12;
 VAR_4->neqs_per_lif = VAR_14;
 VAR_4->ntxqs_per_lif = VAR_13;
 VAR_4->nrxqs_per_lif = VAR_13;
 VAR_4->nintrs = VAR_6;

 FUNC_3(VAR_4);

 return 0;

try_fewer:
 if (VAR_12 > 1) {
  VAR_12 >>= 1;
  goto try_again;
 }
 if (VAR_14 > 1) {
  VAR_14 >>= 1;
  goto try_again;
 }
 if (VAR_13 > 1) {
  VAR_13 >>= 1;
  goto try_again;
 }
 FUNC_0(VAR_4->dev, "Can't get minimum %d intrs from OS\n", VAR_15);
 return -VAR_0;
}
