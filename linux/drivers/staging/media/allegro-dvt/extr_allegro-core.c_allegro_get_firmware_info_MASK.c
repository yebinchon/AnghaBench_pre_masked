
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fw_info {unsigned int id; unsigned int id_codec; } ;
struct firmware {unsigned int size; } ;
struct allegro_dev {int dummy; } ;


 int FUNC_0 (struct fw_info const*) ;
 struct fw_info const* VAR_0 ;

__attribute__((used)) static const struct fw_info *
FUNC_1(struct allegro_dev *VAR_1,
     const struct firmware *VAR_2,
     const struct firmware *VAR_3)
{
 int VAR_4;
 unsigned int VAR_5 = VAR_2->size;
 unsigned int VAR_6 = VAR_3->size;

 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_0); VAR_4++)
  if (VAR_0[VAR_4].id == VAR_5 &&
      VAR_0[VAR_4].id_codec == VAR_6)
   return &VAR_0[VAR_4];

 return ((void*)0);
}
