
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
struct TYPE_3__ {int more; } ;
struct TYPE_4__ {TYPE_1__ s; } ;
struct octnic_ctrl_pkt {scalar_t__ iq_no; TYPE_2__* udd; TYPE_2__ ncmd; } ;
struct octeon_soft_command {int iq_no; int sc_status; int complete; scalar_t__ virtdptr; } ;
struct octeon_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,TYPE_2__*,int) ;
 scalar_t__ FUNC_2 (struct octeon_device*,int,int,int ) ;
 int FUNC_3 (struct octeon_device*,struct octeon_soft_command*,int ,int ,int ,int ,int ) ;
 int FUNC_4 (int *,int) ;

__attribute__((used)) static inline struct octeon_soft_command
*FUNC_5(struct octeon_device *VAR_4,
     struct octnic_ctrl_pkt *VAR_5)
{
 struct octeon_soft_command *VAR_6 = ((void*)0);
 u8 *VAR_7;
 u32 VAR_8;
 u32 VAR_9 = 0, VAR_10 = 0;

 VAR_9 = (u32)(VAR_5->ncmd.s.more * 8);

 VAR_10 = VAR_1 + VAR_9;
 VAR_8 = 16;

 VAR_6 = (struct octeon_soft_command *)
  FUNC_2(VAR_4, VAR_10, VAR_8, 0);

 if (!VAR_6)
  return ((void*)0);

 VAR_7 = (u8 *)VAR_6->virtdptr;

 FUNC_1(VAR_7, &VAR_5->ncmd, VAR_1);

 FUNC_4((u64 *)VAR_7, (VAR_1 >> 3));

 if (VAR_9) {

  FUNC_1(VAR_7 + VAR_1, VAR_5->udd, VAR_9);
 }

 VAR_6->iq_no = (u32)VAR_5->iq_no;

 FUNC_3(VAR_4, VAR_6, VAR_2, VAR_3,
        0, 0, 0);

 FUNC_0(&VAR_6->complete);
 VAR_6->sc_status = VAR_0;

 return VAR_6;
}
