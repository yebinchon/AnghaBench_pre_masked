
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ascebc; } ;
struct con3270 {scalar_t__ nr_up; int update_flags; TYPE_2__* status; TYPE_1__ view; } ;
struct TYPE_4__ {scalar_t__ string; } ;


 int VAR_0 ;
 int FUNC_0 (int ,scalar_t__,int) ;
 int FUNC_1 (scalar_t__,char*,int) ;

__attribute__((used)) static void
FUNC_2(struct con3270 *VAR_1)
{
 char *VAR_2;

 VAR_2 = (VAR_1->nr_up != 0) ? "History" : "Running";
 FUNC_1(VAR_1->status->string + 24, VAR_2, 7);
 FUNC_0(VAR_1->view.ascebc, VAR_1->status->string + 24, 7);
 VAR_1->update_flags |= VAR_0;
}
