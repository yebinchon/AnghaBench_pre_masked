
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dlm_rsb {int dummy; } ;
struct dlm_lkb {scalar_t__ lkb_rqmode; scalar_t__ lkb_grmode; int lkb_exflags; int lkb_sbflags; int lkb_id; } ;
typedef scalar_t__ int8_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct dlm_rsb*,struct dlm_lkb*,int,int) ;
 scalar_t__ FUNC_1 (struct dlm_lkb*) ;
 scalar_t__ FUNC_2 (struct dlm_rsb*,struct dlm_lkb*) ;
 int FUNC_3 (struct dlm_rsb*) ;
 int FUNC_4 (char*,int ,int) ;

__attribute__((used)) static int FUNC_5(struct dlm_rsb *VAR_10, struct dlm_lkb *VAR_11, int VAR_12,
     int VAR_13, int *VAR_14)
{
 int VAR_15;
 int8_t VAR_16 = 0, VAR_17 = VAR_11->lkb_rqmode;
 int8_t VAR_18 = (VAR_11->lkb_grmode != VAR_4);

 if (VAR_14)
  *VAR_14 = 0;

 VAR_15 = FUNC_0(VAR_10, VAR_11, VAR_12, VAR_13);
 if (VAR_15)
  goto out;







 if (VAR_18 && FUNC_1(VAR_11) &&
     FUNC_2(VAR_10, VAR_11)) {
  if (VAR_11->lkb_exflags & VAR_2) {
   VAR_11->lkb_grmode = VAR_5;
   VAR_11->lkb_sbflags |= VAR_8;
  } else if (VAR_14) {
   *VAR_14 = -VAR_9;
  } else {
   FUNC_4("can_be_granted deadlock %x now %d",
      VAR_11->lkb_id, VAR_12);
   FUNC_3(VAR_10);
  }
  goto out;
 }
 if (VAR_17 != VAR_6 && (VAR_11->lkb_exflags & VAR_1))
  VAR_16 = VAR_6;
 else if (VAR_17 != VAR_3 && (VAR_11->lkb_exflags & VAR_0))
  VAR_16 = VAR_3;

 if (VAR_16) {
  VAR_11->lkb_rqmode = VAR_16;
  VAR_15 = FUNC_0(VAR_10, VAR_11, VAR_12, 0);
  if (VAR_15)
   VAR_11->lkb_sbflags |= VAR_7;
  else
   VAR_11->lkb_rqmode = VAR_17;
 }
 out:
 return VAR_15;
}
