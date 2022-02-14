
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {unsigned long* supported; } ;
struct TYPE_4__ {TYPE_1__ mac; } ;
struct hclge_dev {TYPE_2__ hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int ,unsigned long*) ;

__attribute__((used)) static void FUNC_1(struct hclge_dev *VAR_13,
      u8 VAR_14)
{
 unsigned long *VAR_15 = VAR_13->hw.mac.supported;


 if (!VAR_14)
  VAR_14 = VAR_12;

 if (VAR_14 & VAR_11)
  FUNC_0(VAR_0,
     VAR_15);

 if (VAR_14 & VAR_9) {
  FUNC_0(VAR_1,
     VAR_15);
  FUNC_0(VAR_2,
     VAR_15);
 }

 if (VAR_14 & VAR_10) {
  FUNC_0(VAR_3, VAR_15);
  FUNC_0(VAR_4, VAR_15);
 }

 FUNC_0(VAR_6, VAR_15);
 FUNC_0(VAR_8, VAR_15);
 FUNC_0(VAR_7, VAR_15);
 FUNC_0(VAR_5, VAR_15);
}
