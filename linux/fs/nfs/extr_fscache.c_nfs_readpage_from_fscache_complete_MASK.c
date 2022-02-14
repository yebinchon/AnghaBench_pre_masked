
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {TYPE_1__* mapping; } ;
struct TYPE_2__ {int host; } ;


 int VAR_0 ;
 int FUNC_0 (struct page*) ;
 int FUNC_1 (int ,char*,struct page*,void*,int) ;
 int FUNC_2 (void*,int ,struct page*) ;
 int FUNC_3 (struct page*) ;

__attribute__((used)) static void FUNC_4(struct page *VAR_1,
            void *VAR_2,
            int VAR_3)
{
 FUNC_1(VAR_0,
   "NFS: readpage_from_fscache_complete (0x%p/0x%p/%d)\n",
   VAR_1, VAR_2, VAR_3);



 if (!VAR_3) {
  FUNC_0(VAR_1);
  FUNC_3(VAR_1);
 } else {
  VAR_3 = FUNC_2(VAR_2, VAR_1->mapping->host, VAR_1);
  if (VAR_3)
   FUNC_3(VAR_1);
 }
}
