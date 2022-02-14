
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_info {int state; int dev; } ;


 long VAR_0 ;

 long VAR_1 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct scsi_info*,int const,int ) ;

__attribute__((used)) static long FUNC_2(struct scsi_info *VAR_2)
{
 long VAR_3 = VAR_0;

 switch (VAR_2->state) {
 case 134:
 case 137:
 case 135:
 case 136:
 case 132:
 case 131:
  VAR_3 = VAR_1;
  break;

 case 130:
  VAR_2->state = 138;
  break;

 case 128:
 case 133:
 case 138:
 case 129:
 default:
  VAR_3 = VAR_1;
  FUNC_0(&VAR_2->dev, "init_msg: invalid state %d to get init compl msg\n",
   VAR_2->state);
  FUNC_1(VAR_2, 135, 0);
  break;
 }

 return VAR_3;
}
