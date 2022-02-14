
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u64 ;
typedef scalar_t__ u32 ;
struct qed_ptt {int dummy; } ;
struct TYPE_3__ {int split_type; scalar_t__ split_id; } ;
struct dbg_tools_data {scalar_t__ num_regs_read; size_t platform_id; scalar_t__ num_pfs_per_port; scalar_t__ num_ports; TYPE_1__ pretend; scalar_t__ use_dmae; } ;
struct qed_hwfn {struct dbg_tools_data dbg_info; } ;
typedef enum init_split_types { ____Placeholder_init_split_types } init_split_types ;
struct TYPE_4__ {scalar_t__ log_thresh; scalar_t__ dmae_thresh; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct qed_hwfn*,int ,char*,...) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;




 int FUNC_3 (struct qed_hwfn*,struct qed_ptt*,int ,int ,scalar_t__,int *) ;
 int FUNC_4 (struct qed_hwfn*,struct qed_ptt*,scalar_t__) ;
 int FUNC_5 (struct qed_hwfn*,struct qed_ptt*,scalar_t__,scalar_t__) ;
 int FUNC_6 (struct qed_hwfn*,struct qed_ptt*,scalar_t__) ;
 int FUNC_7 (struct qed_hwfn*,struct qed_ptt*,scalar_t__*,scalar_t__,scalar_t__) ;
 TYPE_2__* VAR_5 ;

__attribute__((used)) static u32 FUNC_8(struct qed_hwfn *VAR_6,
       struct qed_ptt *VAR_7,
       u32 *VAR_8,
       bool VAR_9, u32 VAR_10, u32 VAR_11, bool VAR_12,
       enum init_split_types VAR_13,
       u8 VAR_14)
{
 struct dbg_tools_data *VAR_15 = &VAR_6->dbg_info;
 u8 VAR_16 = 0, VAR_17 = 0, VAR_18 = 0, VAR_19 = 0;

 if (!VAR_9)
  return VAR_11;


 VAR_15->num_regs_read += VAR_11;
 if (VAR_15->num_regs_read >=
     VAR_5[VAR_15->platform_id].log_thresh) {
  FUNC_1(VAR_6,
      VAR_3,
      "Dumping %d registers...\n",
      VAR_15->num_regs_read);
  VAR_15->num_regs_read = 0;
 }

 switch (VAR_13) {
 case 130:
  VAR_16 = VAR_14;
  break;
 case 131:
  VAR_17 = VAR_14;
  break;
 case 129:
  VAR_16 = VAR_14 / VAR_15->num_pfs_per_port;
  VAR_17 = VAR_16 + VAR_15->num_ports *
      (VAR_14 % VAR_15->num_pfs_per_port);
  break;
 case 128:
  VAR_18 = VAR_14;
  break;
 default:
  break;
 }


 if (VAR_15->use_dmae && VAR_13 == VAR_4 &&
     (VAR_11 >= VAR_5[VAR_15->platform_id].dmae_thresh ||
      VAR_12)) {
  if (!FUNC_3(VAR_6, VAR_7, FUNC_2(VAR_10),
           (u64)(uintptr_t)(VAR_8), VAR_11, ((void*)0)))
   return VAR_11;
  VAR_15->use_dmae = 0;
  FUNC_1(VAR_6,
      VAR_3,
      "Failed reading from chip using DMAE, using GRC instead\n");
 }




 if (VAR_13 != VAR_15->pretend.split_type || VAR_14 !=
     VAR_15->pretend.split_id) {
  switch (VAR_13) {
  case 130:
   FUNC_6(VAR_6, VAR_7, VAR_16);
   break;
  case 131:
   VAR_19 = VAR_17 << VAR_0;
   FUNC_4(VAR_6, VAR_7, VAR_19);
   break;
  case 129:
   VAR_19 = VAR_17 << VAR_0;
   FUNC_5(VAR_6, VAR_7, VAR_16, VAR_19);
   break;
  case 128:
   VAR_19 = FUNC_0(VAR_2) |
         (VAR_18 << VAR_1);
   FUNC_4(VAR_6, VAR_7, VAR_19);
   break;
  default:
   break;
  }

  VAR_15->pretend.split_type = (u8)VAR_13;
  VAR_15->pretend.split_id = VAR_14;
 }


 FUNC_7(VAR_6, VAR_7, VAR_8, VAR_10, VAR_11);

 return VAR_11;
}
