
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct fw_vi_mac_raw {void* raw_idx_pkd; int * data1m; int * data1; int data0m_pkd; void* data0_pkd; } ;
struct TYPE_2__ {struct fw_vi_mac_raw raw; } ;
struct fw_vi_mac_cmd {void* freemacs_to_len16; void* op_to_viid; TYPE_1__ u; } ;
struct adapter {int mbox; } ;
typedef int c ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (unsigned int) ;
 int FUNC_7 (unsigned int) ;
 int VAR_7 ;
 int FUNC_8 (void*) ;
 void* FUNC_9 (int) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int *,int const*,int ) ;
 int FUNC_12 (struct fw_vi_mac_cmd*,int ,int) ;
 int FUNC_13 (struct adapter*,int ,struct fw_vi_mac_cmd*,int,struct fw_vi_mac_cmd*,int) ;

int FUNC_14(struct adapter *VAR_8, unsigned int VAR_9,
     const u8 *VAR_10, const u8 *VAR_11, unsigned int VAR_12,
     u8 VAR_13, u8 VAR_14, bool VAR_15)
{
 int VAR_16 = 0;
 struct fw_vi_mac_cmd VAR_17;
 struct fw_vi_mac_raw *VAR_18 = &VAR_17.u.raw;
 u32 VAR_19;

 FUNC_12(&VAR_17, 0, sizeof(VAR_17));
 VAR_17.op_to_viid = FUNC_9(FUNC_3(VAR_6) |
       VAR_4 | VAR_5 |
       FUNC_7(VAR_9));
 VAR_19 = FUNC_2(1) |
       FUNC_4(VAR_7);
 VAR_17.freemacs_to_len16 = FUNC_9(VAR_19);


 VAR_18->raw_idx_pkd = FUNC_9(FUNC_6(VAR_12));


 VAR_18->data0_pkd = FUNC_9(FUNC_0(VAR_13) |
       FUNC_1(VAR_14));

 VAR_18->data0m_pkd = FUNC_10(FUNC_0(VAR_0) |
        FUNC_1(VAR_1));


 FUNC_11((u8 *)&VAR_18->data1[0] + 2, VAR_10, VAR_3);
 FUNC_11((u8 *)&VAR_18->data1m[0] + 2, VAR_11, VAR_3);

 VAR_16 = FUNC_13(VAR_8, VAR_8->mbox, &VAR_17, sizeof(VAR_17), &VAR_17, VAR_15);
 if (VAR_16 == 0) {
  VAR_16 = FUNC_5(FUNC_8(VAR_18->raw_idx_pkd));
  if (VAR_16 != VAR_12)
   VAR_16 = -VAR_2;
 }

 return VAR_16;
}
