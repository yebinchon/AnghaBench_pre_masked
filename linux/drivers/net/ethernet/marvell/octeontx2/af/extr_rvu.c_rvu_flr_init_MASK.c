
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct rvu_work {int dummy; } ;
struct rvu {int flr_lock; TYPE_2__* flr_wrk; int flr_wq; int dev; int pdev; TYPE_1__* hw; } ;
struct TYPE_4__ {int work; struct rvu* rvu; } ;
struct TYPE_3__ {int total_pfs; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (char*,int,int) ;
 int FUNC_4 (int ) ;
 TYPE_2__* FUNC_5 (int ,int,int,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;
 int VAR_6 ;
 int FUNC_8 (struct rvu*,int ,int ) ;
 int FUNC_9 (struct rvu*,int ,int ,int) ;

__attribute__((used)) static int FUNC_10(struct rvu *VAR_7)
{
 int VAR_8, VAR_9;
 u64 VAR_10;
 int VAR_11;


 for (VAR_11 = 0; VAR_11 < VAR_7->hw->total_pfs; VAR_11++) {
  VAR_10 = FUNC_8(VAR_7, VAR_0, FUNC_2(VAR_11));
  FUNC_9(VAR_7, VAR_0, FUNC_2(VAR_11),
       VAR_10 | FUNC_0(22));
 }

 VAR_7->flr_wq = FUNC_3("rvu_afpf_flr",
          VAR_5 | VAR_3 | VAR_4,
           1);
 if (!VAR_7->flr_wq)
  return -VAR_1;

 VAR_9 = VAR_7->hw->total_pfs + FUNC_7(VAR_7->pdev);
 VAR_7->flr_wrk = FUNC_5(VAR_7->dev, VAR_9,
        sizeof(struct rvu_work), VAR_2);
 if (!VAR_7->flr_wrk) {
  FUNC_4(VAR_7->flr_wq);
  return -VAR_1;
 }

 for (VAR_8 = 0; VAR_8 < VAR_9; VAR_8++) {
  VAR_7->flr_wrk[VAR_8].rvu = VAR_7;
  FUNC_1(&VAR_7->flr_wrk[VAR_8].work, VAR_6);
 }

 FUNC_6(&VAR_7->flr_lock);

 return 0;
}
