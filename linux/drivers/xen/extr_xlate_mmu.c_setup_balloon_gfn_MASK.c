
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct map_balloon_pages {unsigned long* pfns; int idx; } ;



__attribute__((used)) static void FUNC_0(unsigned long VAR_0, void *VAR_1)
{
 struct map_balloon_pages *VAR_2 = VAR_1;

 VAR_2->pfns[VAR_2->idx++] = VAR_0;
}
