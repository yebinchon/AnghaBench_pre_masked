
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int code; } ;
struct TYPE_4__ {int length; int code; } ;
struct chsc_scpd {int m; int c; int fmt; int rfmt; TYPE_2__ response; int last_chpid; int first_chpid; int cssid; TYPE_1__ request; } ;
struct chp_id {int id; int cssid; } ;
struct TYPE_6__ {int util_str; int cib; int fcs; } ;


 int FUNC_0 (int,char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct chsc_scpd*) ;
 int FUNC_2 (int ) ;
 TYPE_3__ VAR_4 ;
 int FUNC_3 (void*,int ,int ) ;

int FUNC_4(struct chp_id VAR_5, int VAR_6, int VAR_7,
         int VAR_8, int VAR_9, void *VAR_10)
{
 struct chsc_scpd *VAR_11;
 int VAR_12, VAR_13;

 if ((VAR_7 == 1 || VAR_7 == 0) && VAR_8 == 1 &&
     !VAR_4.fcs)
  return -VAR_1;
 if ((VAR_7 == 2) && !VAR_4.cib)
  return -VAR_1;
 if ((VAR_7 == 3) && !VAR_4.util_str)
  return -VAR_1;

 FUNC_3(VAR_10, 0, VAR_3);
 VAR_11 = VAR_10;
 VAR_11->request.length = 0x0010;
 VAR_11->request.code = 0x0002;
 VAR_11->cssid = VAR_5.cssid;
 VAR_11->first_chpid = VAR_5.id;
 VAR_11->last_chpid = VAR_5.id;
 VAR_11->m = VAR_9;
 VAR_11->c = VAR_8;
 VAR_11->fmt = VAR_6;
 VAR_11->rfmt = VAR_7;

 VAR_12 = FUNC_1(VAR_11);
 if (VAR_12 > 0)
  return (VAR_12 == 3) ? -VAR_2 : -VAR_0;

 VAR_13 = FUNC_2(VAR_11->response.code);
 if (VAR_13)
  FUNC_0(2, "chsc: scpd failed (rc=%04x)\n",
         VAR_11->response.code);
 return VAR_13;
}
