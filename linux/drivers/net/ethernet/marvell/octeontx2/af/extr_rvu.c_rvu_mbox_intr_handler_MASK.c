
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct rvu {int vfs; int afvf_wq_info; TYPE_1__* hw; int afpf_wq_info; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int total_pfs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (int *,int,int,int ) ;
 int FUNC_3 (struct rvu*,int ,int ) ;
 int FUNC_4 (struct rvu*,int ,int ,int ) ;
 int FUNC_5 (struct rvu*,int ) ;
 int FUNC_6 (struct rvu*,int ,int ) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_3, void *VAR_4)
{
 struct rvu *VAR_5 = (struct rvu *)VAR_4;
 int VAR_6 = VAR_5->vfs;
 u64 VAR_7;

 VAR_7 = FUNC_3(VAR_5, VAR_0, VAR_2);

 FUNC_4(VAR_5, VAR_0, VAR_2, VAR_7);


 FUNC_1();

 FUNC_2(&VAR_5->afpf_wq_info, 0, VAR_5->hw->total_pfs, VAR_7);


 if (VAR_6 > 64) {
  VAR_7 = FUNC_5(VAR_5, FUNC_0(1));
  FUNC_6(VAR_5, FUNC_0(1), VAR_7);

  FUNC_2(&VAR_5->afvf_wq_info, 64, VAR_6, VAR_7);
  VAR_6 -= 64;
 }

 VAR_7 = FUNC_5(VAR_5, FUNC_0(0));
 FUNC_6(VAR_5, FUNC_0(0), VAR_7);

 FUNC_2(&VAR_5->afvf_wq_info, 0, VAR_6, VAR_7);

 return VAR_1;
}
