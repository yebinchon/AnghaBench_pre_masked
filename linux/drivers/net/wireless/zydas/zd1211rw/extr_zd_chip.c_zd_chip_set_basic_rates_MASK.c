
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct zd_chip {int mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct zd_chip*,int,int ) ;

int FUNC_3(struct zd_chip *VAR_4, u16 VAR_5)
{
 int VAR_6;

 if (VAR_5 & ~(VAR_1|VAR_2))
  return -VAR_3;

 FUNC_0(&VAR_4->mutex);
 VAR_6 = FUNC_2(VAR_4, VAR_5, VAR_0);
 FUNC_1(&VAR_4->mutex);
 return VAR_6;
}
