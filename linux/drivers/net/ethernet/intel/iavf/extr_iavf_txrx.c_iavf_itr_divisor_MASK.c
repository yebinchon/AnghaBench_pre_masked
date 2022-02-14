
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iavf_q_vector {TYPE_1__* adapter; } ;
struct TYPE_2__ {int link_speed; } ;


 int VAR_0 ;







__attribute__((used)) static inline unsigned int FUNC_0(struct iavf_q_vector *VAR_1)
{
 unsigned int VAR_2;

 switch (VAR_1->adapter->link_speed) {
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
