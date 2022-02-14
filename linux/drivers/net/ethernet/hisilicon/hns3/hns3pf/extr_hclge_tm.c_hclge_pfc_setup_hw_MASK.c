
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {scalar_t__ fc_mode; int pfc_en; } ;
struct hclge_dev {TYPE_1__ tm_info; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct hclge_dev*,int,int ) ;

__attribute__((used)) static int FUNC_1(struct hclge_dev *VAR_3)
{
 u8 VAR_4 = 0;

 if (VAR_3->tm_info.fc_mode == VAR_0)
  VAR_4 = VAR_2 |
    VAR_1;

 return FUNC_0(VAR_3, VAR_4,
          VAR_3->tm_info.pfc_en);
}
