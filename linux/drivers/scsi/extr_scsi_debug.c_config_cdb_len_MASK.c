
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {int use_10_for_rw; int use_16_for_rw; int use_10_for_ms; } ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(struct scsi_device *VAR_1)
{
 switch (VAR_0) {
 case 6:
  VAR_1->use_10_for_rw = 0;
  VAR_1->use_16_for_rw = 0;
  VAR_1->use_10_for_ms = 0;
  break;
 case 10:
  VAR_1->use_10_for_rw = 1;
  VAR_1->use_16_for_rw = 0;
  VAR_1->use_10_for_ms = 0;
  break;
 case 12:
  VAR_1->use_10_for_rw = 1;
  VAR_1->use_16_for_rw = 0;
  VAR_1->use_10_for_ms = 1;
  break;
 case 16:
  VAR_1->use_10_for_rw = 0;
  VAR_1->use_16_for_rw = 1;
  VAR_1->use_10_for_ms = 1;
  break;
 case 32:
  VAR_1->use_10_for_rw = 0;
  VAR_1->use_16_for_rw = 1;
  VAR_1->use_10_for_ms = 1;
  break;
 default:
  FUNC_0("unexpected cdb_len=%d, force to 10\n",
   VAR_0);
  VAR_1->use_10_for_rw = 1;
  VAR_1->use_16_for_rw = 0;
  VAR_1->use_10_for_ms = 0;
  VAR_0 = 10;
  break;
 }
}
