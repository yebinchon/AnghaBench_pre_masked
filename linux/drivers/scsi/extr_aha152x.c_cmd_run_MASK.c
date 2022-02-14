
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct Scsi_Host {int dummy; } ;
struct TYPE_2__ {scalar_t__ cmd_len; int * cmnd; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(struct Scsi_Host *VAR_5)
{
 while(VAR_0<VAR_1->cmd_len) {
  if (FUNC_1(VAR_4, VAR_3))
   return;

  FUNC_0(VAR_2, VAR_1->cmnd[VAR_0++]);
 }
}
