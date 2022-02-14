
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_3__ {int len; int offset; int page; } ;
struct hfa384x {scalar_t__ dlstate; TYPE_2__* wlandev; TYPE_1__ bufinfo; } ;
struct TYPE_4__ {int netdev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (struct hfa384x*,int ,int ,int ,int) ;
 int FUNC_4 (struct hfa384x*,int ,int ,int *,int) ;
 int FUNC_5 (int ,char*,int ,int ,int,int) ;
 int FUNC_6 (int ,char*,int,int) ;
 int FUNC_7 (char*,int,int,...) ;

int FUNC_8(struct hfa384x *VAR_5, u32 VAR_6,
          void *VAR_7, u32 VAR_8)
{
 int VAR_9 = 0;
 u32 VAR_10;
 int VAR_11;
 u32 VAR_12;
 u32 VAR_13;
 u16 VAR_14;
 u16 VAR_15;
 int VAR_16;
 u8 *VAR_17;
 u16 VAR_18;
 u16 VAR_19;
 u32 VAR_20;
 int VAR_21;
 int VAR_22;

 FUNC_7("daddr=0x%08x len=%d\n", VAR_6, VAR_8);


 if (VAR_5->dlstate != VAR_1)
  return -VAR_0;

 FUNC_6(VAR_5->wlandev->netdev,
      "Download %d bytes to flash @0x%06x\n", VAR_8, VAR_6);



 VAR_10 =
     FUNC_0(VAR_5->bufinfo.page, VAR_5->bufinfo.offset);
 FUNC_7("dlbuf.page=0x%04x dlbuf.offset=0x%04x dlbufaddr=0x%08x\n",
   VAR_5->bufinfo.page, VAR_5->bufinfo.offset, VAR_10);
 VAR_11 = VAR_8 / VAR_5->bufinfo.len;
 VAR_11 += (VAR_8 % VAR_5->bufinfo.len) ? 1 : 0;


 VAR_16 = VAR_5->bufinfo.len / VAR_4;
 VAR_16 += (VAR_5->bufinfo.len % VAR_4) ? 1 : 0;


 for (VAR_21 = 0; VAR_21 < VAR_11; VAR_21++) {

  VAR_12 = (VAR_8 - (VAR_5->bufinfo.len * VAR_21)) > VAR_5->bufinfo.len ?
      VAR_5->bufinfo.len : (VAR_8 - (VAR_5->bufinfo.len * VAR_21));
  VAR_13 = VAR_6 + (VAR_5->bufinfo.len * VAR_21);
  VAR_14 = FUNC_1(VAR_13);
  VAR_15 = FUNC_2(VAR_13);

  FUNC_6(VAR_5->wlandev->netdev, "Writing %d bytes to flash @0x%06x\n",
       VAR_12, VAR_13);


  VAR_9 = FUNC_3(VAR_5, VAR_2,
           VAR_14, VAR_15, VAR_12);
  if (VAR_9) {
   FUNC_5(VAR_5->wlandev->netdev,
       "download(NV,lo=%x,hi=%x,len=%x) cmd failed, result=%d. Aborting d/l\n",
       VAR_14, VAR_15, VAR_12, VAR_9);
   goto exit_proc;
  }


  for (VAR_22 = 0; VAR_22 < VAR_16; VAR_22++) {
   VAR_17 = VAR_7 +
       (VAR_21 * VAR_5->bufinfo.len) +
       (VAR_22 * VAR_4);

   VAR_18 = FUNC_2(VAR_10 +
      (VAR_22 * VAR_4));
   VAR_19 = FUNC_1(VAR_10 +
      (VAR_22 * VAR_4));

   VAR_20 = VAR_12 - (VAR_22 * VAR_4);
   VAR_20 = VAR_20 > VAR_4 ?
       VAR_4 : VAR_20;

   VAR_9 = FUNC_4(VAR_5,
      VAR_18,
      VAR_19,
      VAR_17, VAR_20);
  }


  VAR_9 = FUNC_3(VAR_5,
           VAR_3,
           0, 0, 0);
  if (VAR_9) {
   FUNC_5(VAR_5->wlandev->netdev,
       "download(NVWRITE,lo=%x,hi=%x,len=%x) cmd failed, result=%d. Aborting d/l\n",
       VAR_14, VAR_15, VAR_12, VAR_9);
   goto exit_proc;
  }


 }

exit_proc:





 return VAR_9;
}
