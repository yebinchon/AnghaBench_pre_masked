
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef unsigned int u8 ;
struct fw_vi_mac_exact {int valid_to_idx; int macaddr; } ;
struct TYPE_4__ {struct fw_vi_mac_exact* exact; } ;
struct fw_vi_mac_cmd {void* op_to_viid; void* freemacs_to_len16; TYPE_1__ u; } ;
struct TYPE_5__ {unsigned int mps_tcam_size; } ;
struct TYPE_6__ {int chip; scalar_t__ viid_smt_extn_support; TYPE_2__ arch; } ;
struct adapter {TYPE_3__ params; } ;
typedef int c ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 unsigned int FUNC_6 (int ) ;
 int VAR_8 ;
 int FUNC_7 (unsigned int) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_8 (int ) ;
 int FUNC_9 (void*) ;
 int FUNC_10 (int) ;
 void* FUNC_11 (int) ;
 int FUNC_12 (int ,unsigned int const*,int) ;
 int FUNC_13 (struct fw_vi_mac_cmd*,int ,int) ;
 int FUNC_14 (struct adapter*,unsigned int,struct fw_vi_mac_cmd*,int,struct fw_vi_mac_cmd*) ;

int FUNC_15(struct adapter *VAR_11, unsigned int VAR_12, unsigned int VAR_13,
    int VAR_14, const u8 *VAR_15, bool VAR_16, u8 *VAR_17)
{
 int VAR_18, VAR_19;
 struct fw_vi_mac_cmd VAR_20;
 struct fw_vi_mac_exact *VAR_21 = VAR_20.u.exact;
 unsigned int VAR_22 = VAR_11->params.arch.mps_tcam_size;

 if (VAR_14 < 0)
  VAR_14 = VAR_16 ? VAR_6 : VAR_5;
 VAR_19 = VAR_17 ? VAR_10 : VAR_9;

 FUNC_13(&VAR_20, 0, sizeof(VAR_20));
 VAR_20.op_to_viid = FUNC_11(FUNC_2(VAR_7) |
       VAR_2 | VAR_3 |
       FUNC_7(VAR_13));
 VAR_20.freemacs_to_len16 = FUNC_11(FUNC_1(1));
 VAR_21->valid_to_idx = FUNC_10(VAR_8 |
          FUNC_5(VAR_19) |
          FUNC_4(VAR_14));
 FUNC_12(VAR_21->macaddr, VAR_15, sizeof(VAR_21->macaddr));

 VAR_18 = FUNC_14(VAR_11, VAR_12, &VAR_20, sizeof(VAR_20), &VAR_20);
 if (VAR_18 == 0) {
  VAR_18 = FUNC_3(FUNC_8(VAR_21->valid_to_idx));
  if (VAR_18 >= VAR_22)
   VAR_18 = -VAR_1;
  if (VAR_17) {
   if (VAR_11->params.viid_smt_extn_support) {
    *VAR_17 = FUNC_6
          (FUNC_9(VAR_20.op_to_viid));
   } else {





    if (FUNC_0(VAR_11->params.chip) <=
             VAR_0)
     *VAR_17 = (VAR_13 & VAR_4) << 1;
    else
     *VAR_17 = (VAR_13 & VAR_4);
   }
  }
 }
 return VAR_18;
}
