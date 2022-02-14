
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct brcmf_sdio {TYPE_2__* sdiodev; TYPE_1__* ci; } ;
struct TYPE_5__ {int func1; } ;
struct TYPE_4__ {scalar_t__ chip; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ,char*,int,...) ;
 int FUNC_1 (char*,int,int) ;
 int FUNC_2 (TYPE_2__*,int ,int*) ;
 int FUNC_3 (TYPE_2__*,int ,int,int*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int,int) ;

__attribute__((used)) static int
FUNC_10(struct brcmf_sdio *VAR_10, bool VAR_11)
{
 u8 VAR_12 = 0, VAR_13, VAR_14, VAR_15;
 int VAR_16 = 0;
 int VAR_17 = 0;
 int VAR_18 = 0;

 FUNC_0(VAR_9, "Enter: on=%d\n", VAR_11);

 FUNC_4(VAR_10->sdiodev->func1);


 if (VAR_11)
  FUNC_6(VAR_10->sdiodev->func1);

 VAR_12 = (VAR_11 << VAR_7);

 FUNC_3(VAR_10->sdiodev, VAR_4, VAR_12, &VAR_16);






 if (!VAR_11 && VAR_10->ci->chip == VAR_1)
  return VAR_16;

 if (VAR_11) {




  VAR_14 = VAR_6 |
     VAR_5;
  VAR_15 = VAR_14;
  FUNC_9(2000, 3000);
 } else {

  VAR_14 = 0;



  VAR_15 = VAR_6;
 }

 do {





  VAR_13 = FUNC_2(VAR_10->sdiodev, VAR_4,
        &VAR_16);
  if (!VAR_16) {
   if ((VAR_13 & VAR_15) == VAR_14)
    break;
   VAR_17 = 0;
  }

  if (VAR_16 && (VAR_17++ > VAR_0))
   break;

  FUNC_8(VAR_2);
  FUNC_3(VAR_10->sdiodev, VAR_4, VAR_12,
       &VAR_16);

 } while (VAR_18++ < VAR_3);

 if (VAR_18 > 2)
  FUNC_0(VAR_8, "try_cnt=%d rd_val=0x%x err=%d\n", VAR_18,
     VAR_13, VAR_16);

 if (VAR_18 > VAR_3)
  FUNC_1("max tries: rd_val=0x%x err=%d\n", VAR_13, VAR_16);

 if (VAR_11)
  FUNC_7(VAR_10->sdiodev->func1);

 FUNC_5(VAR_10->sdiodev->func1);

 return VAR_16;
}
