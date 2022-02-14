
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int options; } ;
struct TYPE_4__ {TYPE_1__ ext; } ;
struct sfp {TYPE_2__ id; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static bool FUNC_1(struct sfp *VAR_4, unsigned int VAR_5)
{
 return (VAR_4->id.ext.options & FUNC_0(VAR_2) &&
  VAR_5 == VAR_1) ||
        (VAR_4->id.ext.options & FUNC_0(VAR_3) &&
  VAR_5 == VAR_0);
}
