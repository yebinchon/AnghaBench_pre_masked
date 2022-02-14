
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct us_data {scalar_t__ extra; } ;
struct scsi_cmnd {int dummy; } ;
struct ene_ub6250_info {int SrbStatus; } ;
typedef int buf ;


 int VAR_0 ;
 int FUNC_0 (unsigned char*,int ,int) ;
 int FUNC_1 (unsigned char*,int,struct scsi_cmnd*) ;

__attribute__((used)) static int FUNC_2(struct us_data *VAR_1, struct scsi_cmnd *VAR_2)
{
 struct ene_ub6250_info *VAR_3 = (struct ene_ub6250_info *) VAR_1->extra;
 unsigned char VAR_4[18];

 FUNC_0(VAR_4, 0, 18);
 VAR_4[0] = 0x70;
 VAR_4[2] = VAR_3->SrbStatus >> 16;
 VAR_4[7] = 10;
 VAR_4[12] = VAR_3->SrbStatus >> 8;
 VAR_4[13] = VAR_3->SrbStatus;

 FUNC_1(VAR_4, sizeof(VAR_4), VAR_2);
 return VAR_0;
}
