
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct qede_fastpath {int type; int name; } ;
struct TYPE_6__ {int msix_cnt; int used_cnt; TYPE_2__* msix; } ;
struct qede_dev {TYPE_3__ int_info; struct qede_fastpath* fp_array; TYPE_1__* ndev; } ;
struct TYPE_5__ {int vector; } ;
struct TYPE_4__ {scalar_t__ rx_cpu_rmap; } ;


 int FUNC_0 (struct qede_dev*,char*,...) ;
 int FUNC_1 (struct qede_dev*,int ,char*,int ,int,struct qede_fastpath*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct qede_dev*) ;
 int FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (struct qede_dev*) ;
 int VAR_3 ;
 int FUNC_5 (struct qede_dev*) ;
 int FUNC_6 (int ,int ,int ,int ,struct qede_fastpath*) ;

__attribute__((used)) static int FUNC_7(struct qede_dev *VAR_4)
{
 int VAR_5, VAR_6;


 if (FUNC_2(VAR_4) > VAR_4->int_info.msix_cnt) {
  FUNC_0(VAR_4,
         "Interrupt mismatch: %d RSS queues > %d MSI-x vectors\n",
         FUNC_2(VAR_4), VAR_4->int_info.msix_cnt);
  return -VAR_0;
 }

 for (VAR_5 = 0; VAR_5 < FUNC_2(VAR_4); VAR_5++) {
  VAR_6 = FUNC_6(VAR_4->int_info.msix[VAR_5].vector,
     VAR_3, 0, VAR_4->fp_array[VAR_5].name,
     &VAR_4->fp_array[VAR_5]);
  if (VAR_6) {
   FUNC_0(VAR_4, "Request fp %d irq failed\n", VAR_5);
   FUNC_5(VAR_4);
   return VAR_6;
  }
  FUNC_1(VAR_4, VAR_1,
      "Requested fp irq for %s [entry %d]. Cookie is at %p\n",
      VAR_4->fp_array[VAR_5].name, VAR_5,
      &VAR_4->fp_array[VAR_5]);
  VAR_4->int_info.used_cnt++;
 }

 return 0;
}
