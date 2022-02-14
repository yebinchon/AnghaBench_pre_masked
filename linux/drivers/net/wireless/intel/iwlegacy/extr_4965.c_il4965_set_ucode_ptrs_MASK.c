
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int p_addr; int len; } ;
struct TYPE_4__ {int len; } ;
struct TYPE_6__ {int p_addr; } ;
struct il_priv {TYPE_2__ ucode_code; TYPE_1__ ucode_data; TYPE_3__ ucode_data_backup; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct il_priv*,int ,int) ;

__attribute__((used)) static int
FUNC_2(struct il_priv *VAR_5)
{
 dma_addr_t VAR_6;
 dma_addr_t VAR_7;
 int VAR_8 = 0;


 VAR_6 = VAR_5->ucode_code.p_addr >> 4;
 VAR_7 = VAR_5->ucode_data_backup.p_addr >> 4;


 FUNC_1(VAR_5, VAR_4, VAR_6);
 FUNC_1(VAR_5, VAR_1, VAR_7);
 FUNC_1(VAR_5, VAR_0, VAR_5->ucode_data.len);



 FUNC_1(VAR_5, VAR_2,
     VAR_5->ucode_code.len | VAR_3);
 FUNC_0("Runtime uCode pointers are set.\n");

 return VAR_8;
}
