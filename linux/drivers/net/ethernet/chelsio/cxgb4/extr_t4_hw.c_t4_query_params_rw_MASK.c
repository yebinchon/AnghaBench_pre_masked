
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct fw_params_cmd {TYPE_1__* param; void* retval_len16; void* op_to_vfn; } ;
struct adapter {int dummy; } ;
typedef int c ;
typedef void* __be32 ;
struct TYPE_2__ {void* val; void* mnem; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct fw_params_cmd) ;
 int VAR_3 ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 (void*) ;
 void* FUNC_5 (int) ;
 int FUNC_6 (struct fw_params_cmd*,int ,int) ;
 int FUNC_7 (struct adapter*,unsigned int,struct fw_params_cmd*,int,struct fw_params_cmd*,int) ;

int FUNC_8(struct adapter *VAR_4, unsigned int VAR_5, unsigned int VAR_6,
         unsigned int VAR_7, unsigned int VAR_8, const u32 *VAR_9,
         u32 *VAR_10, int VAR_11, bool VAR_12)
{
 int VAR_13, VAR_14;
 struct fw_params_cmd VAR_15;
 __be32 *VAR_16 = &VAR_15.param[0].mnem;

 if (VAR_8 > 7)
  return -VAR_0;

 FUNC_6(&VAR_15, 0, sizeof(VAR_15));
 VAR_15.op_to_vfn = FUNC_5(FUNC_0(VAR_3) |
      VAR_2 | VAR_1 |
      FUNC_2(VAR_6) |
      FUNC_3(VAR_7));
 VAR_15.retval_len16 = FUNC_5(FUNC_1(VAR_15));

 for (VAR_13 = 0; VAR_13 < VAR_8; VAR_13++) {
  *VAR_16++ = FUNC_5(*VAR_9++);
  if (VAR_11)
   *VAR_16 = FUNC_5(*(VAR_10 + VAR_13));
  VAR_16++;
 }

 VAR_14 = FUNC_7(VAR_4, VAR_5, &VAR_15, sizeof(VAR_15), &VAR_15, VAR_12);
 if (VAR_14 == 0)
  for (VAR_13 = 0, VAR_16 = &VAR_15.param[0].val; VAR_13 < VAR_8; VAR_13++, VAR_16 += 2)
   *VAR_10++ = FUNC_4(*VAR_16);
 return VAR_14;
}
