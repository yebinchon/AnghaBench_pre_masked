
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
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct bfa_flash*) ;
 int FUNC_1 (int ) ;

enum bfa_status
FUNC_2(struct bfa_flash *VAR_6, u32 VAR_7, u8 VAR_8,
    void *VAR_9, u32 VAR_10, u32 VAR_11,
    bfa_cb_flash VAR_12, void *VAR_13)
{
 if (!FUNC_1(VAR_6->ioc))
  return VAR_4;




 if (!VAR_10 || (VAR_10 & 0x03))
  return VAR_3;

 if (VAR_7 == VAR_0)
  return VAR_2;

 if (VAR_6->op_busy)
  return VAR_1;

 VAR_6->op_busy = 1;
 VAR_6->cbfn = VAR_12;
 VAR_6->cbarg = VAR_13;
 VAR_6->type = VAR_7;
 VAR_6->instance = VAR_8;
 VAR_6->residue = VAR_10;
 VAR_6->offset = 0;
 VAR_6->addr_off = VAR_11;
 VAR_6->ubuf = VAR_9;

 FUNC_0(VAR_6);

 return VAR_5;
}
