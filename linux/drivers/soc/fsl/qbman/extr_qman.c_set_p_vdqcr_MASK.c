
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct qman_portal {int p; struct qman_fq* vdqcr_owned; } ;
struct qman_fq {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct qman_fq*,int ) ;
 int FUNC_1 (struct qman_fq*,int ) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (int *,int ) ;

__attribute__((used)) static int FUNC_5(struct qman_portal *VAR_2, struct qman_fq *VAR_3, u32 VAR_4)
{
 unsigned long VAR_5;
 int VAR_6 = -VAR_0;

 FUNC_3(VAR_5);
 if (VAR_2->vdqcr_owned)
  goto out;
 if (FUNC_0(VAR_3, VAR_1))
  goto out;

 FUNC_1(VAR_3, VAR_1);
 VAR_2->vdqcr_owned = VAR_3;
 FUNC_4(&VAR_2->p, VAR_4);
 VAR_6 = 0;
out:
 FUNC_2(VAR_5);
 return VAR_6;
}
