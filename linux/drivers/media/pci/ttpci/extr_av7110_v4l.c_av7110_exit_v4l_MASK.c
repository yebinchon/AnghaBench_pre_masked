
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct saa7146_dev {int dummy; } ;
struct av7110 {struct saa7146_dev* dev; int vbi_dev; int v4l_dev; } ;


 int FUNC_0 (int *,struct saa7146_dev*) ;
 int FUNC_1 (struct saa7146_dev*) ;

int FUNC_2(struct av7110 *VAR_0)
{
 struct saa7146_dev* VAR_1 = VAR_0->dev;

 FUNC_0(&VAR_0->v4l_dev, VAR_0->dev);
 FUNC_0(&VAR_0->vbi_dev, VAR_0->dev);

 FUNC_1(VAR_1);

 return 0;
}
