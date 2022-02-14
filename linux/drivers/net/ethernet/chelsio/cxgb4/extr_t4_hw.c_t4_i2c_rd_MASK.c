
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {int pid; unsigned int did; unsigned int boffset; unsigned int blen; int data; } ;
struct TYPE_4__ {TYPE_1__ i2c; } ;
struct fw_ldst_cmd {TYPE_2__ u; void* cycles_to_len16; void* op_to_addrspace; } ;
struct adapter {int dummy; } ;
typedef int ldst_cmd ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct fw_ldst_cmd) ;
 unsigned int VAR_5 ;
 void* FUNC_3 (int) ;
 int FUNC_4 (int *,int ,unsigned int) ;
 int FUNC_5 (struct fw_ldst_cmd*,int ,int) ;
 int FUNC_6 (struct adapter*,unsigned int,struct fw_ldst_cmd*,int,struct fw_ldst_cmd*) ;

int FUNC_7(struct adapter *VAR_6, unsigned int VAR_7, int VAR_8,
       unsigned int VAR_9, unsigned int VAR_10,
       unsigned int VAR_11, u8 *VAR_12)
{
 struct fw_ldst_cmd VAR_13, VAR_14;
 unsigned int VAR_15 = sizeof(VAR_13.u.i2c.data);
 int VAR_16 = 0;

 if (VAR_11 > VAR_5)
  return -VAR_0;


 if (VAR_10 < VAR_5 && VAR_10 + VAR_11 > VAR_5)
  return -VAR_0;

 FUNC_5(&VAR_13, 0, sizeof(VAR_13));
 VAR_13.op_to_addrspace =
  FUNC_3(FUNC_0(VAR_4) |
       VAR_2 |
       VAR_1 |
       FUNC_1(VAR_3));
 VAR_13.cycles_to_len16 = FUNC_3(FUNC_2(VAR_13));
 VAR_13.u.i2c.pid = (VAR_8 < 0 ? 0xff : VAR_8);
 VAR_13.u.i2c.did = VAR_9;

 while (VAR_11 > 0) {
  unsigned int VAR_17 = (VAR_11 < VAR_15) ? VAR_11 : VAR_15;

  VAR_13.u.i2c.boffset = VAR_10;
  VAR_13.u.i2c.blen = VAR_17;

  VAR_16 = FUNC_6(VAR_6, VAR_7, &VAR_13, sizeof(VAR_13),
     &VAR_14);
  if (VAR_16)
   break;

  FUNC_4(VAR_12, VAR_14.u.i2c.data, VAR_17);
  VAR_10 += VAR_17;
  VAR_12 += VAR_17;
  VAR_11 -= VAR_17;
 }

 return VAR_16;
}
