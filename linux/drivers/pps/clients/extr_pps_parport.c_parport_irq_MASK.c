
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pps_event_time {int dummy; } ;
struct pps_client_pp {unsigned int cw; scalar_t__ cw_err; TYPE_2__* pps; TYPE_1__* pardev; } ;
struct parport {int dummy; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {struct parport* port; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (TYPE_2__*,struct pps_event_time*,int ,int *) ;
 int FUNC_4 (struct pps_event_time*) ;
 int FUNC_5 (struct parport*) ;

__attribute__((used)) static void FUNC_6(void *VAR_3)
{
 struct pps_event_time VAR_4, VAR_5;
 struct pps_client_pp *VAR_6 = VAR_3;
 struct parport *VAR_7 = VAR_6->pardev->port;
 unsigned int VAR_8;
 unsigned long VAR_9;


 FUNC_4(&VAR_4);

 if (VAR_6->cw == 0)

  goto out_assert;
 FUNC_2(VAR_9);

 if (!FUNC_5(VAR_7)) {
  FUNC_1(VAR_9);
  FUNC_0(VAR_6->pps->dev, "lost the signal\n");
  goto out_assert;
 }


 for (VAR_8 = VAR_6->cw; VAR_8; VAR_8--)
  if (!FUNC_5(VAR_7)) {
   FUNC_4(&VAR_5);
   FUNC_1(VAR_9);
   VAR_6->cw_err = 0;
   goto out_both;
  }
 FUNC_1(VAR_9);


 VAR_6->cw_err++;
 if (VAR_6->cw_err >= VAR_0) {
  FUNC_0(VAR_6->pps->dev, "disabled clear edge capture after %d"
    " timeouts\n", VAR_6->cw_err);
  VAR_6->cw = 0;
  VAR_6->cw_err = 0;
 }

out_assert:

 FUNC_3(VAR_6->pps, &VAR_4,
   VAR_1, ((void*)0));
 return;

out_both:

 FUNC_3(VAR_6->pps, &VAR_4,
   VAR_1, ((void*)0));

 FUNC_3(VAR_6->pps, &VAR_5,
   VAR_2, ((void*)0));
 return;
}
