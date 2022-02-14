
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
struct dlm_ls {int dummy; } ;
struct dlm_lkb {int lkb_id; TYPE_2__* lkb_callbacks; TYPE_1__* lkb_resource; } ;
struct TYPE_4__ {int flags; int mode; int sb_status; int sb_flags; scalar_t__ seq; } ;
struct TYPE_3__ {struct dlm_ls* res_ls; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct dlm_lkb*) ;
 int FUNC_1 (struct dlm_ls*,char*,int ,unsigned long long,int,unsigned long long,int) ;
 int FUNC_2 (struct dlm_ls*,char*,int ,unsigned long long,int,int,int,int) ;

int FUNC_3(struct dlm_lkb *VAR_3, uint32_t VAR_4, int VAR_5,
    int VAR_6, uint32_t VAR_7, uint64_t VAR_8)
{
 struct dlm_ls *VAR_9 = VAR_3->lkb_resource->res_ls;
 uint64_t VAR_10;
 int VAR_11;
 int VAR_12, VAR_13;

 for (VAR_12 = 0; VAR_12 < VAR_0; VAR_12++) {
  if (VAR_3->lkb_callbacks[VAR_12].seq)
   continue;
  if ((VAR_12 > 0) && (VAR_4 & VAR_1) &&
      (VAR_3->lkb_callbacks[VAR_12-1].flags & VAR_1)) {

   VAR_10 = VAR_3->lkb_callbacks[VAR_12-1].seq;
   VAR_11 = VAR_3->lkb_callbacks[VAR_12-1].mode;

   if ((VAR_11 == VAR_5) ||
       (VAR_11 > VAR_5 && VAR_11 > VAR_2)) {

    FUNC_1(VAR_9, "skip %x add bast %llu mode %d "
       "for bast %llu mode %d",
       VAR_3->lkb_id,
       (unsigned long long)VAR_8,
       VAR_5,
       (unsigned long long)VAR_10,
       VAR_11);
    VAR_13 = 0;
    goto out;
   }
  }

  VAR_3->lkb_callbacks[VAR_12].seq = VAR_8;
  VAR_3->lkb_callbacks[VAR_12].flags = VAR_4;
  VAR_3->lkb_callbacks[VAR_12].mode = VAR_5;
  VAR_3->lkb_callbacks[VAR_12].sb_status = VAR_6;
  VAR_3->lkb_callbacks[VAR_12].sb_flags = (VAR_7 & 0x000000FF);
  VAR_13 = 0;
  break;
 }

 if (VAR_12 == VAR_0) {
  FUNC_2(VAR_9, "no callbacks %x %llu flags %x mode %d sb %d %x",
     VAR_3->lkb_id, (unsigned long long)VAR_8,
     VAR_4, VAR_5, VAR_6, VAR_7);
  FUNC_0(VAR_3);
  VAR_13 = -1;
  goto out;
 }
 out:
 return VAR_13;
}
