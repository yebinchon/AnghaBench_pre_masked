
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kgdb_state {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (char**,unsigned long*) ;
 char* FUNC_2 (char*,int ,unsigned long) ;
 char* VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_3(struct kgdb_state *VAR_3)
{
 char *VAR_4 = &VAR_1[1];
 unsigned long VAR_5;
 unsigned long VAR_6;
 char *VAR_7;

 if (FUNC_1(&VAR_4, &VAR_6) > 0 && *VAR_4++ == ',' &&
     FUNC_1(&VAR_4, &VAR_5) > 0) {
  VAR_7 = FUNC_2((char *)VAR_6, VAR_2, VAR_5);
  if (!VAR_7)
   FUNC_0(VAR_2, -VAR_0);
 } else {
  FUNC_0(VAR_2, -VAR_0);
 }
}
