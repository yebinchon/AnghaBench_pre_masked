
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned int u32 ;
struct TYPE_3__ {void* val; void* addr; } ;
struct TYPE_4__ {TYPE_1__ addrval; } ;
struct fw_ldst_cmd {TYPE_2__ u; void* cycles_to_len16; void* op_to_addrspace; } ;
struct adapter {int mbox; } ;
typedef int c ;


 unsigned int FUNC_0 (int ) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 unsigned int FUNC_1 (int) ;
 unsigned int FUNC_2 (struct fw_ldst_cmd) ;
 unsigned int FUNC_3 (void*) ;
 void* FUNC_4 (unsigned int) ;
 int FUNC_5 (struct fw_ldst_cmd*,int ,int) ;
 int FUNC_6 (struct adapter*,int ,struct fw_ldst_cmd*,int,struct fw_ldst_cmd*,int) ;

__attribute__((used)) static int FUNC_7(struct adapter *VAR_4, int VAR_5, u32 *VAR_6,
       unsigned int VAR_7, unsigned int VAR_8,
       unsigned int VAR_9, bool VAR_10)
{
 int VAR_11 = 0;
 unsigned int VAR_12;
 struct fw_ldst_cmd VAR_13;

 for (VAR_12 = 0; VAR_12 < VAR_7; VAR_12++) {
  FUNC_5(&VAR_13, 0, sizeof(VAR_13));
  VAR_13.op_to_addrspace = FUNC_4(FUNC_0(VAR_3) |
      VAR_1 |
      (VAR_9 ? VAR_0 :
            VAR_2) |
      FUNC_1(VAR_5));
  VAR_13.cycles_to_len16 = FUNC_4(FUNC_2(VAR_13));

  VAR_13.u.addrval.addr = FUNC_4(VAR_8 + VAR_12);
  VAR_13.u.addrval.val = VAR_9 ? 0 : FUNC_4(VAR_6[VAR_12]);
  VAR_11 = FUNC_6(VAR_4, VAR_4->mbox, &VAR_13, sizeof(VAR_13), &VAR_13,
          VAR_10);
  if (VAR_11)
   return VAR_11;

  if (VAR_9)
   VAR_6[VAR_12] = FUNC_3(VAR_13.u.addrval.val);
 }
 return 0;
}
