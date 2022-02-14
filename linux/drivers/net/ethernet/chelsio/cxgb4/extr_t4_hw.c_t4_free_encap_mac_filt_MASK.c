
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct fw_vi_mac_exact {int macaddr; int valid_to_idx; } ;
struct TYPE_2__ {struct fw_vi_mac_exact* exact; } ;
struct fw_vi_mac_cmd {TYPE_1__ u; void* freemacs_to_len16; void* op_to_viid; } ;
struct adapter {int mbox; } ;
typedef int c ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int) ;
 int VAR_3 ;
 int FUNC_6 (unsigned int) ;
 int VAR_4 ;
 int FUNC_7 (int) ;
 void* FUNC_8 (int) ;
 int FUNC_9 (int ,int *,int) ;
 int FUNC_10 (struct fw_vi_mac_cmd*,int ,int) ;
 int FUNC_11 (struct adapter*,int ,struct fw_vi_mac_cmd*,int,struct fw_vi_mac_cmd*,int) ;

int FUNC_12(struct adapter *VAR_5, unsigned int VAR_6,
      int VAR_7, bool VAR_8)
{
 struct fw_vi_mac_exact *VAR_9;
 u8 VAR_10[] = {0, 0, 0, 0, 0, 0};
 struct fw_vi_mac_cmd VAR_11;
 int VAR_12 = 0;
 u32 VAR_13;

 FUNC_10(&VAR_11, 0, sizeof(VAR_11));
 VAR_11.op_to_viid = FUNC_8(FUNC_2(VAR_2) |
       VAR_0 | VAR_1 |
       FUNC_0(0) |
       FUNC_6(VAR_6));
 VAR_13 = FUNC_3(VAR_4);
 VAR_11.freemacs_to_len16 = FUNC_8(FUNC_4(0) |
       VAR_13 |
       FUNC_1(1));
 VAR_9 = VAR_11.u.exact;
 VAR_9->valid_to_idx = FUNC_7(VAR_3 |
          FUNC_5(VAR_7));
 FUNC_9(VAR_9->macaddr, VAR_10, sizeof(VAR_9->macaddr));
 VAR_12 = FUNC_11(VAR_5, VAR_5->mbox, &VAR_11, sizeof(VAR_11), &VAR_11, VAR_8);
 return VAR_12;
}
