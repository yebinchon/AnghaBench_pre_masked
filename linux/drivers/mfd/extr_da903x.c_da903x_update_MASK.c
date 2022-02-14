
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct device {int dummy; } ;
struct da903x_chip {int lock; int client; } ;


 int FUNC_0 (int ,int,int*) ;
 int FUNC_1 (int ,int,int) ;
 struct da903x_chip* FUNC_2 (struct device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct device *VAR_0, int VAR_1, uint8_t VAR_2, uint8_t VAR_3)
{
 struct da903x_chip *VAR_4 = FUNC_2(VAR_0);
 uint8_t VAR_5;
 int VAR_6 = 0;

 FUNC_3(&VAR_4->lock);

 VAR_6 = FUNC_0(VAR_4->client, VAR_1, &VAR_5);
 if (VAR_6)
  goto out;

 if ((VAR_5 & VAR_3) != VAR_2) {
  VAR_5 = (VAR_5 & ~VAR_3) | VAR_2;
  VAR_6 = FUNC_1(VAR_4->client, VAR_1, VAR_5);
 }
out:
 FUNC_4(&VAR_4->lock);
 return VAR_6;
}
