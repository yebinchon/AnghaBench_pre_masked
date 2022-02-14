
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct prism2_wep_data {int key_len; int key; } ;


 int FUNC_0 (void*,int ,int) ;

__attribute__((used)) static int FUNC_1(void *VAR_0, int VAR_1, u8 *VAR_2, void *VAR_3)
{
 struct prism2_wep_data *VAR_4 = VAR_3;

 if (VAR_1 < VAR_4->key_len)
  return -1;

 FUNC_0(VAR_0, VAR_4->key, VAR_4->key_len);

 return VAR_4->key_len;
}
