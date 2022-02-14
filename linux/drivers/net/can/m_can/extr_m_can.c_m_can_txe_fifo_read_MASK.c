
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct m_can_classdev {TYPE_2__* ops; TYPE_1__* mcfg; } ;
struct TYPE_4__ {int (* read_fifo ) (struct m_can_classdev*,int) ;} ;
struct TYPE_3__ {int off; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct m_can_classdev*,int) ;

__attribute__((used)) static u32 FUNC_1(struct m_can_classdev *VAR_2, u32 VAR_3, u32 VAR_4)
{
 u32 VAR_5 = VAR_2->mcfg[VAR_0].off + VAR_3 * VAR_1 +
     VAR_4;

 return VAR_2->ops->read_fifo(VAR_2, VAR_5);
}
