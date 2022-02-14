
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;
struct viosrp_crq {int valid; int format; int status; } ;
struct scsi_info {int flags; int dev; } ;


 long VAR_0 ;

 long VAR_1 ;
 int VAR_2 ;




 int VAR_3 ;
 int VAR_4 ;
 long VAR_5 ;




 int FUNC_0 (int *,char*,...) ;
 long FUNC_1 (struct scsi_info*,struct viosrp_crq*) ;
 long FUNC_2 (struct scsi_info*,struct viosrp_crq*) ;
 int FUNC_3 (struct scsi_info*) ;
 int FUNC_4 (struct scsi_info*,int ,int ) ;
 int FUNC_5 (struct scsi_info*,struct viosrp_crq*) ;
 long FUNC_6 (struct scsi_info*,struct viosrp_crq*) ;

__attribute__((used)) static long FUNC_7(struct scsi_info *VAR_6,
        struct viosrp_crq *VAR_7)
{
 long VAR_8 = VAR_0;

 switch (VAR_7->valid) {
 case 130:
  switch (VAR_7->format) {
  case 132:
  case 136:
  case 135:
  case 134:
   if (VAR_6->flags & VAR_4) {
    VAR_8 = VAR_1;
    FUNC_0(&VAR_6->dev, "parse_command: already processing mad\n");
    FUNC_4(VAR_6,
             VAR_2,
             0);
   } else {
    VAR_6->flags |= VAR_4;
    VAR_8 = FUNC_2(VAR_6, VAR_7);
   }
   break;

  case 131:
   FUNC_5(VAR_6, VAR_7);
   break;

  case 133:
   if (VAR_7->status == VAR_3)
    FUNC_3(VAR_6);
   break;

  default:
   FUNC_0(&VAR_6->dev, "parse_command: invalid format %d\n",
    (uint)VAR_7->format);
   FUNC_4(VAR_6,
        VAR_2, 0);
   break;
  }
  break;

 case 128:
  VAR_8 = FUNC_6(VAR_6, VAR_7);
  break;

 case 129:
  VAR_8 = FUNC_1(VAR_6, VAR_7);
  break;

 default:
  FUNC_0(&VAR_6->dev, "parse_command: invalid valid field %d\n",
   (uint)VAR_7->valid);
  FUNC_4(VAR_6, VAR_2, 0);
  break;
 }





 VAR_8 = VAR_6->flags & VAR_5;

 return VAR_8;
}
