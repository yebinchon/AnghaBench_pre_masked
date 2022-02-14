
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct bfa_flash {int op_busy; int type; int residue; int addr_off; void* ubuf; scalar_t__ offset; int instance; void* cbarg; int cbfn; int ioc; } ;
typedef enum bfa_status { ____Placeholder_bfa_status } bfa_status ;
typedef int bfa_cb_flash ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct bfa_flash*) ;
 int FUNC_1 (int ) ;

enum bfa_status
FUNC_2(struct bfa_flash *VAR_4, u32 VAR_5, u8 VAR_6,
         void *VAR_7, u32 VAR_8, u32 VAR_9,
         bfa_cb_flash VAR_10, void *VAR_11)
{
 if (!FUNC_1(VAR_4->ioc))
  return VAR_2;




 if (!VAR_8 || (VAR_8 & 0x03))
  return VAR_1;

 if (VAR_4->op_busy)
  return VAR_0;

 VAR_4->op_busy = 1;
 VAR_4->cbfn = VAR_10;
 VAR_4->cbarg = VAR_11;
 VAR_4->type = VAR_5;
 VAR_4->instance = VAR_6;
 VAR_4->residue = VAR_8;
 VAR_4->offset = 0;
 VAR_4->addr_off = VAR_9;
 VAR_4->ubuf = VAR_7;

 FUNC_0(VAR_4);

 return VAR_3;
}
