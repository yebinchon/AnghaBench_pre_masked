
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct fuse_page_desc {int dummy; } ;
typedef int gfp_t ;


 struct page** FUNC_0 (unsigned int,int ) ;

__attribute__((used)) static struct page **FUNC_1(unsigned int VAR_0, gfp_t VAR_1,
          struct fuse_page_desc **VAR_2)
{
 struct page **VAR_3;

 VAR_3 = FUNC_0(VAR_0 * (sizeof(struct page *) +
      sizeof(struct fuse_page_desc)), VAR_1);
 *VAR_2 = (void *) (VAR_3 + VAR_0);

 return VAR_3;
}
