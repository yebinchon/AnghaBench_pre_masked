
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct qman_fq {int fqid; int flags; int idx; scalar_t__ cgr_groupid; int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*,int) ;
 int FUNC_1 (struct qman_fq*) ;
 struct qman_fq** VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int*) ;
 int VAR_5 ;

int FUNC_3(u32 VAR_6, u32 VAR_7, struct qman_fq *VAR_8)
{
 if (VAR_7 & VAR_1) {
  int VAR_9 = FUNC_2(&VAR_6);

  if (VAR_9)
   return VAR_9;
 }
 VAR_8->fqid = VAR_6;
 VAR_8->flags = VAR_7;
 VAR_8->state = VAR_5;
 VAR_8->cgr_groupid = 0;


 if (VAR_6 == 0 || VAR_6 >= VAR_4) {
  FUNC_0(1, "bad fqid %d\n", VAR_6);
  return -VAR_0;
 }

 VAR_8->idx = VAR_6 * 2;
 if (VAR_7 & VAR_2)
  VAR_8->idx++;

 FUNC_1(VAR_3[VAR_8->idx]);
 VAR_3[VAR_8->idx] = VAR_8;

 return 0;
}
