
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int max_cp_rings; } ;
struct bnxt {int flags; TYPE_1__ hw_resc; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct bnxt*) ;

__attribute__((used)) static unsigned int FUNC_1(struct bnxt *VAR_1)
{
 unsigned int VAR_2 = VAR_1->hw_resc.max_cp_rings;

 if (!(VAR_1->flags & VAR_0))
  VAR_2 -= FUNC_0(VAR_1);

 return VAR_2;
}
