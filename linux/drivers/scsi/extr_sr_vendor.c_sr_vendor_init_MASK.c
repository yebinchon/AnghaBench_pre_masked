
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int mask; } ;
struct TYPE_7__ {void* vendor; TYPE_2__ cdi; TYPE_1__* device; scalar_t__ readcd_known; } ;
struct TYPE_5__ {char* vendor; char* model; scalar_t__ type; } ;
typedef TYPE_3__ Scsi_CD ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 int FUNC_0 (char const*,char*,int) ;

void FUNC_1(Scsi_CD *VAR_6)
{

 VAR_6->vendor = VAR_3;
}
