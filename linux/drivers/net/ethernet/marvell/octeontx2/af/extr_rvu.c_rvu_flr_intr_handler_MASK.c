
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned long long u8 ;
typedef unsigned long long u64 ;
struct rvu {int vfs; TYPE_2__* flr_wrk; int flr_wq; TYPE_1__* hw; } ;
typedef int irqreturn_t ;
struct TYPE_4__ {int work; } ;
struct TYPE_3__ {unsigned long long total_pfs; } ;


 int FUNC_0 (unsigned long long) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct rvu*,int,int) ;
 unsigned long long FUNC_3 (struct rvu*,int ,int ) ;
 int FUNC_4 (struct rvu*,int ,int ,int ) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_4, void *VAR_5)
{
 struct rvu *VAR_6 = (struct rvu *)VAR_5;
 u64 VAR_7;
 u8 VAR_8;

 VAR_7 = FUNC_3(VAR_6, VAR_0, VAR_2);
 if (!VAR_7)
  goto afvf_flr;

 for (VAR_8 = 0; VAR_8 < VAR_6->hw->total_pfs; VAR_8++) {
  if (VAR_7 & (1ULL << VAR_8)) {

   FUNC_1(VAR_6->flr_wq, &VAR_6->flr_wrk[VAR_8].work);

   FUNC_4(VAR_6, VAR_0, VAR_2,
        FUNC_0(VAR_8));

   FUNC_4(VAR_6, VAR_0, VAR_3,
        FUNC_0(VAR_8));
  }
 }

afvf_flr:
 FUNC_2(VAR_6, 0, 64);
 if (VAR_6->vfs > 64)
  FUNC_2(VAR_6, 64, VAR_6->vfs - 64);

 return VAR_1;
}
