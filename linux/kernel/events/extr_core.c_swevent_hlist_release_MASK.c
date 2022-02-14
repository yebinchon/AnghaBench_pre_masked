
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct swevent_htable {int swevent_hlist; } ;
struct swevent_hlist {int dummy; } ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct swevent_hlist*,int ) ;
 int VAR_0 ;
 struct swevent_hlist* FUNC_2 (struct swevent_htable*) ;

__attribute__((used)) static void FUNC_3(struct swevent_htable *VAR_1)
{
 struct swevent_hlist *VAR_2 = FUNC_2(VAR_1);

 if (!VAR_2)
  return;

 FUNC_0(VAR_1->swevent_hlist, ((void*)0));
 FUNC_1(VAR_2, VAR_0);
}
