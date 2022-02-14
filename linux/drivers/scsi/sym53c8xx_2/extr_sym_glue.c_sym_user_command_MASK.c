
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct sym_usrcmd {int cmd; int target; int data; } ;
struct sym_hcb {int dummy; } ;
struct Scsi_Host {int host_lock; } ;


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
 int FUNC_0 (char*,int,int) ;
 int FUNC_1 (char*,int) ;
 int VAR_12 ;
 int FUNC_2 (char*,int,char*) ;
 int FUNC_3 (struct sym_usrcmd*,int ,int) ;
 int FUNC_4 (char*,int,...) ;
 int FUNC_5 (int ,unsigned long) ;
 int FUNC_6 (int ,unsigned long) ;
 int FUNC_7 (struct sym_hcb*,struct sym_usrcmd*) ;
 struct sym_hcb* FUNC_8 (struct Scsi_Host*) ;

__attribute__((used)) static int FUNC_9(struct Scsi_Host *VAR_13, char *VAR_14, int VAR_15)
{
 struct sym_hcb *VAR_16 = FUNC_8(VAR_13);
 char *VAR_17 = VAR_14;
 int VAR_18 = VAR_15;
 struct sym_usrcmd VAR_19, *VAR_20 = &VAR_19;
 int VAR_21;
 u_long VAR_22;

 FUNC_3(VAR_20, 0, sizeof(*VAR_20));

 if (VAR_18 > 0 && VAR_17[VAR_18-1] == '\n')
  --VAR_18;

 if ((VAR_21 = FUNC_2(VAR_17, VAR_18, "setsync")) != 0)
  VAR_20->cmd = 131;
 else if ((VAR_21 = FUNC_2(VAR_17, VAR_18, "settags")) != 0)
  VAR_20->cmd = 130;
 else if ((VAR_21 = FUNC_2(VAR_17, VAR_18, "setverbose")) != 0)
  VAR_20->cmd = 129;
 else if ((VAR_21 = FUNC_2(VAR_17, VAR_18, "setwide")) != 0)
  VAR_20->cmd = 128;




 else if ((VAR_21 = FUNC_2(VAR_17, VAR_18, "setflag")) != 0)
  VAR_20->cmd = 132;
 else if ((VAR_21 = FUNC_2(VAR_17, VAR_18, "resetdev")) != 0)
  VAR_20->cmd = 134;
 else if ((VAR_21 = FUNC_2(VAR_17, VAR_18, "cleardev")) != 0)
  VAR_20->cmd = 135;
 else
  VAR_21 = 0;





 if (!VAR_21)
  return -VAR_11;
 VAR_17 += VAR_21; VAR_18 -= VAR_21;

 switch(VAR_20->cmd) {
 case 131:
 case 130:
 case 128:
 case 132:
 case 134:
 case 135:
  FUNC_1(VAR_17, VAR_18);
  if ((VAR_21 = FUNC_2(VAR_17, VAR_18, "all")) != 0) {
   VAR_17 += VAR_21; VAR_18 -= VAR_21;
   VAR_20->target = ~0;
  } else {
   FUNC_0(VAR_17, VAR_18, VAR_22);
   VAR_20->target = (1<<VAR_22);



  }
  break;
 }

 switch(VAR_20->cmd) {
 case 129:
 case 131:
 case 130:
 case 128:
  FUNC_1(VAR_17, VAR_18);
  FUNC_0(VAR_17, VAR_18, VAR_20->data);



  break;
 case 132:
  while (VAR_18 > 0) {
   FUNC_1(VAR_17, VAR_18);
   if ((VAR_21 = FUNC_2(VAR_17, VAR_18, "no_disc")))
    VAR_20->data &= ~VAR_12;
   else
    return -VAR_11;
   VAR_17 += VAR_21; VAR_18 -= VAR_21;
  }
  break;
 default:
  break;
 }

 if (VAR_18)
  return -VAR_11;
 else {
  unsigned long VAR_23;

  FUNC_5(VAR_13->host_lock, VAR_23);
  FUNC_7(VAR_16, VAR_20);
  FUNC_6(VAR_13->host_lock, VAR_23);
 }
 return VAR_15;
}
