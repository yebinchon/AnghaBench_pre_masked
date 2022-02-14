
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int (* clear_pending ) (TYPE_2__*) ;} ;
struct TYPE_3__ {TYPE_2__ raw; } ;
struct bnx2x_virtf {TYPE_1__ rss_conf_obj; } ;
struct bnx2x {int dummy; } ;


 int FUNC_0 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_1(struct bnx2x *VAR_0,
        struct bnx2x_virtf *VAR_1)
{
 VAR_1->rss_conf_obj.raw.clear_pending(&VAR_1->rss_conf_obj.raw);
}
