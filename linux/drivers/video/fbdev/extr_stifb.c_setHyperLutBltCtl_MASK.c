
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int bits_per_pixel; } ;
struct TYPE_7__ {TYPE_1__ var; } ;
struct stifb_info {TYPE_2__ info; } ;
struct TYPE_8__ {int length; int lutOffset; int lutType; } ;
struct TYPE_9__ {int all; TYPE_3__ fields; } ;
typedef TYPE_4__ NgleLutBltCtl ;


 int VAR_0 ;

__attribute__((used)) static NgleLutBltCtl
FUNC_0(struct stifb_info *VAR_1, int VAR_2, int VAR_3)
{
 NgleLutBltCtl VAR_4;


 VAR_4.all = 0x80000000;

 VAR_4.fields.length = VAR_3;
 VAR_4.fields.lutType = VAR_0;


 if (VAR_1->info.var.bits_per_pixel == 8)
  VAR_4.fields.lutOffset = 2 * 256;
 else
  VAR_4.fields.lutOffset = 0 * 256;


 VAR_4.fields.lutOffset += VAR_2;

 return VAR_4;
}
