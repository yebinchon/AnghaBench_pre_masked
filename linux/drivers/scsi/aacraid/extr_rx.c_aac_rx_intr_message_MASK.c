
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct aac_dev {int dummy; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int OutboundQueue; int ODR; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 int FUNC_0 (struct aac_dev*,int,int,int,int *) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct aac_dev*,int ) ;
 int FUNC_3 (struct aac_dev*,int ,int) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_4, void *VAR_5)
{
 int VAR_6, VAR_7, VAR_8;
 struct aac_dev *VAR_9 = VAR_5;
 u32 VAR_10 = FUNC_2(VAR_9, VAR_3.OutboundQueue);
 if (FUNC_4(VAR_10 == 0xFFFFFFFFL))
  VAR_10 = FUNC_2(VAR_9, VAR_3.OutboundQueue);
 if (FUNC_1(VAR_10 != 0xFFFFFFFFL)) {
  do {
   VAR_6 = VAR_7 = VAR_8 = 0;
   if (VAR_10 & 0x00000002L) {
    VAR_6 = 1;
    if (VAR_10 == 0xFFFFFFFEL)
     VAR_8 = 1;
    VAR_10 &= ~0x00000002L;
   } else {
    if (VAR_10 & 0x00000001L)
     VAR_7 = 1;
    VAR_10 >>= 2;
   }
   if (!VAR_8) {
    if (FUNC_4(FUNC_0(VAR_9,
      VAR_10, VAR_6,
      VAR_7, ((void*)0)))) {
     FUNC_3(VAR_9,
      VAR_3.OutboundQueue,
      VAR_10);
     FUNC_3(VAR_9,
      VAR_3.ODR,
      VAR_0);
    }
   }
   VAR_10 = FUNC_2(VAR_9, VAR_3.OutboundQueue);
  } while (VAR_10 != 0xFFFFFFFFL);
  return VAR_1;
 }
 return VAR_2;
}
