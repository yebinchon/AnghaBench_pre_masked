
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct brcms_regd {int dummy; } ;
struct brcms_cm_info {struct brcms_c_info* wlc; } ;
struct brcms_c_info {TYPE_2__* protection; int * bandstate; TYPE_1__* pub; } ;
struct TYPE_4__ {int nmode_user; int gmode_user; } ;
struct TYPE_3__ {int _n_enab; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct brcms_c_info*,int ,int) ;
 int FUNC_1 (struct brcms_c_info*) ;
 int FUNC_2 (struct brcms_c_info*,int ) ;

__attribute__((used)) static void
FUNC_3(struct brcms_cm_info *VAR_3,
      const struct brcms_regd *VAR_4)
{
 struct brcms_c_info *VAR_5 = VAR_3->wlc;

 if ((VAR_5->pub->_n_enab & VAR_2) !=
     VAR_5->protection->nmode_user)
  FUNC_1(VAR_5);

 FUNC_2(VAR_5, VAR_5->bandstate[VAR_0]);
 FUNC_2(VAR_5, VAR_5->bandstate[VAR_1]);

 FUNC_0(VAR_5, VAR_5->protection->gmode_user, 0);

 return;
}
