
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

int FUNC_5(struct device *VAR_0, int VAR_1, uint8_t VAR_2)
{
 struct da903x_chip *VAR_3 = FUNC_2(VAR_0);
 uint8_t VAR_4;
 int VAR_5 = 0;

 FUNC_3(&VAR_3->lock);

 VAR_5 = FUNC_0(VAR_3->client, VAR_1, &VAR_4);
 if (VAR_5)
  goto out;

 if ((VAR_4 & VAR_2) != VAR_2) {
  VAR_4 |= VAR_2;
  VAR_5 = FUNC_1(VAR_3->client, VAR_1, VAR_4);
 }
out:
 FUNC_4(&VAR_3->lock);
 return VAR_5;
}
