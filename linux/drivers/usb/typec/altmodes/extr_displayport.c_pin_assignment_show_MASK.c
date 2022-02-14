
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {int conf; } ;
struct dp_altmode {int lock; TYPE_2__* alt; TYPE_1__ data; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_4__ {int vdo; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (int ) ;
 struct dp_altmode* FUNC_4 (struct device*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 char** VAR_1 ;
 scalar_t__ FUNC_8 (char*,char*,char*) ;

__attribute__((used)) static ssize_t FUNC_9(struct device *VAR_2,
       struct device_attribute *VAR_3, char *VAR_4)
{
 struct dp_altmode *VAR_5 = FUNC_4(VAR_2);
 u8 VAR_6;
 int VAR_7 = 0;
 u8 VAR_8;
 int VAR_9;

 FUNC_6(&VAR_5->lock);

 VAR_8 = FUNC_5(FUNC_3(VAR_5->data.conf));

 if (FUNC_2(VAR_5->data.conf) == VAR_0)
  VAR_6 = FUNC_1(VAR_5->alt->vdo);
 else
  VAR_6 = FUNC_0(VAR_5->alt->vdo);

 for (VAR_9 = 0; VAR_6; VAR_6 >>= 1, VAR_9++) {
  if (VAR_6 & 1) {
   if (VAR_9 == VAR_8)
    VAR_7 += FUNC_8(VAR_4 + VAR_7, "[%s] ",
            VAR_1[VAR_9]);
   else
    VAR_7 += FUNC_8(VAR_4 + VAR_7, "%s ",
            VAR_1[VAR_9]);
  }
 }

 FUNC_7(&VAR_5->lock);

 VAR_4[VAR_7 - 1] = '\n';
 return VAR_7;
}
