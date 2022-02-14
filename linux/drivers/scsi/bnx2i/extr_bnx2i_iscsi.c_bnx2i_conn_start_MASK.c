
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct iscsi_conn {struct bnx2i_conn* dd_data; } ;
struct iscsi_cls_conn {struct iscsi_conn* dd_data; } ;
struct bnx2i_conn {TYPE_1__* ep; } ;
struct TYPE_6__ {scalar_t__ expires; } ;
struct TYPE_5__ {scalar_t__ state; TYPE_2__ ofld_timer; int ofld_wait; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 int VAR_2 ;
 int FUNC_1 (struct iscsi_conn*) ;
 int VAR_3 ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct iscsi_cls_conn*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (TYPE_2__*,int ,int ) ;
 int FUNC_7 (int ,int) ;

__attribute__((used)) static int FUNC_8(struct iscsi_cls_conn *VAR_5)
{
 struct iscsi_conn *VAR_6 = VAR_5->dd_data;
 struct bnx2i_conn *VAR_7 = VAR_6->dd_data;

 VAR_7->ep->state = VAR_0;
 FUNC_1(VAR_6);





 FUNC_6(&VAR_7->ep->ofld_timer, VAR_2, 0);
 VAR_7->ep->ofld_timer.expires = 1 * VAR_1 + VAR_4;
 FUNC_0(&VAR_7->ep->ofld_timer);

 FUNC_7(VAR_7->ep->ofld_wait,
   VAR_7->ep->state != VAR_0);

 if (FUNC_5(VAR_3))
  FUNC_3(VAR_3);
 FUNC_2(&VAR_7->ep->ofld_timer);

 FUNC_4(VAR_5);
 return 0;
}
