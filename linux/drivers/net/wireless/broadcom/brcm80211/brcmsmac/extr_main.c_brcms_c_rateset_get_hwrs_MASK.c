
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct brcms_c_rateset {int dummy; } ;
struct brcms_c_info {TYPE_1__* band; } ;
struct TYPE_2__ {scalar_t__ bandtype; scalar_t__ gmode; } ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 struct brcms_c_rateset VAR_1 ;
 struct brcms_c_rateset VAR_2 ;
 struct brcms_c_rateset VAR_3 ;
 struct brcms_c_rateset VAR_4 ;

__attribute__((used)) static const struct brcms_c_rateset *
FUNC_1(struct brcms_c_info *VAR_5)
{
 const struct brcms_c_rateset *VAR_6;

 if (FUNC_0(VAR_5->band)) {
  if (VAR_5->band->bandtype == VAR_0)
   VAR_6 = &VAR_4;
  else
   VAR_6 = &VAR_1;
 } else if (VAR_5->band->gmode)
  VAR_6 = &VAR_2;
 else
  VAR_6 = &VAR_3;

 return VAR_6;
}
