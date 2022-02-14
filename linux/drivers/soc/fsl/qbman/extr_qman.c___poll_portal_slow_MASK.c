
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct qman_portal {int mr_work; int p; int congestion_work; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int VAR_4 ;
 int FUNC_2 (struct qman_portal*,int) ;
 int FUNC_3 (int ,int ,int *) ;
 int FUNC_4 () ;
 int FUNC_5 (int *) ;

__attribute__((used)) static u32 FUNC_6(struct qman_portal *VAR_5, u32 VAR_6)
{
 if (VAR_6 & VAR_0) {
  FUNC_2(VAR_5, VAR_0);
  FUNC_3(FUNC_4(), VAR_4,
         &VAR_5->congestion_work);
 }

 if (VAR_6 & VAR_1) {
  FUNC_0(&VAR_5->p);
  FUNC_1(&VAR_5->p, 0);
  FUNC_5(&VAR_3);
 }

 if (VAR_6 & VAR_2) {
  FUNC_2(VAR_5, VAR_2);
  FUNC_3(FUNC_4(), VAR_4,
         &VAR_5->mr_work);
 }

 return VAR_6;
}
