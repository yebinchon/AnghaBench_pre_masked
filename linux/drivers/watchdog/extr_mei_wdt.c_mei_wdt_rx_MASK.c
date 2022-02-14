
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {scalar_t__ command; scalar_t__ versionnumber; scalar_t__ subcommand; } ;
struct mei_wdt_start_response {int wdstate; TYPE_1__ hdr; } ;
struct mei_wdt {scalar_t__ state; int response; int unregister; int cldev; } ;
struct mei_mc_hdr {int dummy; } ;
struct mei_cl_device {int dev; } ;
typedef int res ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 void* VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (int *,char*,scalar_t__,scalar_t__,...) ;
 struct mei_wdt* FUNC_4 (struct mei_cl_device*) ;
 int FUNC_5 (int ,int *,size_t const) ;
 int FUNC_6 (struct mei_wdt*) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (struct mei_wdt*) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static void FUNC_10(struct mei_cl_device *VAR_7)
{
 struct mei_wdt *VAR_8 = FUNC_4(VAR_7);
 struct mei_wdt_start_response VAR_9;
 const size_t VAR_10 = sizeof(VAR_9);
 int VAR_11;

 VAR_11 = FUNC_5(VAR_8->cldev, (u8 *)&VAR_9, VAR_10);
 if (VAR_11 < 0) {
  FUNC_2(&VAR_7->dev, "failure in recv %d\n", VAR_11);
  return;
 }


 if (VAR_11 == 0)
  return;

 if (VAR_11 < sizeof(struct mei_mc_hdr)) {
  FUNC_2(&VAR_7->dev, "recv small data %d\n", VAR_11);
  return;
 }

 if (VAR_9.hdr.command != VAR_0 ||
     VAR_9.hdr.versionnumber != VAR_2) {
  FUNC_2(&VAR_7->dev, "wrong command received\n");
  return;
 }

 if (VAR_9.hdr.subcommand != VAR_1) {
  FUNC_3(&VAR_7->dev, "unsupported command %d :%s[%d]\n",
    VAR_9.hdr.subcommand,
    FUNC_7(VAR_8->state),
    VAR_8->state);
  return;
 }





 if (VAR_8->state == VAR_5) {
  if (VAR_9.wdstate & VAR_6) {
   VAR_8->state = VAR_3;
   FUNC_9(&VAR_8->unregister);
  }
  goto out;
 }

 if (VAR_8->state == VAR_4) {
  if (VAR_9.wdstate & VAR_6) {
   VAR_8->state = VAR_3;
  } else {

   FUNC_8(VAR_8);
   FUNC_6(VAR_8);
  }
  return;
 }

 FUNC_3(&VAR_7->dev, "not in correct state %s[%d]\n",
    FUNC_7(VAR_8->state), VAR_8->state);

out:
 if (!FUNC_1(&VAR_8->response))
  FUNC_0(&VAR_8->response);
}
