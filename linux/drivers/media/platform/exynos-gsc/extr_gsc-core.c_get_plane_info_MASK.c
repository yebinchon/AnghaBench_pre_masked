
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {scalar_t__ y; scalar_t__ cb; scalar_t__ cr; } ;
struct gsc_frame {TYPE_1__ addr; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;

__attribute__((used)) static int FUNC_1(struct gsc_frame *VAR_1, u32 VAR_2, u32 *VAR_3, u32 *VAR_4)
{
 if (VAR_1->addr.y == VAR_2) {
  *VAR_3 = 0;
  *VAR_4 = VAR_1->addr.y;
 } else if (VAR_1->addr.cb == VAR_2) {
  *VAR_3 = 1;
  *VAR_4 = VAR_1->addr.cb;
 } else if (VAR_1->addr.cr == VAR_2) {
  *VAR_3 = 2;
  *VAR_4 = VAR_1->addr.cr;
 } else {
  FUNC_0("Plane address is wrong");
  return -VAR_0;
 }
 return 0;
}
