
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct gfs2_trans {int tr_flags; } ;
struct gfs2_sbd {int sd_flags; } ;
struct TYPE_3__ {struct gfs2_sbd* ln_sbd; } ;
struct gfs2_glock {TYPE_1__ gl_name; } ;
struct buffer_head {void* b_end_io; } ;
struct TYPE_4__ {struct gfs2_trans* journal_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct buffer_head*) ;
 scalar_t__ FUNC_1 (struct buffer_head*) ;
 TYPE_2__* VAR_8 ;
 void* VAR_9 ;
 int FUNC_2 (struct buffer_head*) ;
 struct buffer_head* FUNC_3 (struct gfs2_glock*,scalar_t__,int ) ;
 int FUNC_4 (struct gfs2_sbd*,struct buffer_head*) ;
 int FUNC_5 (int ,int,struct buffer_head**,int) ;
 int FUNC_6 (struct buffer_head*) ;
 int FUNC_7 (int ,int *) ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 (struct buffer_head*) ;
 int FUNC_10 (struct buffer_head*) ;

int FUNC_11(struct gfs2_glock *VAR_10, u64 VAR_11, int VAR_12,
     int VAR_13, struct buffer_head **VAR_14)
{
 struct gfs2_sbd *VAR_15 = VAR_10->gl_name.ln_sbd;
 struct buffer_head *VAR_16, *VAR_17[2];
 int VAR_18 = 0;

 if (FUNC_8(FUNC_7(VAR_6, &VAR_15->sd_flags))) {
  *VAR_14 = ((void*)0);
  return -VAR_2;
 }

 *VAR_14 = VAR_16 = FUNC_3(VAR_10, VAR_11, VAR_0);

 FUNC_6(VAR_16);
 if (FUNC_1(VAR_16)) {
  FUNC_9(VAR_16);
  VAR_12 &= ~VAR_1;
 } else {
  VAR_16->b_end_io = VAR_9;
  FUNC_2(VAR_16);
  VAR_17[VAR_18++] = VAR_16;
 }

 if (VAR_13) {
  VAR_16 = FUNC_3(VAR_10, VAR_11 + 1, VAR_0);

  FUNC_6(VAR_16);
  if (FUNC_1(VAR_16)) {
   FUNC_9(VAR_16);
   FUNC_0(VAR_16);
  } else {
   VAR_16->b_end_io = VAR_9;
   VAR_17[VAR_18++] = VAR_16;
  }
 }

 FUNC_5(VAR_4, VAR_3 | VAR_5, VAR_17, VAR_18);
 if (!(VAR_12 & VAR_1))
  return 0;

 VAR_16 = *VAR_14;
 FUNC_10(VAR_16);
 if (FUNC_8(!FUNC_1(VAR_16))) {
  struct gfs2_trans *VAR_19 = VAR_8->journal_info;
  if (VAR_19 && FUNC_7(VAR_7, &VAR_19->tr_flags))
   FUNC_4(VAR_15, VAR_16);
  FUNC_0(VAR_16);
  *VAR_14 = ((void*)0);
  return -VAR_2;
 }

 return 0;
}
