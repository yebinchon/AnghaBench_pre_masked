
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct m_can_classdev {TYPE_1__* ops; } ;
typedef enum m_can_reg { ____Placeholder_m_can_reg } m_can_reg ;
struct TYPE_2__ {int (* read_reg ) (struct m_can_classdev*,int) ;} ;


 int FUNC_0 (struct m_can_classdev*,int) ;

__attribute__((used)) static inline u32 FUNC_1(struct m_can_classdev *VAR_0, enum m_can_reg VAR_1)
{
 return VAR_0->ops->read_reg(VAR_0, VAR_1);
}
