
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct key {int dummy; } ;
struct afs_cell {char* name; struct key* anonymous_key; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct key*) ;
 int FUNC_1 (struct key*) ;
 int FUNC_2 (char*,struct key*,int ) ;
 int FUNC_3 (struct key*) ;
 int FUNC_4 (char*,char*,int) ;
 struct key* FUNC_5 (char*) ;
 int FUNC_6 (char) ;

__attribute__((used)) static int FUNC_7(struct afs_cell *VAR_1)
{
 struct key *VAR_2;
 char VAR_3[4 + VAR_0 + 1], *VAR_4, *VAR_5;


 FUNC_4(VAR_3, "afs@", 4);
 VAR_5 = VAR_3 + 4;
 VAR_4 = VAR_1->name;
 do {
  *VAR_5++ = FUNC_6(*VAR_4);
 } while (*VAR_4++);

 VAR_2 = FUNC_5(VAR_3);
 if (FUNC_0(VAR_2))
  return FUNC_1(VAR_2);

 VAR_1->anonymous_key = VAR_2;

 FUNC_2("anon key %p{%x}",
        VAR_1->anonymous_key, FUNC_3(VAR_1->anonymous_key));
 return 0;
}
