
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ilo_hwinfo {int dummy; } ;
struct TYPE_4__ {char* recv_fifobar; } ;
struct TYPE_3__ {char* send_fifobar; } ;
struct ccb {TYPE_2__ ccb_u3; TYPE_1__ ccb_u1; } ;


 int VAR_0 ;
 int FUNC_0 (struct ilo_hwinfo*,char*,int) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static int FUNC_2(struct ilo_hwinfo *VAR_1, struct ccb *VAR_2,
      int VAR_3, int VAR_4, int VAR_5)
{
 char *VAR_6;
 int VAR_7;

 if (VAR_3 == VAR_0)
  VAR_6 = VAR_2->ccb_u1.send_fifobar;
 else
  VAR_6 = VAR_2->ccb_u3.recv_fifobar;

 VAR_7 = FUNC_1(VAR_4, VAR_5);
 return FUNC_0(VAR_1, VAR_6, VAR_7);
}
