
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct bfa_s {int ioc; } ;
struct TYPE_2__ {scalar_t__ max_speed; scalar_t__ is_mezz; } ;
struct bfa_ioc_attr_s {TYPE_1__ adapter_attr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int *,struct bfa_ioc_attr_s*) ;
 int FUNC_1 (struct bfa_ioc_attr_s*) ;
 struct bfa_ioc_attr_s* FUNC_2 (int,int ) ;

u32
FUNC_3(struct bfa_s *VAR_11)
{
 struct bfa_ioc_attr_s *VAR_12;
 u32 VAR_13 = 0;

 VAR_12 = FUNC_2(sizeof(struct bfa_ioc_attr_s), VAR_10);
 if (!VAR_12)
  return 0;

 FUNC_0(&VAR_11->ioc, VAR_12);
 if (VAR_12->adapter_attr.max_speed == VAR_1)
  VAR_13 |= VAR_5 | VAR_9 |
    VAR_8 | VAR_7;
 else if (VAR_12->adapter_attr.max_speed == VAR_3) {
  if (VAR_12->adapter_attr.is_mezz) {
   VAR_13 |= VAR_9 |
    VAR_8 |
    VAR_7 | VAR_6;
  } else {
   VAR_13 |= VAR_9 |
    VAR_8 |
    VAR_7;
  }
 } else if (VAR_12->adapter_attr.max_speed == VAR_2) {
  VAR_13 |= VAR_8 | VAR_7 |
    VAR_6;
 } else if (VAR_12->adapter_attr.max_speed == VAR_0) {
  VAR_13 |= VAR_4;
 }
 FUNC_1(VAR_12);
 return VAR_13;
}
