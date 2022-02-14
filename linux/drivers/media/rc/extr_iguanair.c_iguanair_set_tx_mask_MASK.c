
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct rc_dev {struct iguanair* priv; } ;
struct iguanair {int lock; TYPE_1__* packet; } ;
struct TYPE_2__ {int channels; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct rc_dev *VAR_0, uint32_t VAR_1)
{
 struct iguanair *VAR_2 = VAR_0->priv;

 if (VAR_1 > 15)
  return 4;

 FUNC_0(&VAR_2->lock);
 VAR_2->packet->channels = VAR_1 << 4;
 FUNC_1(&VAR_2->lock);

 return 0;
}
