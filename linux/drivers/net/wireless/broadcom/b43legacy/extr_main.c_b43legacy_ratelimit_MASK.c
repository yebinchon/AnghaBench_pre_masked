
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct b43legacy_wl {int current_dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 () ;

__attribute__((used)) static int FUNC_2(struct b43legacy_wl *VAR_1)
{
 if (!VAR_1 || !VAR_1->current_dev)
  return 1;
 if (FUNC_0(VAR_1->current_dev) < VAR_0)
  return 1;


 return FUNC_1();
}
