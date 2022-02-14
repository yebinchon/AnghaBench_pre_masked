
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct c67x00_td {struct c67x00_td* data; int pipe; int td_addr; } ;
struct c67x00_hcd {TYPE_1__* sie; } ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ,struct c67x00_td*,scalar_t__) ;
 scalar_t__ FUNC_1 (struct c67x00_td*) ;
 int FUNC_2 (struct c67x00_td*) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static inline void
FUNC_4(struct c67x00_hcd *VAR_1, struct c67x00_td *VAR_2)
{
 FUNC_0(VAR_1->sie->dev,
    VAR_2->td_addr, VAR_2, VAR_0);

 if (FUNC_3(VAR_2->pipe) && FUNC_1(VAR_2))
  FUNC_0(VAR_1->sie->dev, FUNC_2(VAR_2),
     VAR_2->data, FUNC_1(VAR_2));
}
