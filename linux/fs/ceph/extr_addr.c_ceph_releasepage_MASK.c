
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int index; TYPE_1__* mapping; } ;
typedef int gfp_t ;
struct TYPE_2__ {int host; } ;


 scalar_t__ FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*,int ) ;
 int FUNC_3 (char*,int ,struct page*,int ,char*) ;

__attribute__((used)) static int FUNC_4(struct page *VAR_0, gfp_t VAR_1)
{
 FUNC_3("%p releasepage %p idx %lu (%sdirty)\n", VAR_0->mapping->host,
      VAR_0, VAR_0->index, FUNC_0(VAR_0) ? "" : "not ");


 if (!FUNC_2(VAR_0, VAR_1))
  return 0;

 return !FUNC_1(VAR_0);
}
