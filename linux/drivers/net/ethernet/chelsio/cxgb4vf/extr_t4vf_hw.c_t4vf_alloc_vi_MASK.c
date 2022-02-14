
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fw_vi_cmd {int type_viid; int portid_pkd; void* alloc_to_len16; void* op_to_vfn; } ;
struct adapter {int dummy; } ;
typedef int cmd ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct fw_vi_cmd) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 void* FUNC_5 (int) ;
 int FUNC_6 (struct fw_vi_cmd*,int ,int) ;
 int FUNC_7 (struct adapter*,struct fw_vi_cmd*,int,struct fw_vi_cmd*) ;

int FUNC_8(struct adapter *VAR_5, int VAR_6)
{
 struct fw_vi_cmd VAR_7, VAR_8;
 int VAR_9;





 FUNC_6(&VAR_7, 0, sizeof(VAR_7));
 VAR_7.op_to_vfn = FUNC_5(FUNC_0(VAR_3) |
        VAR_1 |
        VAR_2 |
        VAR_0);
 VAR_7.alloc_to_len16 = FUNC_5(FUNC_1(VAR_7) |
      VAR_4);
 VAR_7.portid_pkd = FUNC_2(VAR_6);
 VAR_9 = FUNC_7(VAR_5, &VAR_7, sizeof(VAR_7), &VAR_8);
 if (VAR_9)
  return VAR_9;

 return FUNC_3(FUNC_4(VAR_8.type_viid));
}
