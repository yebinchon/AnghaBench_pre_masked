
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef size_t u32 ;
struct TYPE_4__ {size_t num_tc; TYPE_1__* tc_info; } ;
struct hclge_dev {TYPE_2__ tm_info; } ;
struct TYPE_3__ {int bw_limit; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int *,int *,int *) ;
 size_t FUNC_1 (int ,int ,int ,int ,int ) ;
 int FUNC_2 (struct hclge_dev*,int ,size_t,size_t) ;

__attribute__((used)) static int FUNC_3(struct hclge_dev *VAR_5)
{
 u8 VAR_6, VAR_7, VAR_8;
 u32 VAR_9;
 int VAR_10;
 u32 VAR_11;

 for (VAR_11 = 0; VAR_11 < VAR_5->tm_info.num_tc; VAR_11++) {
  VAR_10 = FUNC_0(
     VAR_5->tm_info.tc_info[VAR_11].bw_limit,
     VAR_2,
     &VAR_7, &VAR_6, &VAR_8);
  if (VAR_10)
   return VAR_10;

  VAR_9 = FUNC_1(0, 0, 0,
        VAR_1,
        VAR_0);
  VAR_10 = FUNC_2(VAR_5, VAR_3, VAR_11,
      VAR_9);
  if (VAR_10)
   return VAR_10;

  VAR_9 = FUNC_1(VAR_7, VAR_6, VAR_8,
        VAR_1,
        VAR_0);
  VAR_10 = FUNC_2(VAR_5, VAR_4, VAR_11,
      VAR_9);
  if (VAR_10)
   return VAR_10;
 }

 return 0;
}
