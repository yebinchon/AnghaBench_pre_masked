
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct bio {int bi_status; struct page* bi_private; } ;


 int FUNC_0 (struct page*) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (struct page*) ;

__attribute__((used)) static void FUNC_3(struct bio *VAR_0)
{
 struct page *VAR_1 = VAR_0->bi_private;

 if (!VAR_0->bi_status)
  FUNC_0(VAR_1);
 else
  FUNC_1("error %d reading superblock\n", VAR_0->bi_status);
 FUNC_2(VAR_1);
}
