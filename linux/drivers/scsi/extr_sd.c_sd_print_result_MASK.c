
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_disk {int dummy; } ;


 int VAR_0 ;
 char const* FUNC_0 (int) ;
 char const* FUNC_1 (int) ;
 char* FUNC_2 (int) ;
 char* FUNC_3 (int) ;
 int FUNC_4 (int ,struct scsi_disk const*,char*,char const*,char const*,char const*) ;

__attribute__((used)) static void FUNC_5(const struct scsi_disk *VAR_1, const char *VAR_2,
       int VAR_3)
{
 const char *VAR_4 = FUNC_3(VAR_3);
 const char *VAR_5 = FUNC_2(VAR_3);

 if (VAR_4 || VAR_5)
  FUNC_4(VAR_0, VAR_1,
     "%s: Result: hostbyte=%s driverbyte=%s\n", VAR_2,
     VAR_4 ? VAR_4 : "invalid",
     VAR_5 ? VAR_5 : "invalid");
 else
  FUNC_4(VAR_0, VAR_1,
     "%s: Result: hostbyte=0x%02x driverbyte=0x%02x\n",
     VAR_2, FUNC_1(VAR_3), FUNC_0(VAR_3));
}
