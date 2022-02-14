
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct scsi_sense_hdr {int sense_key; int asc; int ascq; } ;


 int FUNC_0 (int const*,int,struct scsi_sense_hdr*) ;

__attribute__((used)) static void FUNC_1(const u8 *VAR_0, int VAR_1,
   u8 *VAR_2, u8 *VAR_3, u8 *VAR_4)
{
 struct scsi_sense_hdr VAR_5;
 bool VAR_6;

 *VAR_2 = -1;
 *VAR_3 = -1;
 *VAR_4 = -1;

 if (VAR_1 < 1)
  return;

 VAR_6 = FUNC_0(VAR_0, VAR_1, &VAR_5);
 if (VAR_6) {
  *VAR_2 = VAR_5.sense_key;
  *VAR_3 = VAR_5.asc;
  *VAR_4 = VAR_5.ascq;
 }
}
