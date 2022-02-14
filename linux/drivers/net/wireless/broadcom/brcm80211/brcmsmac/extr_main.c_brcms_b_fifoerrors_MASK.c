
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint ;
struct brcms_hardware {size_t unit; TYPE_1__* wlc; struct bcma_device* d11core; } ;
struct bcma_device {int dummy; } ;
struct TYPE_4__ {int intstatus; } ;
struct TYPE_3__ {int wl; } ;


 int FUNC_0 (int ) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t FUNC_1 (struct bcma_device*,int ) ;
 int FUNC_2 (struct bcma_device*,int ,size_t) ;
 int FUNC_3 (struct bcma_device*,char*,size_t,size_t,size_t) ;
 int FUNC_4 (struct bcma_device*,char*,size_t,size_t) ;
 int FUNC_5 (int ) ;
 TYPE_2__* VAR_8 ;

__attribute__((used)) static void FUNC_6(struct brcms_hardware *VAR_9)
{
 bool VAR_10 = 0;
 uint VAR_11;
 uint VAR_12, VAR_13;
 struct bcma_device *VAR_14 = VAR_9->d11core;

 VAR_11 = VAR_9->unit;

 for (VAR_13 = 0; VAR_13 < VAR_7; VAR_13++) {

  VAR_12 =
   FUNC_1(VAR_14,
        FUNC_0(VAR_8[VAR_13].intstatus)) &
   VAR_1;
  if (!VAR_12)
   continue;

  FUNC_3(VAR_14, "wl%d: intstatus%d 0x%x\n",
         VAR_11, VAR_13, VAR_12);

  if (VAR_12 & VAR_4) {
   FUNC_4(VAR_14, "wl%d: fifo %d: receive fifo "
      "overflow\n", VAR_11, VAR_13);
   VAR_10 = 1;
  }

  if (VAR_12 & VAR_2) {
   FUNC_4(VAR_14, "wl%d: fifo %d: descriptor error\n",
      VAR_11, VAR_13);
   VAR_10 = 1;
  }

  if (VAR_12 & VAR_3) {
   FUNC_4(VAR_14, "wl%d: fifo %d: data error\n", VAR_11,
      VAR_13);
   VAR_10 = 1;
  }

  if (VAR_12 & VAR_0) {
   FUNC_4(VAR_14, "wl%d: fifo %d: descriptor protocol "
      "error\n", VAR_11, VAR_13);
   VAR_10 = 1;
  }

  if (VAR_12 & VAR_5)
   FUNC_4(VAR_14, "wl%d: fifo %d: receive descriptor "
      "underflow\n", VAR_13, VAR_11);

  if (VAR_12 & VAR_6) {
   FUNC_4(VAR_14, "wl%d: fifo %d: transmit fifo "
      "underflow\n", VAR_13, VAR_11);
   VAR_10 = 1;
  }

  if (VAR_10) {
   FUNC_5(VAR_9->wlc->wl);
   break;
  } else
   FUNC_2(VAR_14,
         FUNC_0(VAR_8[VAR_13].intstatus),
         VAR_12);
 }
}
