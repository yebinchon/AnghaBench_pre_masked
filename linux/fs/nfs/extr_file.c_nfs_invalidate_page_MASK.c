
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct page {TYPE_1__* mapping; } ;
struct TYPE_4__ {int host; } ;
struct TYPE_3__ {int host; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int ,char*,struct page*,unsigned int,unsigned int) ;
 int FUNC_1 (struct page*,int ) ;
 int FUNC_2 (int ,struct page*) ;
 TYPE_2__* FUNC_3 (struct page*) ;

__attribute__((used)) static void FUNC_4(struct page *VAR_2, unsigned int VAR_3,
    unsigned int VAR_4)
{
 FUNC_0(VAR_0, "NFS: invalidate_page(%p, %u, %u)\n",
   VAR_2, VAR_3, VAR_4);

 if (VAR_3 != 0 || VAR_4 < VAR_1)
  return;

 FUNC_2(FUNC_3(VAR_2)->host, VAR_2);

 FUNC_1(VAR_2, VAR_2->mapping->host);
}
