
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef scalar_t__ u16 ;
struct fcoe_bd_ctx {int buf_addr_lo; int buf_addr_hi; scalar_t__ flags; scalar_t__ buf_len; } ;
struct bnx2fc_cmd {TYPE_1__* bd_tbl; } ;
struct TYPE_2__ {struct fcoe_bd_ctx* bd_tbl; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct bnx2fc_cmd *VAR_1, u64 VAR_2, int VAR_3,
      int VAR_4)
{
 struct fcoe_bd_ctx *VAR_5 = VAR_1->bd_tbl->bd_tbl;
 int VAR_6, VAR_7;

 VAR_7 = 0;
 while (VAR_3) {
  if (VAR_3 >= VAR_0)
   VAR_6 = VAR_0;
  else
   VAR_6 = VAR_3;
  VAR_5[VAR_4 + VAR_7].buf_addr_lo = VAR_2 & 0xffffffff;
  VAR_5[VAR_4 + VAR_7].buf_addr_hi = VAR_2 >> 32;
  VAR_5[VAR_4 + VAR_7].buf_len = (u16)VAR_6;
  VAR_5[VAR_4 + VAR_7].flags = 0;

  VAR_2 += (u64) VAR_6;
  VAR_7++;
  VAR_3 -= VAR_6;
 }
 return VAR_7;

}
