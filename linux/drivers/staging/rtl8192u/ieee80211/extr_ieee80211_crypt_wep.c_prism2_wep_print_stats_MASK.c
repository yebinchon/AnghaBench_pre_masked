
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct prism2_wep_data {int key_idx; int key_len; } ;


 int FUNC_0 (char*,char*,int,int) ;

__attribute__((used)) static char *FUNC_1(char *VAR_0, void *VAR_1)
{
 struct prism2_wep_data *VAR_2 = VAR_1;

 VAR_0 += FUNC_0(VAR_0, "key[%d] alg=WEP len=%d\n",
       VAR_2->key_idx, VAR_2->key_len);
 return VAR_0;
}
