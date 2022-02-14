
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {scalar_t__ type; } ;


 int VAR_0 ;
 int VAR_1 ;



 scalar_t__ VAR_2 ;
 int FUNC_0 (struct scsi_device*) ;
 int FUNC_1 (int ,struct scsi_device*,char*,int ,...) ;

__attribute__((used)) static int FUNC_2(struct scsi_device *VAR_3)
{
 int VAR_4 = 128;





 if (VAR_3->type != VAR_2) {
  FUNC_1(VAR_1, VAR_3,
       "%s: disable for non-disk devices\n",
       VAR_0);
  return VAR_4;
 }

 VAR_4 = FUNC_0(VAR_3);
 switch (VAR_4) {
 case 130|129:
  FUNC_1(VAR_1, VAR_3,
       "%s: supports implicit and explicit TPGS\n",
       VAR_0);
  break;
 case 130:
  FUNC_1(VAR_1, VAR_3, "%s: supports explicit TPGS\n",
       VAR_0);
  break;
 case 129:
  FUNC_1(VAR_1, VAR_3, "%s: supports implicit TPGS\n",
       VAR_0);
  break;
 case 128:
  FUNC_1(VAR_1, VAR_3, "%s: not supported\n",
       VAR_0);
  break;
 default:
  FUNC_1(VAR_1, VAR_3,
       "%s: unsupported TPGS setting %d\n",
       VAR_0, VAR_4);
  VAR_4 = 128;
  break;
 }

 return VAR_4;
}
