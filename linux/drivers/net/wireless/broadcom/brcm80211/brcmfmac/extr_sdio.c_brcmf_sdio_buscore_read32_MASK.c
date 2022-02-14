
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct brcmf_sdio_dev {TYPE_1__* func1; } ;
struct TYPE_2__ {scalar_t__ device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct brcmf_sdio_dev*,int,int *) ;
 int VAR_7 ;

__attribute__((used)) static u32 FUNC_2(void *VAR_8, u32 VAR_9)
{
 struct brcmf_sdio_dev *VAR_10 = VAR_8;
 u32 VAR_11, VAR_12;

 VAR_11 = FUNC_1(VAR_10, VAR_9, ((void*)0));
 if (VAR_9 == FUNC_0(VAR_6, VAR_7) &&
     (VAR_10->func1->device == VAR_5 ||
      VAR_10->func1->device == VAR_4)) {
  VAR_12 = (VAR_11 & VAR_2) >> VAR_3;
  if (VAR_12 >= 2) {
   VAR_11 &= ~VAR_1;
   VAR_11 |= VAR_0;
  }
 }

 return VAR_11;
}
