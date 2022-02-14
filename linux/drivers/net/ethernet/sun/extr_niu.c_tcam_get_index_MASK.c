
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_3__ {int tcam_sz; int tcam_top; } ;
struct niu {TYPE_2__* parent; TYPE_1__ clas; } ;
struct TYPE_4__ {int num_ports; } ;



__attribute__((used)) static u16 FUNC_0(struct niu *VAR_0, u16 VAR_1)
{

 if (VAR_1 >= (VAR_0->clas.tcam_sz - 1))
  VAR_1 = 0;
 return VAR_0->clas.tcam_top + ((VAR_1+1) * VAR_0->parent->num_ports);
}
