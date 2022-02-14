
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TCP_Server_Info {int sec_mode; int sign; TYPE_1__* vals; } ;
struct TYPE_2__ {int signing_required; int signing_enabled; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (struct TCP_Server_Info*) ;
 int VAR_4 ;

int
FUNC_2(struct TCP_Server_Info *VAR_5, bool VAR_6)
{
 bool VAR_7 = VAR_5->sec_mode & VAR_5->vals->signing_required;
 bool VAR_8 = VAR_5->sec_mode & VAR_5->vals->signing_enabled;
 bool VAR_9 = VAR_4 & VAR_0;





 if (!VAR_6)
  VAR_6 = ((VAR_4 & VAR_1) ==
      VAR_1);





 VAR_9 = VAR_6 ? VAR_6 :
    (VAR_4 & VAR_0);


 if (VAR_7) {
  if (!VAR_9) {
   FUNC_0(VAR_3, "Server requires signing, but it's disabled in SecurityFlags!");
   return -VAR_2;
  }
  VAR_5->sign = 1;
 }


 if (VAR_6) {
  if (!VAR_8) {
   FUNC_0(VAR_3, "Server does not support signing!");
   return -VAR_2;
  }
  VAR_5->sign = 1;
 }

 if (FUNC_1(VAR_5) && VAR_5->sign)
  FUNC_0(VAR_3, "Signing is enabled, and RDMA read/write will be disabled");

 return 0;
}
