
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t uint ;
struct brcms_c_rateset {scalar_t__ count; } ;
struct brcms_c_info {TYPE_4__** bandstate; TYPE_3__* default_bss; TYPE_2__* stf; TYPE_1__* band; } ;
struct TYPE_8__ {struct brcms_c_rateset defrateset; int hw_rateset; } ;
struct TYPE_7__ {struct brcms_c_rateset rateset; } ;
struct TYPE_6__ {int txstreams; } ;
struct TYPE_5__ {size_t bandunit; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t FUNC_0 (struct brcms_c_info*) ;
 scalar_t__ FUNC_1 (struct brcms_c_rateset*,int *,int,int ) ;
 scalar_t__ FUNC_2 (struct brcms_c_info*) ;
 int FUNC_3 (struct brcms_c_rateset*,struct brcms_c_rateset*,int) ;

__attribute__((used)) static int
FUNC_4(struct brcms_c_info *VAR_3,
        struct brcms_c_rateset *VAR_4)
{
 struct brcms_c_rateset VAR_5, VAR_6;
 uint VAR_7;

 FUNC_3(&VAR_5, VAR_4, sizeof(struct brcms_c_rateset));


 if ((VAR_5.count == 0) || (VAR_5.count > VAR_0))
  return -VAR_2;


 VAR_7 = VAR_3->band->bandunit;
 FUNC_3(&VAR_6, &VAR_5, sizeof(struct brcms_c_rateset));
 if (FUNC_1
     (&VAR_6, &VAR_3->bandstate[VAR_7]->hw_rateset, 1,
      VAR_3->stf->txstreams))
  goto good;


 if (FUNC_2(VAR_3)) {
  VAR_7 = FUNC_0(VAR_3);
  FUNC_3(&VAR_6, &VAR_5, sizeof(struct brcms_c_rateset));
  if (FUNC_1(&VAR_6,
             &VAR_3->
             bandstate[VAR_7]->
             hw_rateset, 1,
             VAR_3->stf->txstreams))
   goto good;
 }

 return -VAR_1;

 good:

 FUNC_3(&VAR_3->default_bss->rateset, &VAR_6,
        sizeof(struct brcms_c_rateset));
 FUNC_3(&VAR_3->bandstate[VAR_7]->defrateset, &VAR_6,
        sizeof(struct brcms_c_rateset));
 return 0;
}
