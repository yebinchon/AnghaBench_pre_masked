
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_sense_hdr {int ascq; int asc; } ;
struct scsi_device {int sdev_gendev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,char*,char*) ;
 scalar_t__ FUNC_1 (char*,size_t,int ,int ) ;
 scalar_t__ FUNC_2 (char*,size_t,struct scsi_sense_hdr const*) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (size_t*) ;
 size_t FUNC_5 (char*,size_t,char const*,int) ;

__attribute__((used)) static void
FUNC_6(const struct scsi_device *VAR_1, const char *VAR_2,
    int VAR_3, const struct scsi_sense_hdr *VAR_4)
{
 char *VAR_5;
 size_t VAR_6, VAR_7;

 VAR_5 = FUNC_4(&VAR_7);
 if (!VAR_5)
  return;
 VAR_6 = FUNC_5(VAR_5, VAR_7, VAR_2, VAR_3);
 VAR_6 += FUNC_2(VAR_5 + VAR_6, VAR_7 - VAR_6, VAR_4);
 FUNC_0(VAR_0, &VAR_1->sdev_gendev, "%s", VAR_5);
 FUNC_3(VAR_5);

 VAR_5 = FUNC_4(&VAR_7);
 if (!VAR_5)
  return;
 VAR_6 = FUNC_5(VAR_5, VAR_7, VAR_2, VAR_3);
 VAR_6 += FUNC_1(VAR_5 + VAR_6, VAR_7 - VAR_6,
          VAR_4->asc, VAR_4->ascq);
 FUNC_0(VAR_0, &VAR_1->sdev_gendev, "%s", VAR_5);
 FUNC_3(VAR_5);
}
