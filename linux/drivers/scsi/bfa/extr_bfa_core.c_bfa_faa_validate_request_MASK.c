
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {TYPE_1__* attr; } ;
struct bfa_s {TYPE_2__ ioc; } ;
typedef enum bfa_ioc_type_e { ____Placeholder_bfa_ioc_type_e } bfa_ioc_type_e ;
typedef int bfa_status_t ;
struct TYPE_3__ {int card_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct bfa_s*) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static bfa_status_t
FUNC_3(struct bfa_s *VAR_4)
{
 enum bfa_ioc_type_e VAR_5 = FUNC_0(VAR_4);
 u32 VAR_6 = VAR_4->ioc.attr->card_type;

 if (FUNC_1(&VAR_4->ioc)) {
  if ((VAR_5 != VAR_0) || FUNC_2(VAR_6))
   return VAR_1;
 } else {
  return VAR_2;
 }

 return VAR_3;
}
