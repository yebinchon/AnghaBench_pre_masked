
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct i40e_q_vector {TYPE_5__* vsi; } ;
struct TYPE_10__ {TYPE_4__* back; } ;
struct TYPE_6__ {int link_speed; } ;
struct TYPE_7__ {TYPE_1__ link_info; } ;
struct TYPE_8__ {TYPE_2__ phy; } ;
struct TYPE_9__ {TYPE_3__ hw; } ;


 int VAR_0 ;







__attribute__((used)) static inline unsigned int FUNC_0(struct i40e_q_vector *VAR_1)
{
 unsigned int VAR_2;

 switch (VAR_1->vsi->back->hw.phy.link_info.link_speed) {
 case 128:
  VAR_2 = VAR_0 * 1024;
  break;
 case 129:
 case 130:
  VAR_2 = VAR_0 * 512;
  break;
 default:
 case 132:
  VAR_2 = VAR_0 * 256;
  break;
 case 131:
 case 133:
  VAR_2 = VAR_0 * 32;
  break;
 }

 return VAR_2;
}
