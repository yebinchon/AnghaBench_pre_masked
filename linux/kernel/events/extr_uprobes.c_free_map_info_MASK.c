
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct map_info {struct map_info* next; } ;


 int FUNC_0 (struct map_info*) ;

__attribute__((used)) static inline struct map_info *FUNC_1(struct map_info *VAR_0)
{
 struct map_info *VAR_1 = VAR_0->next;
 FUNC_0(VAR_0);
 return VAR_1;
}
