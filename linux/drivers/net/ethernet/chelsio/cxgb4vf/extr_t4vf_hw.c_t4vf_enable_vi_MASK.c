
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fw_vi_enable_cmd {void* ien_to_len16; void* op_to_viid; } ;
struct adapter {int dummy; } ;
typedef int cmd ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (struct fw_vi_enable_cmd) ;
 int VAR_2 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (unsigned int) ;
 void* FUNC_5 (int) ;
 int FUNC_6 (struct fw_vi_enable_cmd*,int ,int) ;
 int FUNC_7 (struct adapter*,struct fw_vi_enable_cmd*,int,int *) ;

int FUNC_8(struct adapter *VAR_3, unsigned int VAR_4,
     bool VAR_5, bool VAR_6)
{
 struct fw_vi_enable_cmd VAR_7;

 FUNC_6(&VAR_7, 0, sizeof(VAR_7));
 VAR_7.op_to_viid = FUNC_5(FUNC_0(VAR_2) |
         VAR_1 |
         VAR_0 |
         FUNC_4(VAR_4));
 VAR_7.ien_to_len16 = FUNC_5(FUNC_3(VAR_5) |
           FUNC_2(VAR_6) |
           FUNC_1(VAR_7));
 return FUNC_7(VAR_3, &VAR_7, sizeof(VAR_7), ((void*)0));
}
