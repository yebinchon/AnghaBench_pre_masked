
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_3__ {scalar_t__ media_type; } ;
struct TYPE_4__ {TYPE_1__ mac; } ;
struct hclge_dev {TYPE_2__ hw; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct hclge_dev*,scalar_t__) ;
 int FUNC_1 (struct hclge_dev*,scalar_t__) ;
 int FUNC_2 (struct hclge_dev*,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct hclge_dev *VAR_3, u8 VAR_4)
{
 u8 VAR_5 = VAR_3->hw.mac.media_type;

 if (VAR_5 == VAR_2)
  FUNC_2(VAR_3, VAR_4);
 else if (VAR_5 == VAR_1)
  FUNC_1(VAR_3, VAR_4);
 else if (VAR_5 == VAR_0)
  FUNC_0(VAR_3, VAR_4);
}
