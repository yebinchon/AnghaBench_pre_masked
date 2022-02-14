
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct fw_devlog_e {int dummy; } ;
struct fw_devlog_cmd {int memsize_devlog; int memtype_devlog_memaddr16_devlog; void* retval_len16; void* op_to_write; } ;
struct devlog_params {int start; unsigned int size; int memtype; } ;
struct TYPE_2__ {struct devlog_params devlog; } ;
struct adapter {int mbox; TYPE_1__ params; } ;
typedef int devlog_cmd ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (struct fw_devlog_cmd) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 unsigned int FUNC_6 (scalar_t__) ;
 int FUNC_7 (int ,int ) ;
 void* FUNC_8 (int ) ;
 void* FUNC_9 (int) ;
 int FUNC_10 (struct fw_devlog_cmd*,int ,int) ;
 scalar_t__ FUNC_11 (struct adapter*,int ) ;
 int FUNC_12 (struct adapter*,int ,struct fw_devlog_cmd*,int,struct fw_devlog_cmd*) ;

int FUNC_13(struct adapter *VAR_5)
{
 struct devlog_params *VAR_6 = &VAR_5->params.devlog;
 u32 VAR_7;
 unsigned int VAR_8;
 struct fw_devlog_cmd VAR_9;
 int VAR_10;





 VAR_7 =
  FUNC_11(VAR_5, FUNC_7(VAR_3, VAR_4));
 if (VAR_7) {
  unsigned int VAR_11, VAR_12;

  VAR_6->memtype = FUNC_5(VAR_7);
  VAR_6->start = FUNC_4(VAR_7) << 4;

  VAR_12 = FUNC_6(VAR_7);
  VAR_11 = (VAR_12 + 1) * 128;
  VAR_6->size = VAR_11 * sizeof(struct fw_devlog_e);

  return 0;
 }



 FUNC_10(&VAR_9, 0, sizeof(VAR_9));
 VAR_9.op_to_write = FUNC_9(FUNC_0(VAR_2) |
          VAR_1 | VAR_0);
 VAR_9.retval_len16 = FUNC_9(FUNC_3(VAR_9));
 VAR_10 = FUNC_12(VAR_5, VAR_5->mbox, &VAR_9, sizeof(VAR_9),
    &VAR_9);
 if (VAR_10)
  return VAR_10;

 VAR_8 =
  FUNC_8(VAR_9.memtype_devlog_memaddr16_devlog);
 VAR_6->memtype = FUNC_2(VAR_8);
 VAR_6->start = FUNC_1(VAR_8) << 4;
 VAR_6->size = FUNC_8(VAR_9.memsize_devlog);

 return 0;
}
