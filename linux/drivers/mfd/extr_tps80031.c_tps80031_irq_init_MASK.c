
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tps80031 {int irq_data; int * regmap; struct device* dev; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (struct device*,char*,int) ;
 int FUNC_1 (int ,int,int ,int,int *,int *) ;
 int VAR_3 ;
 int FUNC_2 (struct device*,size_t,scalar_t__,int) ;

__attribute__((used)) static int FUNC_3(struct tps80031 *VAR_4, int VAR_5, int VAR_6)
{
 struct device *VAR_7 = VAR_4->dev;
 int VAR_8, VAR_9;
 for (VAR_8 = 0; VAR_8 < 3; VAR_8++)
  FUNC_2(VAR_7, VAR_2,
    VAR_1 + VAR_8, 0x00);

 VAR_9 = FUNC_1(VAR_4->regmap[VAR_2], VAR_5,
   VAR_0, VAR_6,
   &VAR_3, &VAR_4->irq_data);
 if (VAR_9 < 0) {
  FUNC_0(VAR_7, "add irq failed, err = %d\n", VAR_9);
  return VAR_9;
 }
 return VAR_9;
}
