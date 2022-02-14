
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct qman_portal {int dummy; } ;
struct qman_fq {scalar_t__ state; int fqid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (struct qman_fq*,int ) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_1 (struct qman_portal**,struct qman_fq*,int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (struct qman_portal**,struct qman_fq*,int,int) ;

int FUNC_5(struct qman_fq *VAR_10, u32 VAR_11, u32 VAR_12)
{
 struct qman_portal *VAR_13;
 int VAR_14;

 if (VAR_10->state != VAR_8 &&
     VAR_10->state != VAR_9)
  return -VAR_1;
 if (VAR_12 & VAR_6)
  return -VAR_1;
 if (FUNC_0(VAR_10, VAR_2))
  return -VAR_0;
 VAR_12 = (VAR_12 & ~VAR_6) | VAR_10->fqid;
 if (VAR_11 & VAR_4)
  VAR_14 = FUNC_4(&VAR_13, VAR_10, VAR_12, VAR_11);
 else
  VAR_14 = FUNC_1(&VAR_13, VAR_10, VAR_12);
 if (VAR_14)
  return VAR_14;

 if (VAR_11 & VAR_3) {
  if (VAR_11 & VAR_5)






   FUNC_3(VAR_7,
    !FUNC_0(VAR_10, VAR_2));
  else
   FUNC_2(VAR_7,
    !FUNC_0(VAR_10, VAR_2));
 }
 return 0;
}
