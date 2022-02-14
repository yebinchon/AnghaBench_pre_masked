
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btt {size_t rawsize; int arena_list; int nlba; } ;
struct arena_info {int list; scalar_t__ nextoff; scalar_t__ size; scalar_t__ external_nlba; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 struct arena_info* FUNC_0 (struct btt*,size_t,int ,size_t) ;
 int FUNC_1 (struct btt*) ;
 int FUNC_2 (int *,int *) ;
 size_t FUNC_3 (int ,int ,size_t) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_4(struct btt *VAR_4)
{
 size_t VAR_5 = VAR_4->rawsize;
 size_t VAR_6 = 0;

 while (VAR_5) {
  struct arena_info *VAR_7;
  size_t VAR_8 = FUNC_3(VAR_3, VAR_0, VAR_5);

  VAR_5 -= VAR_8;
  if (VAR_8 < VAR_1)
   break;

  VAR_7 = FUNC_0(VAR_4, VAR_8, VAR_4->nlba, VAR_6);
  if (!VAR_7) {
   FUNC_1(VAR_4);
   return -VAR_2;
  }
  VAR_4->nlba += VAR_7->external_nlba;
  if (VAR_5 >= VAR_1)
   VAR_7->nextoff = VAR_7->size;
  else
   VAR_7->nextoff = 0;
  VAR_6 += VAR_8;
  FUNC_2(&VAR_7->list, &VAR_4->arena_list);
 }

 return 0;
}
