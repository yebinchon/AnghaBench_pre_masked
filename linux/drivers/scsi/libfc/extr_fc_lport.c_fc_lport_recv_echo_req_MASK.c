
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* frame_send ) (struct fc_lport*,struct fc_frame*) ;} ;
struct fc_lport {TYPE_1__ tt; int lp_mutex; } ;
struct fc_frame_header {int dummy; } ;
struct fc_frame {int dummy; } ;
typedef int __be32 ;


 int VAR_0 ;
 int FUNC_0 (struct fc_lport*,char*,int ) ;
 int VAR_1 ;
 int FUNC_1 (struct fc_frame*,struct fc_frame*,int ,int ) ;
 struct fc_frame* FUNC_2 (struct fc_lport*,unsigned int) ;
 int FUNC_3 (struct fc_frame*) ;
 void* FUNC_4 (struct fc_frame*,unsigned int) ;
 int FUNC_5 (struct fc_lport*) ;
 int FUNC_6 (struct fc_frame*) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (void*,void*,unsigned int) ;
 int FUNC_10 (struct fc_lport*,struct fc_frame*) ;

__attribute__((used)) static void FUNC_11(struct fc_lport *VAR_2,
       struct fc_frame *VAR_3)
{
 struct fc_frame *VAR_4;
 unsigned int VAR_5;
 void *VAR_6;
 void *VAR_7;

 FUNC_8(&VAR_2->lp_mutex);

 FUNC_0(VAR_2, "Received ECHO request while in state %s\n",
       FUNC_5(VAR_2));

 VAR_5 = FUNC_6(VAR_3) - sizeof(struct fc_frame_header);
 VAR_6 = FUNC_4(VAR_3, VAR_5);

 if (VAR_5 < sizeof(__be32))
  VAR_5 = sizeof(__be32);

 VAR_4 = FUNC_2(VAR_2, VAR_5);
 if (VAR_4) {
  VAR_7 = FUNC_4(VAR_4, VAR_5);
  FUNC_9(VAR_7, VAR_6, VAR_5);
  *((__be32 *)VAR_7) = FUNC_7(VAR_0 << 24);
  FUNC_1(VAR_4, VAR_3, VAR_1, 0);
  VAR_2->tt.frame_send(VAR_2, VAR_4);
 }
 FUNC_3(VAR_3);
}
