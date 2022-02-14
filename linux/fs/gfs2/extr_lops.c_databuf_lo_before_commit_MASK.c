
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gfs2_trans {unsigned int tr_num_databuf_new; unsigned int tr_num_databuf_rm; int tr_databuf; } ;
struct gfs2_sbd {int dummy; } ;


 unsigned int FUNC_0 (struct gfs2_sbd*) ;
 int FUNC_1 (struct gfs2_sbd*,unsigned int,unsigned int,int *,int) ;

__attribute__((used)) static void FUNC_2(struct gfs2_sbd *VAR_0, struct gfs2_trans *VAR_1)
{
 unsigned int VAR_2 = FUNC_0(VAR_0);
 unsigned int VAR_3;
 if (VAR_1 == ((void*)0))
  return;
 VAR_3 = VAR_1->tr_num_databuf_new - VAR_1->tr_num_databuf_rm;
 FUNC_1(VAR_0, VAR_2, VAR_3, &VAR_1->tr_databuf, 1);
}
