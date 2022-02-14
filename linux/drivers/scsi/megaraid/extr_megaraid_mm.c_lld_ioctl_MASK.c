
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int status; scalar_t__ timedout; } ;
typedef TYPE_1__ uioc_t ;
struct TYPE_12__ {scalar_t__ function; scalar_t__ expires; } ;
struct uioc_timeout {TYPE_3__ timer; TYPE_1__* uioc; } ;
struct TYPE_11__ {int (* issue_uioc ) (int ,TYPE_1__*,int ) ;int timeout; scalar_t__ quiescent; int drvr_data; } ;
typedef TYPE_2__ mraid_mmadp_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ,TYPE_1__*,int ) ;
 int FUNC_4 (TYPE_3__*,int ,int ) ;
 int FUNC_5 (int ,int) ;
 int VAR_5 ;

__attribute__((used)) static int
FUNC_6(mraid_mmadp_t *VAR_6, uioc_t *VAR_7)
{
 int VAR_8;
 struct uioc_timeout VAR_9 = { };

 VAR_7->status = -VAR_0;
 VAR_8 = VAR_6->issue_uioc(VAR_6->drvr_data, VAR_7, VAR_2);

 if (VAR_8) return VAR_8;




 if (VAR_6->timeout > 0) {
  VAR_9.uioc = VAR_7;
  FUNC_4(&VAR_9.timer, VAR_4, 0);

  VAR_9.timer.expires = VAR_3 + VAR_6->timeout * VAR_1;

  FUNC_0(&VAR_9.timer);
 }





 FUNC_5(VAR_5, (VAR_7->status != -VAR_0));
 if (VAR_9.timer.function) {
  FUNC_1(&VAR_9.timer);
  FUNC_2(&VAR_9.timer);
 }





 if (VAR_7->timedout) {
  VAR_6->quiescent = 0;
 }

 return VAR_7->status;
}
