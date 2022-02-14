
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct airo_info {TYPE_1__* dev; } ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct airo_info*,scalar_t__) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (struct airo_info*,scalar_t__,int ) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int ,char*,...) ;

__attribute__((used)) static int FUNC_3(struct airo_info *VAR_7, u16 VAR_8, u16 VAR_9, int VAR_10 )
{
 int VAR_11 = 50;
 int VAR_12 = 3;

 FUNC_1(VAR_7, VAR_5+VAR_10, VAR_8);
 FUNC_1(VAR_7, VAR_4+VAR_10, VAR_9);
 while (1) {
  int VAR_13 = FUNC_0(VAR_7, VAR_4+VAR_10);
  if (VAR_13 & VAR_0) {


   if (VAR_11--) {
    continue;
   }
  } else if ( VAR_13 & VAR_2 ) {

   FUNC_2(VAR_7->dev->name, "BAP error %x %d",
    VAR_13, VAR_10 );
   return VAR_3;
  } else if (VAR_13 & VAR_1) {
   return VAR_6;
  }
  if ( !(VAR_12--) ) {
   FUNC_2(VAR_7->dev->name,
    "BAP setup error too many retries\n");
   return VAR_3;
  }

  FUNC_1(VAR_7, VAR_5+VAR_10, VAR_8);
  FUNC_1(VAR_7, VAR_4+VAR_10, VAR_9);
  VAR_11 = 50;
 }
}
