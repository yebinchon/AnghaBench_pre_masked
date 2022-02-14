
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct TYPE_2__ {int concrete_fid; scalar_t__ opaque_fid; } ;
struct qed_hwfn {int abs_pf_id; TYPE_1__ hw_info; void* port_id; void* rel_pf_id; } ;


 int FUNC_0 (struct qed_hwfn*,int ,char*,int,scalar_t__) ;
 void* FUNC_1 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct qed_hwfn*,int ) ;

__attribute__((used)) static void FUNC_3(struct qed_hwfn *VAR_5)
{

 VAR_5->hw_info.opaque_fid = (u16) FUNC_2(VAR_5,
        VAR_4);

 VAR_5->hw_info.concrete_fid = FUNC_2(VAR_5, VAR_3);

 VAR_5->abs_pf_id = (VAR_5->hw_info.concrete_fid >> 16) & 0xf;
 VAR_5->rel_pf_id = FUNC_1(VAR_5->hw_info.concrete_fid,
          VAR_1);
 VAR_5->port_id = FUNC_1(VAR_5->hw_info.concrete_fid,
        VAR_2);

 FUNC_0(VAR_5, VAR_0,
     "Read ME register: Concrete 0x%08x Opaque 0x%04x\n",
     VAR_5->hw_info.concrete_fid, VAR_5->hw_info.opaque_fid);
}
