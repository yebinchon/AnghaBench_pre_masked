
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int driver_flags; } ;
struct qla27xx_fwdt_entry {TYPE_1__ hdr; } ;


 int VAR_0 ;

__attribute__((used)) static inline void
FUNC_0(struct qla27xx_fwdt_entry *VAR_1, void *VAR_2)
{
 if (VAR_2)
  VAR_1->hdr.driver_flags |= VAR_0;
}
