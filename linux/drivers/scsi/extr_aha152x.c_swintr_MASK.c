
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct Scsi_Host {int dummy; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int swint; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct Scsi_Host*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_3, void *VAR_4)
{
 struct Scsi_Host *VAR_5 = VAR_4;

 FUNC_0(VAR_5)->swint++;

 FUNC_1(VAR_0, VAR_1);
 return VAR_2;
}
