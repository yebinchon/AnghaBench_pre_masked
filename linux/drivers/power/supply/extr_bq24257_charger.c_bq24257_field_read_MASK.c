
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bq24257_device {int * rmap_fields; } ;
typedef enum bq24257_fields { ____Placeholder_bq24257_fields } bq24257_fields ;


 int FUNC_0 (int ,int*) ;

__attribute__((used)) static int FUNC_1(struct bq24257_device *VAR_0,
         enum bq24257_fields VAR_1)
{
 int VAR_2;
 int VAR_3;

 VAR_2 = FUNC_0(VAR_0->rmap_fields[VAR_1], &VAR_3);
 if (VAR_2 < 0)
  return VAR_2;

 return VAR_3;
}
