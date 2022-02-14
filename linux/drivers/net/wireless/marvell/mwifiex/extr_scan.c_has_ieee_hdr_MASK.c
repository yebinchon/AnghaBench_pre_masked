
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_2__ {scalar_t__ element_id; } ;
struct ieee_types_generic {TYPE_1__ ieee_hdr; } ;



__attribute__((used)) static bool
FUNC_0(struct ieee_types_generic *VAR_0, u8 VAR_1)
{
 return (VAR_0 && VAR_0->ieee_hdr.element_id == VAR_1);
}
