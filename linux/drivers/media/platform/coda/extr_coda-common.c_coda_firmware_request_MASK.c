
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct coda_dev {size_t firmware; int dev; TYPE_1__* devtype; } ;
struct TYPE_2__ {char** firmware; int product; } ;


 size_t FUNC_0 (char**) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,char*,int ) ;
 int FUNC_3 (int ,int,char*,int ,int ,struct coda_dev*,int ) ;

__attribute__((used)) static int FUNC_4(struct coda_dev *VAR_4)
{
 char *VAR_5;

 if (VAR_4->firmware >= FUNC_0(VAR_4->devtype->firmware))
  return -VAR_0;

 VAR_5 = VAR_4->devtype->firmware[VAR_4->firmware];

 FUNC_2(VAR_4->dev, "requesting firmware '%s' for %s\n", VAR_5,
  FUNC_1(VAR_4->devtype->product));

 return FUNC_3(VAR_2, 1, VAR_5, VAR_4->dev,
           VAR_1, VAR_4, VAR_3);
}
