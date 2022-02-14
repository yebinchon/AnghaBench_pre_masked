
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fw_vi_enable_cmd {int blinkdur; void* ien_to_len16; void* op_to_viid; } ;
struct adapter {int dummy; } ;
typedef int cmd ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (struct fw_vi_enable_cmd) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (unsigned int) ;
 void* FUNC_4 (int) ;
 int FUNC_5 (struct fw_vi_enable_cmd*,int ,int) ;
 int FUNC_6 (struct adapter*,struct fw_vi_enable_cmd*,int,int *) ;

int FUNC_7(struct adapter *VAR_4, unsigned int VAR_5,
         unsigned int VAR_6)
{
 struct fw_vi_enable_cmd VAR_7;

 FUNC_5(&VAR_7, 0, sizeof(VAR_7));
 VAR_7.op_to_viid = FUNC_4(FUNC_0(VAR_2) |
         VAR_1 |
         VAR_0 |
         FUNC_2(VAR_5));
 VAR_7.ien_to_len16 = FUNC_4(VAR_3 |
           FUNC_1(VAR_7));
 VAR_7.blinkdur = FUNC_3(VAR_6);
 return FUNC_6(VAR_4, &VAR_7, sizeof(VAR_7), ((void*)0));
}
