
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdebug_dev_info {int uas_bm; } ;
struct scsi_cmnd {int device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;







 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (struct sdebug_dev_info*) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (struct scsi_cmnd*,int ,int ,int ) ;
 int VAR_14 ;
 int FUNC_4 (char*,int) ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_5 (int ,int ,char*,int ,char const*) ;

__attribute__((used)) static int FUNC_6(struct scsi_cmnd *VAR_17, struct sdebug_dev_info *VAR_18)
{
 int VAR_19;

 VAR_19 = FUNC_2(VAR_18->uas_bm, VAR_8);
 if (VAR_19 != VAR_8) {
  const char *VAR_20 = ((void*)0);

  switch (VAR_19) {
  case 128:
   FUNC_3(VAR_17, VAR_12, VAR_11,
     VAR_7);
   if (VAR_16)
    VAR_20 = "power on reset";
   break;
  case 134:
   FUNC_3(VAR_17, VAR_12, VAR_11,
     VAR_0);
   if (VAR_16)
    VAR_20 = "bus reset";
   break;
  case 129:
   FUNC_3(VAR_17, VAR_12, VAR_10,
     VAR_6);
   if (VAR_16)
    VAR_20 = "mode parameters changed";
   break;
  case 133:
   FUNC_3(VAR_17, VAR_12, VAR_10,
     VAR_1);
   if (VAR_16)
    VAR_20 = "capacity data changed";
   break;
  case 131:
   FUNC_3(VAR_17, VAR_12,
     VAR_9,
     VAR_4);
   if (VAR_16)
    VAR_20 = "microcode has been changed";
   break;
  case 130:
   FUNC_3(VAR_17, VAR_12,
     VAR_9,
     VAR_5);
   if (VAR_16)
    VAR_20 = "microcode has been changed without reset";
   break;
  case 132:
   if (VAR_15 >= 6)
    FUNC_1(VAR_18);
   FUNC_3(VAR_17, VAR_12,
     VAR_9,
     VAR_3);
   if (VAR_16)
    VAR_20 = "reported luns data has changed";
   break;
  default:
   FUNC_4("unexpected unit attention code=%d\n", VAR_19);
   if (VAR_16)
    VAR_20 = "unknown";
   break;
  }
  FUNC_0(VAR_19, VAR_18->uas_bm);
  if (VAR_16)
   FUNC_5(VAR_2, VAR_17->device,
       "%s reports: Unit attention: %s\n",
       VAR_14, VAR_20);
  return VAR_13;
 }
 return 0;
}
