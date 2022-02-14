
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubi_wl_entry {int dummy; } ;
struct ubi_device {struct ubi_wl_entry* move_to; struct ubi_wl_entry* move_from; int erroneous; int scrub; } ;


 scalar_t__ FUNC_0 (struct ubi_wl_entry*,int *) ;

__attribute__((used)) static bool FUNC_1(struct ubi_device *VAR_0, struct ubi_wl_entry *VAR_1)
{
 if (FUNC_0(VAR_1, &VAR_0->scrub))
  return 0;
 else if (FUNC_0(VAR_1, &VAR_0->erroneous))
  return 0;
 else if (VAR_0->move_from == VAR_1)
  return 0;
 else if (VAR_0->move_to == VAR_1)
  return 0;

 return 1;
}
