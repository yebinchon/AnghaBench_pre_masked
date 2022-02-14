
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_info {int state; int dev; } ;


 long VAR_0 ;

 long VAR_1 ;







 int VAR_2 ;







 int FUNC_0 (int *,char*,long) ;
 int FUNC_1 (int *,char*,long) ;
 int FUNC_2 (struct scsi_info*,int const,int ) ;
 long FUNC_3 (struct scsi_info*,int ) ;

__attribute__((used)) static long FUNC_4(struct scsi_info *VAR_3)
{
 long VAR_4 = VAR_0;

 switch (VAR_3->state) {
 case 130:
  VAR_4 = FUNC_3(VAR_3, VAR_2);
  switch (VAR_4) {
  case 135:
   VAR_3->state = 142;
   break;

  case 136:
   FUNC_0(&VAR_3->dev, "init_msg: failed to send, rc %ld\n",
    VAR_4);
   FUNC_2(VAR_3, 141, 0);
   break;

  case 137:
   FUNC_0(&VAR_3->dev, "init_msg: failed to send, rc %ld\n",
    VAR_4);
   VAR_4 = VAR_1;
   FUNC_2(VAR_3,
        139, 0);
   break;

  case 138:
   FUNC_1(&VAR_3->dev, "init_msg: failed to send, rc %ld\n",
     VAR_4);
   VAR_4 = 0;
   break;
  }
  break;

 case 131:
  VAR_4 = VAR_1;
  break;

 case 132:
  break;

 case 129:
 case 142:
 case 133:
 case 128:
 case 134:
 case 141:
 case 139:
 case 140:
 default:
  VAR_4 = VAR_1;
  FUNC_0(&VAR_3->dev, "init_msg: invalid state %d to get init msg\n",
   VAR_3->state);
  FUNC_2(VAR_3, 139, 0);
  break;
 }

 return VAR_4;
}
