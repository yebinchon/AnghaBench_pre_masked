
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {int dummy; } ;
struct TYPE_2__ {struct fscrypt_master_key** data; } ;
struct key {char* description; TYPE_1__ payload; } ;
struct fscrypt_master_key {int mk_secret; } ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct key const*) ;
 int FUNC_2 (struct seq_file*,char*) ;

__attribute__((used)) static void FUNC_3(const struct key *VAR_0, struct seq_file *VAR_1)
{
 FUNC_2(VAR_1, VAR_0->description);

 if (FUNC_1(VAR_0)) {
  const struct fscrypt_master_key *VAR_2 = VAR_0->payload.data[0];

  if (!FUNC_0(&VAR_2->mk_secret))
   FUNC_2(VAR_1, ": secret removed");
 }
}
