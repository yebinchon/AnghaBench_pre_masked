
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int db_buf_cntl; int update_db_buf; int en_db_buf; } ;
union disp_db_buf_cntl_wr_u {scalar_t__ val; TYPE_1__ f; } ;
typedef int u32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_1(void)
{
 union disp_db_buf_cntl_wr_u VAR_2;


 VAR_2.f.db_buf_cntl = 0x1e;
 VAR_2.f.update_db_buf = 1;
 VAR_2.f.en_db_buf = 1;
 FUNC_0((u32) (VAR_2.val), VAR_1 + VAR_0);
}
