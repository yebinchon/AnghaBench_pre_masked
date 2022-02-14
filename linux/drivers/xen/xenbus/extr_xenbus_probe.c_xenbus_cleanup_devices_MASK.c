
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xb_find_info {char const* nodename; TYPE_1__* dev; } ;
struct bus_type {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (struct bus_type*,int *,struct xb_find_info*,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(const char *VAR_1, struct bus_type *VAR_2)
{
 struct xb_find_info VAR_3 = { .nodename = VAR_1 };

 do {
  VAR_3.dev = ((void*)0);
  FUNC_0(VAR_2, ((void*)0), &VAR_3, VAR_0);
  if (VAR_3.dev) {
   FUNC_1(&VAR_3.dev->dev);
   FUNC_2(&VAR_3.dev->dev);
  }
 } while (VAR_3.dev);
}
