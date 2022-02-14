
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct key {int sem; } ;
struct encrypted_key_payload {void* decrypted_data; } ;


 struct encrypted_key_payload* FUNC_0 (struct key*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void *FUNC_2(struct key *VAR_0)
{
 struct encrypted_key_payload *VAR_1 = FUNC_0(VAR_0);

 FUNC_1(&VAR_0->sem);

 return VAR_1->decrypted_data;
}
