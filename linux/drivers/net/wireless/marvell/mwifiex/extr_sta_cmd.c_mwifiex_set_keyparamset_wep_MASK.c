
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u16 ;
struct mwifiex_private {size_t wep_key_curr_index; TYPE_1__* wep_key; int adapter; } ;
struct mwifiex_ie_types_header {int dummy; } ;
struct mwifiex_ie_type_key_param_set {size_t* key; void* key_len; void* key_info; void* key_type_id; void* length; void* type; } ;
struct TYPE_2__ {int key_length; int key_material; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int*,int ,int) ;
 int FUNC_2 (int ,int ,char*,size_t,int) ;

__attribute__((used)) static int
FUNC_3(struct mwifiex_private *VAR_11,
       struct mwifiex_ie_type_key_param_set *VAR_12,
       u16 *VAR_13)
{
 int VAR_14;
 u8 VAR_15;


 for (VAR_15 = 0; VAR_15 < VAR_7; VAR_15++) {
  if ((VAR_11->wep_key[VAR_15].key_length == VAR_10) ||
      (VAR_11->wep_key[VAR_15].key_length == VAR_9)) {
   VAR_12->type =
    FUNC_0(VAR_8);


   VAR_12->length = FUNC_0((u16)
     (VAR_11->wep_key[VAR_15].
      key_length +
      8));
   VAR_12->key_type_id =
    FUNC_0(VAR_5);
   VAR_12->key_info =
    FUNC_0(VAR_3 | VAR_6 |
         VAR_4);
   VAR_12->key_len =
    FUNC_0(VAR_11->wep_key[VAR_15].key_length);

   VAR_12->key[0] = VAR_15;

   if (VAR_15 ==
       (VAR_11->
        wep_key_curr_index & VAR_1))
    VAR_12->key[1] = 1;
   else
    VAR_12->key[1] = 0;
   FUNC_1(&VAR_12->key[2],
    VAR_11->wep_key[VAR_15].key_material,
    VAR_11->wep_key[VAR_15].key_length);

   VAR_14 = VAR_11->wep_key[VAR_15].key_length +
    8 +
    sizeof(struct mwifiex_ie_types_header);
   *VAR_13 += (u16) VAR_14;
   VAR_12 =
    (struct mwifiex_ie_type_key_param_set *)
      ((u8 *)VAR_12 +
       VAR_14);
  } else if (!VAR_11->wep_key[VAR_15].key_length) {
   continue;
  } else {
   FUNC_2(VAR_11->adapter, VAR_0,
        "key%d Length = %d is incorrect\n",
        (VAR_15 + 1), VAR_11->wep_key[VAR_15].key_length);
   return -1;
  }
 }

 return 0;
}
