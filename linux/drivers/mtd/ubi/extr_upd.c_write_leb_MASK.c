
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubi_volume {scalar_t__ vol_type; int usable_leb_size; } ;
struct ubi_device {int min_io_size; } ;


 int FUNC_0 (int,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (void*,int,int) ;
 int FUNC_3 (struct ubi_device*,void*,int) ;
 int FUNC_4 (struct ubi_device*,struct ubi_volume*,int,void*,int ,int) ;
 int FUNC_5 (struct ubi_device*,struct ubi_volume*,int,void*,int,int) ;

__attribute__((used)) static int FUNC_6(struct ubi_device *VAR_1, struct ubi_volume *VAR_2, int VAR_3,
       void *VAR_4, int VAR_5, int VAR_6)
{
 int VAR_7;

 if (VAR_2->vol_type == VAR_0) {
  int VAR_8 = FUNC_0(VAR_5, VAR_1->min_io_size);

  FUNC_2(VAR_4 + VAR_5, 0xFF, VAR_8 - VAR_5);
  VAR_5 = FUNC_3(VAR_1, VAR_4, VAR_8);
  if (VAR_5 == 0) {
   FUNC_1("all %d bytes contain 0xFF - skip", VAR_5);
   return 0;
  }

  VAR_7 = FUNC_4(VAR_1, VAR_2, VAR_3, VAR_4, 0, VAR_5);
 } else {
  FUNC_2(VAR_4 + VAR_5, 0, VAR_2->usable_leb_size - VAR_5);
  VAR_7 = FUNC_5(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
 }

 return VAR_7;
}
