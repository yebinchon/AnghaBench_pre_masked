
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_cmnd {scalar_t__ sc_data_direction; } ;
struct rtsx_chip {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct scsi_cmnd*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct rtsx_chip*,int ,int ) ;

__attribute__((used)) static inline void FUNC_2(struct scsi_cmnd *VAR_3, struct rtsx_chip *VAR_4)
{
 if (VAR_3->sc_data_direction == VAR_0)
  FUNC_1(VAR_4, FUNC_0(VAR_3),
          VAR_1);
 else
  FUNC_1(VAR_4, FUNC_0(VAR_3), VAR_2);
}
