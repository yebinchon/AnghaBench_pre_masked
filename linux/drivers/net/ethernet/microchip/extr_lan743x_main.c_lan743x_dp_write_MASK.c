
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct lan743x_adapter {int dp_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct lan743x_adapter*,int ) ;
 scalar_t__ FUNC_1 (struct lan743x_adapter*,int ,int ,int,int,int,int) ;
 int FUNC_2 (struct lan743x_adapter*,int ,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct lan743x_adapter *VAR_8,
       u32 VAR_9, u32 VAR_10, u32 VAR_11, u32 *VAR_12)
{
 int VAR_13 = -VAR_7;
 u32 VAR_14;
 int VAR_15;

 FUNC_3(&VAR_8->dp_lock);
 if (FUNC_1(VAR_8, VAR_4, VAR_5,
         1, 40, 100, 100))
  goto unlock;
 VAR_14 = FUNC_0(VAR_8, VAR_4);
 VAR_14 &= ~VAR_6;
 VAR_14 |= VAR_9;
 FUNC_2(VAR_8, VAR_4, VAR_14);

 for (VAR_15 = 0; VAR_15 < VAR_11; VAR_15++) {
  FUNC_2(VAR_8, VAR_0, VAR_10 + VAR_15);
  FUNC_2(VAR_8, VAR_3, VAR_12[VAR_15]);
  FUNC_2(VAR_8, VAR_1, VAR_2);
  if (FUNC_1(VAR_8, VAR_4, VAR_5,
          1, 40, 100, 100))
   goto unlock;
 }
 VAR_13 = 0;

unlock:
 FUNC_4(&VAR_8->dp_lock);
 return VAR_13;
}
