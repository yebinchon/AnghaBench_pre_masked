
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct wlandevice {int msdstate; int macmode; int netdev; int hwremoved; struct hfa384x* priv; } ;
struct hfa384x {int join_retries; int join_ap; } ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

 int VAR_4 ;


 int VAR_5 ;

 int VAR_6 ;
 int FUNC_0 (struct hfa384x*) ;
 int FUNC_1 (struct hfa384x*) ;
 int FUNC_2 (struct hfa384x*) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*,int,int) ;
 int FUNC_7 (struct wlandevice*) ;
 int FUNC_8 (struct wlandevice*) ;

u32 FUNC_9(struct wlandevice *VAR_7, u32 VAR_8)
{
 struct hfa384x *VAR_9 = VAR_7->priv;
 u32 VAR_10;

 VAR_10 = VAR_0;

 FUNC_6("Current MSD state(%d), requesting(%d)\n",
   VAR_7->msdstate, VAR_8);
 switch (VAR_8) {
 case 132:
  switch (VAR_7->msdstate) {
  case 129:
   VAR_7->msdstate = VAR_4;




   VAR_10 = FUNC_1(VAR_9);
   if (VAR_10) {
    FUNC_3(VAR_7->netdev,
        "hfa384x_drvr_start() failed,result=%d\n",
        (int)VAR_10);
    VAR_10 =
     VAR_0;
    VAR_7->msdstate = 129;
    break;
   }
   VAR_7->msdstate = 131;
   VAR_10 = VAR_2;
   break;
  case 131:
   FUNC_0(VAR_9);
   VAR_10 = VAR_2;
   break;
  case 128:
   FUNC_4(VAR_7->netdev,
        "Cannot enter fwload state from enable state, you must disable first.\n");
   VAR_10 = VAR_1;
   break;
  case 130:
  default:



   VAR_10 = VAR_0;
   break;
  }
  break;
 case 133:
  switch (VAR_7->msdstate) {
  case 129:
  case 131:
   VAR_7->msdstate = VAR_6;
   VAR_10 = FUNC_1(VAR_9);
   if (VAR_10) {
    FUNC_3(VAR_7->netdev,
        "hfa384x_drvr_start() failed,result=%d\n",
        (int)VAR_10);
    VAR_10 =
      VAR_0;
    VAR_7->msdstate = 129;
    break;
   }

   VAR_10 = FUNC_7(VAR_7);
   if (VAR_10) {
    FUNC_3(VAR_7->netdev,
        "prism2sta_getcardinfo() failed,result=%d\n",
        (int)VAR_10);
    VAR_10 =
      VAR_0;
    FUNC_2(VAR_9);
    VAR_7->msdstate = 129;
    break;
   }
   VAR_10 = FUNC_8(VAR_7);
   if (VAR_10) {
    FUNC_3(VAR_7->netdev,
        "prism2sta_globalsetup() failed,result=%d\n",
        (int)VAR_10);
    VAR_10 =
      VAR_0;
    FUNC_2(VAR_9);
    VAR_7->msdstate = 129;
    break;
   }
   VAR_7->msdstate = 128;
   VAR_9->join_ap = 0;
   VAR_9->join_retries = 60;
   VAR_10 = VAR_2;
   break;
  case 128:

   VAR_10 = VAR_2;
   break;
  case 130:
  default:



   VAR_10 = VAR_0;
   break;
  }
  break;
 case 134:
  switch (VAR_7->msdstate) {
  case 129:

   VAR_10 = VAR_2;
   break;
  case 131:
  case 128:
   VAR_7->msdstate = VAR_5;






   if (!VAR_7->hwremoved)
    FUNC_5(VAR_7->netdev);

   FUNC_2(VAR_9);

   VAR_7->macmode = VAR_3;
   VAR_7->msdstate = 129;
   VAR_10 = VAR_2;
   break;
  case 130:
  default:



   VAR_10 = VAR_0;
   break;
  }
  break;
 default:
  VAR_10 = VAR_1;
  break;
 }

 return VAR_10;
}
