
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct fc_lport {TYPE_1__* host; int stats; } ;
struct fc_frame {int dummy; } ;
struct TYPE_4__ {int FcpFrameAllocFails; } ;
struct TYPE_3__ {int can_queue; } ;


 int VAR_0 ;
 int FUNC_0 (struct fc_lport*) ;
 struct fc_frame* FUNC_1 (struct fc_lport*,size_t) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (struct fc_frame*) ;
 TYPE_2__* FUNC_4 (int ,int ) ;
 int FUNC_5 () ;
 int FUNC_6 (int ,TYPE_1__*,char*,int ) ;

__attribute__((used)) static inline struct fc_frame *FUNC_7(struct fc_lport *VAR_1,
        size_t VAR_2)
{
 struct fc_frame *VAR_3;

 VAR_3 = FUNC_1(VAR_1, VAR_2);
 if (FUNC_3(VAR_3))
  return VAR_3;

 FUNC_4(VAR_1->stats, FUNC_2())->FcpFrameAllocFails++;
 FUNC_5();

 FUNC_0(VAR_1);
 FUNC_6(VAR_0, VAR_1->host,
       "libfc: Could not allocate frame, "
       "reducing can_queue to %d.\n", VAR_1->host->can_queue);
 return ((void*)0);
}
