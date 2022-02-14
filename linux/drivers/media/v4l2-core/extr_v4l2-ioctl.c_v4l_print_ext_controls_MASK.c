
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_ext_controls {int count; TYPE_1__* controls; int request_fd; int error_idx; int which; } ;
struct TYPE_2__ {int size; int id; int value; } ;


 int FUNC_0 (char*,...) ;

__attribute__((used)) static void FUNC_1(const void *VAR_0, bool VAR_1)
{
 const struct v4l2_ext_controls *VAR_2 = VAR_0;
 int VAR_3;

 FUNC_0("which=0x%x, count=%d, error_idx=%d, request_fd=%d",
   VAR_2->which, VAR_2->count, VAR_2->error_idx, VAR_2->request_fd);
 for (VAR_3 = 0; VAR_3 < VAR_2->count; VAR_3++) {
  if (!VAR_2->controls[VAR_3].size)
   FUNC_0(", id/val=0x%x/0x%x",
    VAR_2->controls[VAR_3].id, VAR_2->controls[VAR_3].value);
  else
   FUNC_0(", id/size=0x%x/%u",
    VAR_2->controls[VAR_3].id, VAR_2->controls[VAR_3].size);
 }
 FUNC_0("\n");
}
