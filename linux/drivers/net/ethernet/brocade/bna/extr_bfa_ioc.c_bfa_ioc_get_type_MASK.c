
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bfa_ioc {scalar_t__ clscode; TYPE_1__* attr; } ;
typedef enum bfa_ioc_type { ____Placeholder_bfa_ioc_type } bfa_ioc_type ;
struct TYPE_2__ {scalar_t__ port_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int) ;

__attribute__((used)) static enum bfa_ioc_type
FUNC_1(struct bfa_ioc *VAR_6)
{
 if (VAR_6->clscode == VAR_3)
  return VAR_2;

 FUNC_0(!(VAR_6->clscode == VAR_4));

 return (VAR_6->attr->port_mode == VAR_5)
  ? VAR_0 : VAR_1;
}
