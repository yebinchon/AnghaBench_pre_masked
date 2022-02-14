
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {int conf; } ;
struct dp_altmode {int lock; TYPE_2__ data; TYPE_1__* alt; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_3__ {int vdo; } ;


 int FUNC_0 (char**) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 char** VAR_4 ;
 struct dp_altmode* FUNC_3 (struct device*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*,char*,char*) ;

__attribute__((used)) static ssize_t FUNC_7(struct device *VAR_5,
      struct device_attribute *VAR_6, char *VAR_7)
{
 struct dp_altmode *VAR_8 = FUNC_3(VAR_5);
 int VAR_9;
 u8 VAR_10;
 u8 VAR_11;
 int VAR_12;

 FUNC_4(&VAR_8->lock);

 VAR_10 = FUNC_1(VAR_8->alt->vdo);
 VAR_11 = FUNC_2(VAR_8->data.conf);

 VAR_9 = FUNC_6(VAR_7, "%s ", VAR_11 ? "USB" : "[USB]");

 for (VAR_12 = 1; VAR_12 < FUNC_0(VAR_4); VAR_12++) {
  if (VAR_12 == VAR_11)
   VAR_9 += FUNC_6(VAR_7 + VAR_9, "[%s] ", VAR_4[VAR_12]);
  else if ((VAR_12 == VAR_2 && VAR_10 & VAR_0) ||
    (VAR_12 == VAR_3 && VAR_10 & VAR_1))
   VAR_9 += FUNC_6(VAR_7 + VAR_9, "%s ", VAR_4[VAR_12]);
 }

 FUNC_5(&VAR_8->lock);

 VAR_7[VAR_9 - 1] = '\n';
 return VAR_9;
}
