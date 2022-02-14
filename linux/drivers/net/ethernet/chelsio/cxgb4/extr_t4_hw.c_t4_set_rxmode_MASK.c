
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fw_vi_rxmode_cmd {void* mtu_to_vlanexen; void* retval_len16; void* op_to_viid; } ;
struct adapter {int dummy; } ;
typedef int c ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct fw_vi_rxmode_cmd) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int) ;
 int VAR_5 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int VAR_6 ;
 int FUNC_5 (int) ;
 int FUNC_6 (unsigned int) ;
 int VAR_7 ;
 int FUNC_7 (int) ;
 void* FUNC_8 (int) ;
 int FUNC_9 (struct fw_vi_rxmode_cmd*,int ,int) ;
 int FUNC_10 (struct adapter*,unsigned int,struct fw_vi_rxmode_cmd*,int,int *,int) ;

int FUNC_11(struct adapter *VAR_8, unsigned int VAR_9, unsigned int VAR_10,
    int VAR_11, int VAR_12, int VAR_13, int VAR_14, int VAR_15,
    bool VAR_16)
{
 struct fw_vi_rxmode_cmd VAR_17;


 if (VAR_11 < 0)
  VAR_11 = VAR_2;
 if (VAR_12 < 0)
  VAR_12 = VAR_6;
 if (VAR_13 < 0)
  VAR_13 = VAR_4;
 if (VAR_14 < 0)
  VAR_14 = VAR_5;
 if (VAR_15 < 0)
  VAR_15 = VAR_7;

 FUNC_9(&VAR_17, 0, sizeof(VAR_17));
 VAR_17.op_to_viid = FUNC_8(FUNC_0(VAR_3) |
       VAR_0 | VAR_1 |
       FUNC_6(VAR_10));
 VAR_17.retval_len16 = FUNC_8(FUNC_1(VAR_17));
 VAR_17.mtu_to_vlanexen =
  FUNC_8(FUNC_4(VAR_11) |
       FUNC_5(VAR_12) |
       FUNC_2(VAR_13) |
       FUNC_3(VAR_14) |
       FUNC_7(VAR_15));
 return FUNC_10(VAR_8, VAR_9, &VAR_17, sizeof(VAR_17), ((void*)0), VAR_16);
}
