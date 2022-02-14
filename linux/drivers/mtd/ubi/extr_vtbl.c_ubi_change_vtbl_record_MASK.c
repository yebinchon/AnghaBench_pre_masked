
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ubi_vtbl_record {int crc; } ;
struct ubi_device {int vtbl_slots; int * vtbl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,struct ubi_vtbl_record*,int ) ;
 struct ubi_vtbl_record VAR_2 ;
 int FUNC_2 (int *,struct ubi_vtbl_record*,int) ;
 int FUNC_3 (struct ubi_device*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct ubi_device*) ;

int FUNC_6(struct ubi_device *VAR_3, int VAR_4,
      struct ubi_vtbl_record *VAR_5)
{
 int VAR_6;
 uint32_t VAR_7;

 FUNC_4(VAR_4 >= 0 && VAR_4 < VAR_3->vtbl_slots);

 if (!VAR_5)
  VAR_5 = &VAR_2;
 else {
  VAR_7 = FUNC_1(VAR_0, VAR_5, VAR_1);
  VAR_5->crc = FUNC_0(VAR_7);
 }

 FUNC_2(&VAR_3->vtbl[VAR_4], VAR_5, sizeof(struct ubi_vtbl_record));
 VAR_6 = FUNC_5(VAR_3);

 FUNC_3(VAR_3);
 return VAR_6 ? VAR_6 : 0;
}
