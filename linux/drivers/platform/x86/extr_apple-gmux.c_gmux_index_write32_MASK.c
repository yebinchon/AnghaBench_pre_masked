
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct apple_gmux_data {int index_lock; scalar_t__ iostart; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct apple_gmux_data*) ;
 int FUNC_1 (struct apple_gmux_data*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct apple_gmux_data *VAR_2, int VAR_3,
          u32 VAR_4)
{
 int VAR_5;
 u8 VAR_6;

 FUNC_2(&VAR_2->index_lock);

 for (VAR_5 = 0; VAR_5 < 4; VAR_5++) {
  VAR_6 = (VAR_4 >> (VAR_5 * 8)) & 0xff;
  FUNC_4(VAR_6, VAR_2->iostart + VAR_0 + VAR_5);
 }

 FUNC_1(VAR_2);
 FUNC_4(VAR_3 & 0xff, VAR_2->iostart + VAR_1);
 FUNC_0(VAR_2);
 FUNC_3(&VAR_2->index_lock);
}
