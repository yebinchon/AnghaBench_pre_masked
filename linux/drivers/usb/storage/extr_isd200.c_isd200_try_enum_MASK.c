
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct us_data {scalar_t__ extra; } ;
struct isd200_info {unsigned char* RegsBuf; unsigned char DeviceHead; int DeviceFlags; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 unsigned char VAR_5 ;
 unsigned char VAR_6 ;
 unsigned char VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 int VAR_11 ;
 unsigned long VAR_12 ;
 unsigned long VAR_13 ;
 unsigned long VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (struct us_data*,int ,unsigned char*,int) ;
 int FUNC_1 (struct us_data*) ;
 unsigned long VAR_16 ;
 scalar_t__ FUNC_2 (unsigned long,unsigned long) ;
 int FUNC_3 (struct us_data*,char*,...) ;

__attribute__((used)) static int FUNC_4(struct us_data *VAR_17, unsigned char VAR_18,
      int VAR_19 )
{
 int VAR_20 = VAR_15;
 unsigned long VAR_21;
 struct isd200_info *VAR_22 = (struct isd200_info *)VAR_17->extra;
 unsigned char *VAR_23 = VAR_22->RegsBuf;
 int VAR_24 = 0;

 if ( VAR_19 )
  VAR_21 = VAR_16 + VAR_14 * VAR_12;
 else
  VAR_21 = VAR_16 + VAR_13 * VAR_12;


 while(1) {

  VAR_20 = FUNC_0( VAR_17, VAR_0, ((void*)0), VAR_18 );
  if ( VAR_20 != VAR_15 )
   break;

  VAR_20 = FUNC_0( VAR_17, VAR_1,
     VAR_23, 8 );
  if ( VAR_20 != VAR_15 )
   break;

  if (!VAR_19) {
   if (VAR_23[VAR_10] & VAR_4) {
    FUNC_3(VAR_17, "   %s status is still BSY, try again...\n",
          VAR_18 == VAR_3 ?
          "Master" : "Slave");
   } else {
    FUNC_3(VAR_17, "   %s status !BSY, continue with next operation\n",
          VAR_18 == VAR_3 ?
          "Master" : "Slave");
    break;
   }
  }



  else if (VAR_23[VAR_10] &
    (VAR_4 | VAR_5 | VAR_7)) {
   FUNC_3(VAR_17, "   Status indicates it is not ready, try again...\n");
  }

  else if (VAR_23[VAR_10] & VAR_6) {
   FUNC_3(VAR_17, "   Identified ATA device\n");
   VAR_22->DeviceFlags |= VAR_11;
   VAR_22->DeviceHead = VAR_18;
   break;
  }




  else if (VAR_23[VAR_8] == 0xEB &&
    VAR_23[VAR_9] == 0x14) {
   if ((VAR_18 & VAR_2) &&
       !VAR_24) {
    FUNC_3(VAR_17, "   Identified ATAPI device as slave.  Rechecking again as master\n");
    VAR_24 = 1;
    VAR_18 = VAR_3;
   } else {
    FUNC_3(VAR_17, "   Identified ATAPI device\n");
    VAR_22->DeviceHead = VAR_18;

    VAR_20 = FUNC_1(VAR_17);
    break;
   }
  } else {
   FUNC_3(VAR_17, "   Not ATA, not ATAPI - Weird\n");
   break;
  }


  if (FUNC_2(VAR_16, VAR_21)) {
   if (!VAR_19)
    FUNC_3(VAR_17, "   BSY check timeout, just continue with next operation...\n");
   else
    FUNC_3(VAR_17, "   Device detect timeout!\n");
   break;
  }
 }

 return VAR_20;
}
