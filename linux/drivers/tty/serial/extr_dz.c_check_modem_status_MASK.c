
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct TYPE_3__ {int dsr; } ;
struct TYPE_4__ {scalar_t__ line; TYPE_1__ icount; } ;
struct dz_port {TYPE_2__ port; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct dz_port*,int ) ;

__attribute__((used)) static inline void FUNC_1(struct dz_port *VAR_2)
{





 u16 VAR_3;


 if (VAR_2->port.line != VAR_0)
  return;

 VAR_3 = FUNC_0(VAR_2, VAR_1);


 if (VAR_3)
  VAR_2->port.icount.dsr++;
}
