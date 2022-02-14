
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct apple_gmux_data {int index_lock; scalar_t__ iostart; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct apple_gmux_data*) ;
 int FUNC_1 (struct apple_gmux_data*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int,scalar_t__) ;

__attribute__((used)) static u8 FUNC_6(struct apple_gmux_data *VAR_2, int VAR_3)
{
 u8 VAR_4;

 FUNC_3(&VAR_2->index_lock);
 FUNC_1(VAR_2);
 FUNC_5((VAR_3 & 0xff), VAR_2->iostart + VAR_0);
 FUNC_0(VAR_2);
 VAR_4 = FUNC_2(VAR_2->iostart + VAR_1);
 FUNC_4(&VAR_2->index_lock);

 return VAR_4;
}
