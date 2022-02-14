
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tb_property_entry {int length; int value; int type; } ;
typedef struct tb_property_entry u32 ;
struct tb_property_dir {int dummy; } ;
struct TYPE_2__ {char* data; char* text; int immediate; struct tb_property_dir* dir; } ;
struct tb_property {int length; int type; TYPE_1__ value; } ;


 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;

 struct tb_property_dir* FUNC_0 (struct tb_property_entry const*,size_t,int ,int,int) ;
 void* FUNC_1 (int,int,int ) ;
 int FUNC_2 (struct tb_property*) ;
 int FUNC_3 (char*,struct tb_property_entry const*,int) ;
 struct tb_property* FUNC_4 (char*,int ) ;
 int FUNC_5 (struct tb_property_entry const*,size_t) ;

__attribute__((used)) static struct tb_property *FUNC_6(const u32 *VAR_3, size_t VAR_4,
     const struct tb_property_entry *VAR_5)
{
 char VAR_6[VAR_1 + 1];
 struct tb_property *VAR_7;
 struct tb_property_dir *VAR_8;

 if (!FUNC_5(VAR_5, VAR_4))
  return ((void*)0);

 FUNC_3(VAR_6, VAR_5, 2);
 VAR_6[VAR_1] = '\0';

 VAR_7 = FUNC_4(VAR_6, VAR_5->type);
 if (!VAR_7)
  return ((void*)0);

 VAR_7->length = VAR_5->length;

 switch (VAR_7->type) {
 case 130:
  VAR_8 = FUNC_0(VAR_3, VAR_4, VAR_5->value,
           VAR_5->length, 0);
  if (!VAR_8) {
   FUNC_2(VAR_7);
   return ((void*)0);
  }
  VAR_7->value.dir = VAR_8;
  break;

 case 131:
  VAR_7->value.data = FUNC_1(VAR_7->length, sizeof(u32),
            VAR_0);
  if (!VAR_7->value.data) {
   FUNC_2(VAR_7);
   return ((void*)0);
  }
  FUNC_3(VAR_7->value.data, VAR_3 + VAR_5->value,
        VAR_5->length);
  break;

 case 129:
  VAR_7->value.text = FUNC_1(VAR_7->length, sizeof(u32),
            VAR_0);
  if (!VAR_7->value.text) {
   FUNC_2(VAR_7);
   return ((void*)0);
  }
  FUNC_3(VAR_7->value.text, VAR_3 + VAR_5->value,
        VAR_5->length);

  VAR_7->value.text[VAR_7->length * 4 - 1] = '\0';
  break;

 case 128:
  VAR_7->value.immediate = VAR_5->value;
  break;

 default:
  VAR_7->type = VAR_2;
  break;
 }

 return VAR_7;
}
