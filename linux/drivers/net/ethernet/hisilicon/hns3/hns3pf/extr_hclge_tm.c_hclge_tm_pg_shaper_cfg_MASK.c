
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef size_t u32 ;
struct TYPE_4__ {size_t num_pg; TYPE_1__* pg_info; } ;
struct hclge_dev {scalar_t__ tx_sch_mode; TYPE_2__ tm_info; } ;
struct TYPE_3__ {int bw_limit; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,int *,int *,int *) ;
 size_t FUNC_1 (int ,int ,int ,int ,int ) ;
 int FUNC_2 (struct hclge_dev*,int ,size_t,size_t) ;

__attribute__((used)) static int FUNC_3(struct hclge_dev *VAR_6)
{
 u8 VAR_7, VAR_8, VAR_9;
 u32 VAR_10;
 int VAR_11;
 u32 VAR_12;


 if (VAR_6->tx_sch_mode != VAR_0)
  return 0;


 for (VAR_12 = 0; VAR_12 < VAR_6->tm_info.num_pg; VAR_12++) {

  VAR_11 = FUNC_0(
     VAR_6->tm_info.pg_info[VAR_12].bw_limit,
     VAR_3,
     &VAR_8, &VAR_7, &VAR_9);
  if (VAR_11)
   return VAR_11;

  VAR_10 = FUNC_1(0, 0, 0,
        VAR_2,
        VAR_1);
  VAR_11 = FUNC_2(VAR_6,
            VAR_4, VAR_12,
            VAR_10);
  if (VAR_11)
   return VAR_11;

  VAR_10 = FUNC_1(VAR_8, VAR_7, VAR_9,
        VAR_2,
        VAR_1);
  VAR_11 = FUNC_2(VAR_6,
            VAR_5, VAR_12,
            VAR_10);
  if (VAR_11)
   return VAR_11;
 }

 return 0;
}
