
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct mpt3_diag_register {int requested_buffer_size; int unique_id; int buffer_type; } ;
struct TYPE_2__ {scalar_t__ MasterData; } ;
struct MPT3SAS_ADAPTER {TYPE_1__ diag_trigger_master; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct MPT3SAS_ADAPTER*,struct mpt3_diag_register*) ;
 int FUNC_1 (struct MPT3SAS_ADAPTER*,char*) ;
 int FUNC_2 (struct mpt3_diag_register*,int ,int) ;

void
FUNC_3(struct MPT3SAS_ADAPTER *VAR_5, u8 VAR_6)
{
 struct mpt3_diag_register VAR_7;

 FUNC_2(&VAR_7, 0, sizeof(struct mpt3_diag_register));

 if (VAR_6 & 1) {
  FUNC_1(VAR_5, "registering trace buffer support\n");
  VAR_5->diag_trigger_master.MasterData =
      (VAR_1 + VAR_0);
  VAR_7.buffer_type = VAR_4;

  VAR_7.requested_buffer_size = 2 * (1024 * 1024);
  VAR_7.unique_id = 0x7075900;
  FUNC_0(VAR_5, &VAR_7);
 }

 if (VAR_6 & 2) {
  FUNC_1(VAR_5, "registering snapshot buffer support\n");
  VAR_7.buffer_type = VAR_3;

  VAR_7.requested_buffer_size = 2 * (1024 * 1024);
  VAR_7.unique_id = 0x7075901;
  FUNC_0(VAR_5, &VAR_7);
 }

 if (VAR_6 & 4) {
  FUNC_1(VAR_5, "registering extended buffer support\n");
  VAR_7.buffer_type = VAR_2;

  VAR_7.requested_buffer_size = 2 * (1024 * 1024);
  VAR_7.unique_id = 0x7075901;
  FUNC_0(VAR_5, &VAR_7);
 }
}
