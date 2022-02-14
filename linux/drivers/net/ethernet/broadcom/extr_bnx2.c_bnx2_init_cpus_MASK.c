
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct bnx2_rv2p_fw_file {int proc2; int proc1; } ;
struct bnx2_mips_fw_file {int cp; int com; int tpat; int txp; int rxp; } ;
struct bnx2 {TYPE_2__* rv2p_firmware; TYPE_1__* mips_firmware; } ;
struct TYPE_4__ {scalar_t__ data; } ;
struct TYPE_3__ {scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct bnx2*,int *,int *) ;
 int FUNC_1 (struct bnx2*,int ,int *) ;

__attribute__((used)) static int
FUNC_2(struct bnx2 *VAR_7)
{
 const struct bnx2_mips_fw_file *VAR_8 =
  (const struct bnx2_mips_fw_file *) VAR_7->mips_firmware->data;
 const struct bnx2_rv2p_fw_file *VAR_9 =
  (const struct bnx2_rv2p_fw_file *) VAR_7->rv2p_firmware->data;
 int VAR_10;


 FUNC_1(VAR_7, VAR_0, &VAR_9->proc1);
 FUNC_1(VAR_7, VAR_1, &VAR_9->proc2);


 VAR_10 = FUNC_0(VAR_7, &VAR_4, &VAR_8->rxp);
 if (VAR_10)
  goto init_cpu_err;


 VAR_10 = FUNC_0(VAR_7, &VAR_6, &VAR_8->txp);
 if (VAR_10)
  goto init_cpu_err;


 VAR_10 = FUNC_0(VAR_7, &VAR_5, &VAR_8->tpat);
 if (VAR_10)
  goto init_cpu_err;


 VAR_10 = FUNC_0(VAR_7, &VAR_2, &VAR_8->com);
 if (VAR_10)
  goto init_cpu_err;


 VAR_10 = FUNC_0(VAR_7, &VAR_3, &VAR_8->cp);

init_cpu_err:
 return VAR_10;
}
