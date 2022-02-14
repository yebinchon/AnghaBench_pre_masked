
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct pkey_apqn {int card; int domain; } ;
typedef enum pkey_key_type { ____Placeholder_pkey_key_type } pkey_key_type ;
typedef enum pkey_key_size { ____Placeholder_pkey_key_size } pkey_key_size ;


 int VAR_0 ;
 int VAR_1 ;





 size_t VAR_2 ;
 int FUNC_0 (int,int,int,int ,int const*,int *,size_t*) ;
 int FUNC_1 (int,int,int,int const*,int *) ;

__attribute__((used)) static int FUNC_2(const struct pkey_apqn *VAR_3, size_t VAR_4,
       enum pkey_key_type VAR_5, enum pkey_key_size VAR_6,
       u32 VAR_7, const u8 *VAR_8,
       u8 *VAR_9, size_t *VAR_10)
{
 int VAR_11, VAR_12, VAR_13, VAR_14;


 if (!VAR_3 || !VAR_4)
  return -VAR_0;


 switch (VAR_5) {
 case 128:
 case 129:
  if (*VAR_10 < VAR_2)
   return -VAR_0;
  break;
 default:
  return -VAR_0;
 }
 switch (VAR_6) {
 case 132:
 case 131:
 case 130:
  break;
 default:
  return -VAR_0;
 }


 for (VAR_11 = 0, VAR_14 = -VAR_1; VAR_11 < VAR_4; VAR_11++) {
  VAR_12 = VAR_3[VAR_11].card;
  VAR_13 = VAR_3[VAR_11].domain;
  if (VAR_5 == 128) {
   VAR_14 = FUNC_1(VAR_12, VAR_13, VAR_6,
         VAR_8, VAR_9);
   *VAR_10 = (VAR_14 ? 0 : VAR_2);
  } else
   VAR_14 = FUNC_0(VAR_12, VAR_13, VAR_6, VAR_7,
            VAR_8, VAR_9, VAR_10);
  if (VAR_14 == 0)
   break;
 }

 return VAR_14;
}
