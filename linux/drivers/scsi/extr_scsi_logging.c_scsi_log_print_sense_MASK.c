
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_sense_hdr {int dummy; } ;
struct scsi_device {int dummy; } ;


 int FUNC_0 (struct scsi_device const*,char const*,int,unsigned char const*,int) ;
 int FUNC_1 (struct scsi_device const*,char const*,int,struct scsi_sense_hdr*) ;
 scalar_t__ FUNC_2 (unsigned char const*,int,struct scsi_sense_hdr*) ;

__attribute__((used)) static void
FUNC_3(const struct scsi_device *VAR_0, const char *VAR_1, int VAR_2,
       const unsigned char *VAR_3, int VAR_4)
{
 struct scsi_sense_hdr VAR_5;

 if (FUNC_2(VAR_3, VAR_4, &VAR_5))
  FUNC_1(VAR_0, VAR_1, VAR_2, &VAR_5);
 else
  FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
}
