
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scsi_cmnd {TYPE_2__* device; int result; TYPE_1__* request; } ;
struct TYPE_4__ {int sdev_gendev; } ;
struct TYPE_3__ {int tag; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ,int *,char*,char*) ;
 char const* FUNC_2 (int ) ;
 char const* FUNC_3 (int ) ;
 int FUNC_4 (struct scsi_cmnd const*) ;
 scalar_t__ FUNC_5 (char*,size_t,char*,...) ;
 char* FUNC_6 (int ) ;
 char* FUNC_7 (int ) ;
 int FUNC_8 (char*) ;
 char* FUNC_9 (size_t*) ;
 char* FUNC_10 (int) ;
 size_t FUNC_11 (char*,size_t,int ,int ) ;

void FUNC_12(const struct scsi_cmnd *VAR_1, const char *VAR_2,
         int VAR_3)
{
 char *VAR_4;
 size_t VAR_5, VAR_6;
 const char *VAR_7 = FUNC_10(VAR_3);
 const char *VAR_8 = FUNC_7(VAR_1->result);
 const char *VAR_9 = FUNC_6(VAR_1->result);

 VAR_4 = FUNC_9(&VAR_6);
 if (!VAR_4)
  return;

 VAR_5 = FUNC_11(VAR_4, VAR_6,
     FUNC_4(VAR_1), VAR_1->request->tag);

 if (VAR_5 >= VAR_6)
  goto out_printk;

 if (VAR_2) {
  VAR_5 += FUNC_5(VAR_4 + VAR_5, VAR_6 - VAR_5,
     "%s: ", VAR_2);
  if (FUNC_0(VAR_5 >= VAR_6))
   goto out_printk;
 }
 if (VAR_7)
  VAR_5 += FUNC_5(VAR_4 + VAR_5, VAR_6 - VAR_5,
     "%s ", VAR_7);
 else
  VAR_5 += FUNC_5(VAR_4 + VAR_5, VAR_6 - VAR_5,
     "UNKNOWN(0x%02x) ", VAR_3);
 if (FUNC_0(VAR_5 >= VAR_6))
  goto out_printk;

 VAR_5 += FUNC_5(VAR_4 + VAR_5, VAR_6 - VAR_5, "Result: ");
 if (FUNC_0(VAR_5 >= VAR_6))
  goto out_printk;

 if (VAR_8)
  VAR_5 += FUNC_5(VAR_4 + VAR_5, VAR_6 - VAR_5,
     "hostbyte=%s ", VAR_8);
 else
  VAR_5 += FUNC_5(VAR_4 + VAR_5, VAR_6 - VAR_5,
     "hostbyte=0x%02x ", FUNC_3(VAR_1->result));
 if (FUNC_0(VAR_5 >= VAR_6))
  goto out_printk;

 if (VAR_9)
  VAR_5 += FUNC_5(VAR_4 + VAR_5, VAR_6 - VAR_5,
     "driverbyte=%s", VAR_9);
 else
  VAR_5 += FUNC_5(VAR_4 + VAR_5, VAR_6 - VAR_5,
     "driverbyte=0x%02x", FUNC_2(VAR_1->result));
out_printk:
 FUNC_1(VAR_0, &VAR_1->device->sdev_gendev, "%s", VAR_4);
 FUNC_8(VAR_4);
}
