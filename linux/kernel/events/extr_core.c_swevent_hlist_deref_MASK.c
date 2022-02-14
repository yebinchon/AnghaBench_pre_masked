
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct swevent_htable {int hlist_mutex; int swevent_hlist; } ;
struct swevent_hlist {int dummy; } ;


 int FUNC_0 (int *) ;
 struct swevent_hlist* FUNC_1 (int ,int ) ;

__attribute__((used)) static inline struct swevent_hlist *
FUNC_2(struct swevent_htable *VAR_0)
{
 return FUNC_1(VAR_0->swevent_hlist,
      FUNC_0(&VAR_0->hlist_mutex));
}
