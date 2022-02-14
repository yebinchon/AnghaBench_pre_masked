
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct zd_chip {int mutex; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct zd_chip*,int ,int ,int) ;

int FUNC_3(struct zd_chip *VAR_0, u16 VAR_1, u8 VAR_2,
      int VAR_3)
{
 int VAR_4;

 FUNC_0(&VAR_0->mutex);
 VAR_4 = FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3);
 FUNC_1(&VAR_0->mutex);
 return VAR_4;
}
