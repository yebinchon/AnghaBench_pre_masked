
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ulong ;
struct scsi_device {int channel; TYPE_1__* host; } ;
struct block_device {int dummy; } ;
typedef scalar_t__ sector_t ;
struct TYPE_7__ {TYPE_2__* dev; } ;
typedef TYPE_3__ adapter_t ;
struct TYPE_6__ {int dev; } ;
struct TYPE_5__ {scalar_t__ hostdata; } ;


 scalar_t__ FUNC_0 (TYPE_3__*,int ) ;
 int FUNC_1 (int *,char*,int ) ;
 int FUNC_2 (unsigned char*) ;
 unsigned char* FUNC_3 (struct block_device*) ;
 int FUNC_4 (unsigned char*,scalar_t__,int*,int*,int*) ;

__attribute__((used)) static int
FUNC_5(struct scsi_device *VAR_0, struct block_device *VAR_1,
      sector_t VAR_2, int VAR_3[])
{
 adapter_t *VAR_4;
 unsigned char *VAR_5;
 int VAR_6;
 int VAR_7;
 int VAR_8;
 int VAR_9;


 VAR_4 = (adapter_t *)VAR_0->host->hostdata;

 if (FUNC_0(VAR_4, VAR_0->channel)) {

   VAR_6 = 64;
   VAR_7 = 32;
   VAR_8 = (ulong)VAR_2 / (VAR_6 * VAR_7);





   if ((ulong)VAR_2 >= 0x200000) {
    VAR_6 = 255;
    VAR_7 = 63;
    VAR_8 = (ulong)VAR_2 / (VAR_6 * VAR_7);
   }


   VAR_3[0] = VAR_6;
   VAR_3[1] = VAR_7;
   VAR_3[2] = VAR_8;
 }
 else {
  VAR_5 = FUNC_3(VAR_1);

  if( VAR_5 ) {
   VAR_9 = FUNC_4(VAR_5, VAR_2,
         &VAR_3[2], &VAR_3[0], &VAR_3[1]);
   FUNC_2(VAR_5);
   if( VAR_9 != -1 )
    return VAR_9;
  }

  FUNC_1(&VAR_4->dev->dev,
    "invalid partition on this disk on channel %d\n",
    VAR_0->channel);


  VAR_6 = 64;
  VAR_7 = 32;
  VAR_8 = (ulong)VAR_2 / (VAR_6 * VAR_7);


  if ((ulong)VAR_2 >= 0x200000) {
   VAR_6 = 255;
   VAR_7 = 63;
   VAR_8 = (ulong)VAR_2 / (VAR_6 * VAR_7);
  }


  VAR_3[0] = VAR_6;
  VAR_3[1] = VAR_7;
  VAR_3[2] = VAR_8;
 }

 return 0;
}
