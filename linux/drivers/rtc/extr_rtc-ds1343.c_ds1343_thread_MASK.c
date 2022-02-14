
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ds1343_priv {int mutex; int rtc; int map; } ;
typedef int irqreturn_t ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ,unsigned int*) ;
 int FUNC_3 (int ,int ,unsigned int) ;
 int FUNC_4 (int ,int,int) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_7, void *VAR_8)
{
 struct ds1343_priv *VAR_9 = VAR_8;
 unsigned int VAR_10, VAR_11;
 int VAR_12 = 0;

 FUNC_0(&VAR_9->mutex);

 VAR_12 = FUNC_2(VAR_9->map, VAR_3, &VAR_10);
 if (VAR_12)
  goto out;

 if (VAR_10 & VAR_2) {
  VAR_10 &= ~VAR_2;
  FUNC_3(VAR_9->map, VAR_3, VAR_10);

  VAR_12 = FUNC_2(VAR_9->map, VAR_1, &VAR_11);
  if (VAR_12)
   goto out;

  VAR_11 &= ~VAR_0;
  FUNC_3(VAR_9->map, VAR_1, VAR_11);

  FUNC_4(VAR_9->rtc, 1, VAR_5 | VAR_6);
 }

out:
 FUNC_1(&VAR_9->mutex);
 return VAR_4;
}
