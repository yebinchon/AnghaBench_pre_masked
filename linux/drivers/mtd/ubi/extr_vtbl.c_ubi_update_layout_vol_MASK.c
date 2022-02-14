
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubi_volume {int dummy; } ;
struct ubi_device {int vtbl_size; int vtbl; struct ubi_volume** volumes; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ubi_device*,struct ubi_volume*,int,int ,int ) ;
 size_t FUNC_1 (struct ubi_device*,int ) ;

__attribute__((used)) static int FUNC_2(struct ubi_device *VAR_2)
{
 struct ubi_volume *VAR_3;
 int VAR_4, VAR_5;

 VAR_3 = VAR_2->volumes[FUNC_1(VAR_2, VAR_1)];
 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  VAR_5 = FUNC_0(VAR_2, VAR_3, VAR_4, VAR_2->vtbl,
      VAR_2->vtbl_size);
  if (VAR_5)
   return VAR_5;
 }

 return 0;
}
