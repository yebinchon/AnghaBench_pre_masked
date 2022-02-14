
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


union hinic_l3 {TYPE_2__* v6; TYPE_1__* v4; } ;
typedef int __sum16 ;
struct TYPE_4__ {int daddr; int saddr; } ;
struct TYPE_3__ {int version; int daddr; int saddr; } ;


 int FUNC_0 (int *,int *,int ,unsigned short,int ) ;
 int FUNC_1 (int ,int ,int ,unsigned short,int ) ;

__attribute__((used)) static __sum16 FUNC_2(union hinic_l3 *VAR_0, unsigned short VAR_1)
{
 return (VAR_0->v4->version == 4) ?
  FUNC_1(VAR_0->v4->saddr, VAR_0->v4->daddr, 0, VAR_1, 0) :
  FUNC_0(&VAR_0->v6->saddr, &VAR_0->v6->daddr, 0, VAR_1, 0);
}
