
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint ;
typedef int u64 ;
struct Scsi_Host {unsigned int max_id; int shost_gendev; scalar_t__ reverse_ordering; } ;
typedef enum scsi_scan_mode { ____Placeholder_scsi_scan_mode } scsi_scan_mode ;


 unsigned int VAR_0 ;
 int FUNC_0 (int *,unsigned int,unsigned int,int ,int) ;

__attribute__((used)) static void FUNC_1(struct Scsi_Host *VAR_1, unsigned int VAR_2,
         unsigned int VAR_3, u64 VAR_4,
         enum scsi_scan_mode VAR_5)
{
 uint VAR_6;

 if (VAR_3 == VAR_0)
  for (VAR_3 = 0; VAR_3 < VAR_1->max_id; ++VAR_3) {
   if (VAR_1->reverse_ordering)



    VAR_6 = VAR_1->max_id - VAR_3 - 1;
   else
    VAR_6 = VAR_3;
   FUNC_0(&VAR_1->shost_gendev, VAR_2,
     VAR_6, VAR_4, VAR_5);
  }
 else
  FUNC_0(&VAR_1->shost_gendev, VAR_2,
    VAR_3, VAR_4, VAR_5);
}
