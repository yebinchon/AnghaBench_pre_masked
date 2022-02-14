
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct us_data {scalar_t__ extra; } ;
struct scsi_cmnd {int dummy; } ;
struct TYPE_2__ {scalar_t__ WtP; } ;
struct ene_ub6250_info {TYPE_1__ MS_Status; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned char*,int,struct scsi_cmnd*) ;

__attribute__((used)) static int FUNC_1(struct us_data *VAR_1, struct scsi_cmnd *VAR_2)
{
 struct ene_ub6250_info *VAR_3 = (struct ene_ub6250_info *) VAR_1->extra;
 unsigned char VAR_4[12] = {
  0x0b, 0x00, 0x00, 0x08, 0x00, 0x00,
  0x71, 0xc0, 0x00, 0x00, 0x02, 0x00 };
 unsigned char VAR_5[12] = {
  0x0b, 0x00, 0x80, 0x08, 0x00, 0x00,
  0x71, 0xc0, 0x00, 0x00, 0x02, 0x00 };

 if (VAR_3->MS_Status.WtP)
  FUNC_0(VAR_5, 12, VAR_2);
 else
  FUNC_0(VAR_4, 12, VAR_2);

 return VAR_0;
}
