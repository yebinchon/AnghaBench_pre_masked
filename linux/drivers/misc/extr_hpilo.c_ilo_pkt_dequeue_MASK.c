
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ilo_hwinfo {int dummy; } ;
struct TYPE_8__ {char* recv_desc; } ;
struct TYPE_7__ {char* recv_fifobar; } ;
struct TYPE_6__ {char* send_desc; } ;
struct TYPE_5__ {char* send_fifobar; } ;
struct ccb {TYPE_4__ ccb_u4; TYPE_3__ ccb_u3; TYPE_2__ ccb_u2; TYPE_1__ ccb_u1; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct ilo_hwinfo*,char*,int*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct ilo_hwinfo *VAR_1, struct ccb *VAR_2,
      int VAR_3, int *VAR_4, int *VAR_5, void **VAR_6)
{
 char *VAR_7, *VAR_8;
 int VAR_9 = 0, VAR_10 = 0;
 int VAR_11;

 if (VAR_3 == VAR_0) {
  VAR_7 = VAR_2->ccb_u1.send_fifobar;
  VAR_8 = VAR_2->ccb_u2.send_desc;
 } else {
  VAR_7 = VAR_2->ccb_u3.recv_fifobar;
  VAR_8 = VAR_2->ccb_u4.recv_desc;
 }

 VAR_11 = FUNC_1(VAR_1, VAR_7, &VAR_9);
 if (VAR_11) {
  VAR_10 = FUNC_2(VAR_9);
  if (VAR_4)
   *VAR_4 = VAR_10;
  if (VAR_5)
   *VAR_5 = FUNC_3(VAR_9);
  if (VAR_6)
   *VAR_6 = (void *)(VAR_8 + FUNC_0(VAR_10));
 }

 return VAR_11;
}
