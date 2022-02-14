
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubi_volume {scalar_t__ vol_type; int usable_leb_size; int used_ebs; int last_eb_bytes; } ;
struct ubi_device {struct ubi_volume** volumes; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct ubi_device*,struct ubi_volume*,int,void*,int ,int,int) ;
 int FUNC_3 (void*) ;
 void* FUNC_4 (int) ;

int FUNC_5(struct ubi_device *VAR_2, int VAR_3)
{
 void *VAR_4;
 int VAR_5 = 0, VAR_6;
 struct ubi_volume *VAR_7 = VAR_2->volumes[VAR_3];

 if (VAR_7->vol_type != VAR_1)
  return 0;

 VAR_4 = FUNC_4(VAR_7->usable_leb_size);
 if (!VAR_4)
  return -VAR_0;

 for (VAR_6 = 0; VAR_6 < VAR_7->used_ebs; VAR_6++) {
  int VAR_8;

  FUNC_0();

  if (VAR_6 == VAR_7->used_ebs - 1)
   VAR_8 = VAR_7->last_eb_bytes;
  else
   VAR_8 = VAR_7->usable_leb_size;

  VAR_5 = FUNC_2(VAR_2, VAR_7, VAR_6, VAR_4, 0, VAR_8, 1);
  if (VAR_5) {
   if (FUNC_1(VAR_5))
    VAR_5 = 1;
   break;
  }
 }

 FUNC_3(VAR_4);
 return VAR_5;
}
