
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct prism2_wep_data {int key_len; int key_idx; } ;


 int FUNC_0 (struct seq_file*,char*,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct seq_file *VAR_0, void *VAR_1)
{
 struct prism2_wep_data *VAR_2 = VAR_1;

 FUNC_0(VAR_0, "key[%d] alg=WEP len=%d\n", VAR_2->key_idx, VAR_2->key_len);
}
