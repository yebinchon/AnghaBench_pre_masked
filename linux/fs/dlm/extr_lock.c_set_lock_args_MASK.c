
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct dlm_lksb {int sb_lkid; int sb_lvbptr; } ;
struct dlm_args {int flags; void (* astfn ) (void*) ;void (* bastfn ) (void*,int) ;unsigned long timeout; int mode; struct dlm_lksb* lksb; void* astparam; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static int FUNC_0(int VAR_11, struct dlm_lksb *VAR_12, uint32_t VAR_13,
    int VAR_14, unsigned long VAR_15,
    void (*VAR_16) (void *VAR_17),
    void *VAR_18,
    void (*VAR_19) (void *VAR_20, int VAR_21),
    struct dlm_args *VAR_22)
{
 int VAR_23 = -VAR_10;



 if (VAR_11 < 0 || VAR_11 > VAR_7)
  goto out;

 if (!(VAR_13 & VAR_2) && (VAR_14 > VAR_9))
  goto out;

 if (VAR_13 & VAR_0)
  goto out;

 if (VAR_13 & VAR_5 && !(VAR_13 & VAR_2))
  goto out;

 if (VAR_13 & VAR_1 && !(VAR_13 & VAR_2))
  goto out;

 if (VAR_13 & VAR_1 && VAR_13 & VAR_4)
  goto out;

 if (VAR_13 & VAR_3 && VAR_13 & VAR_2)
  goto out;

 if (VAR_13 & VAR_3 && VAR_13 & VAR_5)
  goto out;

 if (VAR_13 & VAR_3 && VAR_13 & VAR_4)
  goto out;

 if (VAR_13 & VAR_3 && VAR_11 != VAR_8)
  goto out;

 if (!VAR_16 || !VAR_12)
  goto out;

 if (VAR_13 & VAR_6 && !VAR_12->sb_lvbptr)
  goto out;

 if (VAR_13 & VAR_2 && !VAR_12->sb_lkid)
  goto out;





 VAR_22->flags = VAR_13;
 VAR_22->astfn = VAR_16;
 VAR_22->astparam = VAR_18;
 VAR_22->bastfn = VAR_19;
 VAR_22->timeout = VAR_15;
 VAR_22->mode = VAR_11;
 VAR_22->lksb = VAR_12;
 VAR_23 = 0;
 out:
 return VAR_23;
}
