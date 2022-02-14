
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct key {int description; } ;
struct afs_cell {struct key* anonymous_key; TYPE_1__* net; } ;
struct TYPE_2__ {int net; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct key*) ;
 int FUNC_1 (struct key*) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (char*,int ) ;
 struct key* FUNC_5 (struct key*) ;
 int FUNC_6 (struct key*) ;
 int VAR_1 ;
 struct key* FUNC_7 (int *,int ,int ,int *) ;

struct key *FUNC_8(struct afs_cell *VAR_2)
{
 struct key *VAR_3;

 FUNC_3("{%x}", FUNC_6(VAR_2->anonymous_key));

 FUNC_2("key %s", VAR_2->anonymous_key->description);
 VAR_3 = FUNC_7(&VAR_1, VAR_2->anonymous_key->description,
         VAR_2->net->net, ((void*)0));
 if (FUNC_0(VAR_3)) {
  if (FUNC_1(VAR_3) != -VAR_0) {
   FUNC_4(" = %ld", FUNC_1(VAR_3));
   return VAR_3;
  }


  FUNC_4(" = {%x} [anon]", FUNC_6(VAR_2->anonymous_key));
  return FUNC_5(VAR_2->anonymous_key);
 } else {

  FUNC_4(" = {%x} [auth]", FUNC_6(VAR_3));
  return VAR_3;
 }
}
