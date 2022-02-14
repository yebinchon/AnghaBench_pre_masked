
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_sense_hdr {int response_code; int sense_key; } ;


 size_t FUNC_0 (char*,size_t,char*,...) ;
 scalar_t__ FUNC_1 (struct scsi_sense_hdr const*) ;
 char* FUNC_2 (int ) ;

__attribute__((used)) static size_t
FUNC_3(char *VAR_0, size_t VAR_1,
        const struct scsi_sense_hdr *VAR_2)
{
 const char *VAR_3;
 size_t VAR_4;

 VAR_4 = FUNC_0(VAR_0, VAR_1, "Sense Key : ");
 VAR_3 = FUNC_2(VAR_2->sense_key);
 if (VAR_3)
  VAR_4 += FUNC_0(VAR_0 + VAR_4, VAR_1 - VAR_4,
     "%s ", VAR_3);
 else
  VAR_4 += FUNC_0(VAR_0 + VAR_4, VAR_1 - VAR_4,
     "0x%x ", VAR_2->sense_key);
 VAR_4 += FUNC_0(VAR_0 + VAR_4, VAR_1 - VAR_4,
  FUNC_1(VAR_2) ? "[deferred] " : "[current] ");

 if (VAR_2->response_code >= 0x72)
  VAR_4 += FUNC_0(VAR_0 + VAR_4, VAR_1 - VAR_4, "[descriptor] ");
 return VAR_4;
}
