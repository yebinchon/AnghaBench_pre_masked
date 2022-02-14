
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wakeup_source {int dummy; } ;
struct epitem {TYPE_1__* ep; int ws; } ;
struct TYPE_2__ {int mtx; } ;


 int FUNC_0 (int *) ;
 struct wakeup_source* FUNC_1 (int ,int ) ;

__attribute__((used)) static inline struct wakeup_source *FUNC_2(struct epitem *VAR_0)
{
 return FUNC_1(VAR_0->ws, FUNC_0(&VAR_0->ep->mtx));
}
