
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
typedef scalar_t__ u16 ;
struct ufx_data {TYPE_3__* info; } ;
struct TYPE_5__ {int line_length; scalar_t__ smem_start; } ;
struct TYPE_4__ {int xres; int yres; } ;
struct TYPE_6__ {TYPE_2__ fix; TYPE_1__ var; } ;


 size_t FUNC_0 (int,int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (size_t) ;
 int FUNC_4 (scalar_t__*,char*,int) ;

__attribute__((used)) static void FUNC_5(struct ufx_data *VAR_1, u16 *VAR_2, int VAR_3, int VAR_4,
 int VAR_5, int VAR_6)
{
 size_t VAR_7 = FUNC_0((VAR_5 * 2), 4);
 size_t VAR_8 = VAR_7 * VAR_6;
 int VAR_9;

 FUNC_1(!VAR_1);
 FUNC_1(!VAR_1->info);


 *((u32 *)&VAR_2[0]) = FUNC_3(0x01);


 *((u32 *)&VAR_2[2]) = FUNC_3(VAR_8 + 16);

 VAR_2[4] = FUNC_2(VAR_3);
 VAR_2[5] = FUNC_2(VAR_4);
 VAR_2[6] = FUNC_2(VAR_5);
 VAR_2[7] = FUNC_2(VAR_6);


 *((u32 *)&VAR_2[8]) = FUNC_3(0);


 VAR_2[10] = FUNC_2(0x4000 | VAR_1->info->var.xres);


 VAR_2[11] = FUNC_2(VAR_1->info->var.yres);


 for (VAR_9 = 0; VAR_9 < VAR_6; VAR_9++) {
  const int VAR_10 = VAR_1->info->fix.line_length * (VAR_4 + VAR_9);
  const int VAR_11 = VAR_10 + (VAR_3 * VAR_0);
  FUNC_4(&VAR_2[(24 + (VAR_7 * VAR_9)) / 2],
   (char *)VAR_1->info->fix.smem_start + VAR_11, VAR_5 * VAR_0);
 }
}
