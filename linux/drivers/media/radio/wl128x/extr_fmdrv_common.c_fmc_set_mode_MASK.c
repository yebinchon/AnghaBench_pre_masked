
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct fmdev {int curr_fmmode; } ;


 int VAR_0 ;
 int VAR_1 ;



 int FUNC_0 (struct fmdev*) ;
 int FUNC_1 (struct fmdev*,int) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct fmdev*) ;
 int FUNC_5 (int) ;

int FUNC_6(struct fmdev *VAR_2, u8 VAR_3)
{
 int VAR_4 = 0;

 if (VAR_3 >= VAR_1) {
  FUNC_3("Invalid FM mode\n");
  return -VAR_0;
 }
 if (VAR_2->curr_fmmode == VAR_3) {
  FUNC_2("Already fm is in mode(%d)\n", VAR_3);
  return VAR_4;
 }

 switch (VAR_3) {
 case 130:
  VAR_4 = FUNC_0(VAR_2);
  if (VAR_4 < 0) {
   FUNC_3("Failed to set OFF mode\n");
   return VAR_4;
  }
  break;

 case 128:
 case 129:

  if (VAR_2->curr_fmmode != 130) {
   VAR_4 = FUNC_0(VAR_2);
   if (VAR_4 < 0) {
    FUNC_3("Failed to set OFF mode\n");
    return VAR_4;
   }
   FUNC_5(30);
  }
  VAR_4 = FUNC_1(VAR_2, VAR_3);
  if (VAR_4 < 0) {
   FUNC_3("Failed to load firmware\n");
   return VAR_4;
  }
 }
 VAR_2->curr_fmmode = VAR_3;


 if (VAR_2->curr_fmmode == 129) {
  FUNC_2("Loading default rx configuration..\n");
  VAR_4 = FUNC_4(VAR_2);
  if (VAR_4 < 0)
   FUNC_3("Failed to load default values\n");
 }

 return VAR_4;
}
