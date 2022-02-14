
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fw_vi_cmd {int type_viid; void* alloc_to_len16; void* op_to_vfn; } ;
struct adapter {int dummy; } ;
typedef int c ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (struct fw_vi_cmd) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 (unsigned int) ;
 int FUNC_5 (int ) ;
 void* FUNC_6 (int) ;
 int FUNC_7 (struct fw_vi_cmd*,int ,int) ;
 int FUNC_8 (struct adapter*,unsigned int,struct fw_vi_cmd*,int,struct fw_vi_cmd*) ;

int FUNC_9(struct adapter *VAR_4, unsigned int VAR_5, unsigned int VAR_6,
        unsigned int VAR_7, unsigned int VAR_8)
{
 struct fw_vi_cmd VAR_9;

 FUNC_7(&VAR_9, 0, sizeof(VAR_9));
 VAR_9.op_to_vfn = FUNC_6(FUNC_0(VAR_2) |
      VAR_1 |
      VAR_0 |
      FUNC_2(VAR_6) |
      FUNC_3(VAR_7));
 VAR_9.alloc_to_len16 = FUNC_6(VAR_3 | FUNC_1(VAR_9));
 VAR_9.type_viid = FUNC_5(FUNC_4(VAR_8));

 return FUNC_8(VAR_4, VAR_5, &VAR_9, sizeof(VAR_9), &VAR_9);
}
