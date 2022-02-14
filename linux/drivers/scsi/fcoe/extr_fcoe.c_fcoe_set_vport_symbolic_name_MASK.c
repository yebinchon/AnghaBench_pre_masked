
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct fc_vport {char* symbolic_name; struct fc_lport* dd_data; } ;
struct fc_ns_rspn {int dummy; } ;
struct TYPE_3__ {int (* elsct_send ) (struct fc_lport*,int ,struct fc_frame*,int ,int *,int *,int) ;} ;
struct fc_lport {scalar_t__ state; int r_a_tov; TYPE_1__ tt; int host; } ;
struct fc_frame {int dummy; } ;
struct fc_ct_hdr {int dummy; } ;
struct TYPE_4__ {char* name; } ;


 char* VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 struct fc_frame* FUNC_0 (struct fc_lport*,int) ;
 int FUNC_1 (int ) ;
 TYPE_2__* FUNC_2 (struct fc_lport*) ;
 int FUNC_3 (int ,int ,char*,char*,char*,char*,char*) ;
 size_t FUNC_4 (int ,int) ;
 int FUNC_5 (struct fc_lport*,int ,struct fc_frame*,int ,int *,int *,int) ;

__attribute__((used)) static void FUNC_6(struct fc_vport *VAR_6)
{
 struct fc_lport *VAR_7 = VAR_6->dd_data;
 struct fc_frame *VAR_8;
 size_t VAR_9;

 FUNC_3(FUNC_1(VAR_7->host), VAR_4,
   "%s v%s over %s : %s", VAR_0, VAR_1,
   FUNC_2(VAR_7)->name, VAR_6->symbolic_name);

 if (VAR_7->state != VAR_5)
  return;

 VAR_9 = FUNC_4(FUNC_1(VAR_7->host), 255);
 VAR_8 = FUNC_0(VAR_7,
       sizeof(struct fc_ct_hdr) +
       sizeof(struct fc_ns_rspn) + VAR_9);
 if (!VAR_8)
  return;
 VAR_7->tt.elsct_send(VAR_7, VAR_2, VAR_8, VAR_3,
        ((void*)0), ((void*)0), 3 * VAR_7->r_a_tov);
}
