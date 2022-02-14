
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct _dlci_stat {int flags; int dlci; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char VAR_4 ;
 char VAR_5 ;
 int FUNC_0 (struct net_device*,char*,int,int) ;
 int FUNC_1 (struct net_device*,char*) ;
 int FUNC_2 (struct net_device*,char*,...) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (char*,char*,int) ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_6, int VAR_7, int VAR_8, int VAR_9, int VAR_10, void *VAR_11)
{
 struct _dlci_stat *VAR_12;
 short *VAR_13;
 int VAR_14;
 char *VAR_15, VAR_16[30];

 switch (VAR_9)
 {
  case 130:
   VAR_15 = VAR_11;
   if (*VAR_15 & VAR_5)
    FUNC_2(VAR_6, "Modem DCD unexpectedly low!\n");
   if (*VAR_15 & VAR_4)
    FUNC_2(VAR_6, "Modem CTS unexpectedly low!\n");

   break;

  case 136:
   FUNC_2(VAR_6, "Channel became inoperative!\n");

   break;

  case 135:
   FUNC_2(VAR_6, "Channel became operative!\n");

   break;

  case 132:
   FUNC_2(VAR_6, "Status change reported by Access Node\n");
   VAR_10 /= sizeof(struct _dlci_stat);
   for(VAR_12 = VAR_11, VAR_14=0;VAR_14 < VAR_10;VAR_14++,VAR_12++)
   {
    if (VAR_12->flags & VAR_2)
     VAR_15 = "new";
    else if (VAR_12->flags & VAR_1)
     VAR_15 = "deleted";
    else if (VAR_12->flags & VAR_0)
     VAR_15 = "active";
    else
    {
     FUNC_4(VAR_16, "unknown status: %02X", VAR_12->flags);
     VAR_15 = VAR_16;
    }
    FUNC_2(VAR_6, "DLCI %i: %s\n",
         VAR_12->dlci, VAR_15);

   }
   break;

  case 131:
   FUNC_2(VAR_6, "Received unknown DLCIs:");
   VAR_10 /= sizeof(short);
   for(VAR_13 = VAR_11,VAR_14=0;VAR_14 < VAR_10;VAR_14++,VAR_13++)
    FUNC_3(" %i", *VAR_13);
   FUNC_3("\n");
   break;

  case 128:
   FUNC_1(VAR_6, "Command timed out!\n");
   break;

  case 139:
   FUNC_2(VAR_6, "Bc/CIR overflow, acceptable size is %i\n",
        VAR_10);
   break;

  case 138:
   FUNC_2(VAR_6, "Buffer size over specified max of %i\n",
        VAR_10);
   break;

  case 137:
  case 133:
  case 134:
  case 129:
   if (VAR_7 == VAR_3)
    break;


  default:
   FUNC_0(VAR_6, "Cmd 0x%02X generated return code 0x%02X\n",
       VAR_7, VAR_9);

   break;
 }
}
