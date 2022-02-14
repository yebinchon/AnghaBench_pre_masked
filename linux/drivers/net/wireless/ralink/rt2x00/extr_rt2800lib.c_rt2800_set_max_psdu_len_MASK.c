
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct rt2x00_dev {struct rt2800_drv_data* drv_data; } ;
struct rt2800_drv_data {scalar_t__* ampdu_factor_cnt; int max_psdu; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct rt2x00_dev*,int ) ;
 int FUNC_2 (struct rt2x00_dev*,int ,int ) ;
 int FUNC_3 (int *,int ,int) ;

__attribute__((used)) static void FUNC_4(struct rt2x00_dev *VAR_2)
{
 u8 VAR_3, VAR_4;
 u32 VAR_5;
 struct rt2800_drv_data *VAR_6 = VAR_2->drv_data;

 for (VAR_3 = 0; VAR_3 < 3; VAR_3++)
  if (VAR_6->ampdu_factor_cnt[VAR_3] > 0)
   break;

 VAR_4 = FUNC_0(VAR_6->max_psdu, VAR_3);

 VAR_5 = FUNC_1(VAR_2, VAR_0);
 FUNC_3(&VAR_5, VAR_1, VAR_4);
 FUNC_2(VAR_2, VAR_0, VAR_5);
}
