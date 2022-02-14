
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dsaf_device {struct device* dev; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 struct dsaf_device* FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (struct device*,struct dsaf_device*) ;
 struct dsaf_device* FUNC_2 (struct device*,int,int ) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static struct dsaf_device *FUNC_4(struct device *VAR_2,
           size_t VAR_3)
{
 struct dsaf_device *VAR_4;

 VAR_4 = FUNC_2(VAR_2,
    sizeof(*VAR_4) + VAR_3, VAR_1);
 if (FUNC_3(!VAR_4)) {
  VAR_4 = FUNC_0(-VAR_0);
 } else {
  VAR_4->dev = VAR_2;
  FUNC_1(VAR_2, VAR_4);
 }

 return VAR_4;
}
