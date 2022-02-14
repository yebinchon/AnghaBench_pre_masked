
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct qman_portal {int dummy; } ;
struct qman_fq {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct qman_portal**,struct qman_fq*,int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static int FUNC_3(struct qman_portal **VAR_2, struct qman_fq *VAR_3,
    u32 VAR_4, u32 VAR_5)
{
 int VAR_6 = 0;

 if (VAR_5 & VAR_0)
  VAR_6 = FUNC_2(VAR_1,
    !FUNC_0(VAR_2, VAR_3, VAR_4));
 else
  FUNC_1(VAR_1, !FUNC_0(VAR_2, VAR_3, VAR_4));
 return VAR_6;
}
