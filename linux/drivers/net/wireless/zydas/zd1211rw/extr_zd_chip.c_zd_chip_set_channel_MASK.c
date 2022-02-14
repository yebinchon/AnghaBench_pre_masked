
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct zd_chip {int mutex; int rf; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct zd_chip*,int ) ;
 int FUNC_3 (struct zd_chip*) ;
 int FUNC_4 (struct zd_chip*,int ) ;
 int FUNC_5 (struct zd_chip*) ;
 int FUNC_6 (struct zd_chip*) ;
 int FUNC_7 (struct zd_chip*,int ,int ) ;
 int FUNC_8 (int *,int ) ;

int FUNC_9(struct zd_chip *VAR_1, u8 VAR_2)
{
 int VAR_3, VAR_4;

 FUNC_0(&VAR_1->mutex);
 VAR_3 = FUNC_5(VAR_1);
 if (VAR_3)
  goto out;
 VAR_3 = FUNC_8(&VAR_1->rf, VAR_2);
 if (VAR_3)
  goto unlock;
 VAR_3 = FUNC_4(VAR_1, VAR_2);
 if (VAR_3)
  goto unlock;
 VAR_3 = FUNC_3(VAR_1);
 if (VAR_3)
  goto unlock;
 VAR_3 = FUNC_2(VAR_1, VAR_2);
 if (VAR_3)
  goto unlock;
 VAR_3 = FUNC_7(VAR_1, 0, VAR_0);
unlock:
 VAR_4 = FUNC_6(VAR_1);
 if (VAR_4 && !VAR_3)
  VAR_3 = VAR_4;
out:
 FUNC_1(&VAR_1->mutex);
 return VAR_3;
}
