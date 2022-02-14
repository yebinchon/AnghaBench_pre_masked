
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Scsi_Host {int eh_deadline; scalar_t__ last_reset; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct Scsi_Host *VAR_1)
{
 if (!VAR_1->last_reset || VAR_1->eh_deadline == -1)
  return 0;
 if (FUNC_0(VAR_0, VAR_1->last_reset + VAR_1->eh_deadline) &&
     VAR_1->eh_deadline > -1)
  return 0;

 return 1;
}
