
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct splice_pipe_desc {unsigned int nr_pages_max; void* partial; void* pages; } ;
struct pipe_inode_info {int buffers; } ;
struct partial_page {int dummy; } ;
struct page {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (void*) ;
 void* FUNC_2 (unsigned int,int,int ) ;

int FUNC_3(const struct pipe_inode_info *VAR_3, struct splice_pipe_desc *VAR_4)
{
 unsigned int VAR_5 = FUNC_0(VAR_3->buffers);

 VAR_4->nr_pages_max = VAR_5;
 if (VAR_5 <= VAR_2)
  return 0;

 VAR_4->pages = FUNC_2(VAR_5, sizeof(struct page *), VAR_1);
 VAR_4->partial = FUNC_2(VAR_5, sizeof(struct partial_page),
         VAR_1);

 if (VAR_4->pages && VAR_4->partial)
  return 0;

 FUNC_1(VAR_4->pages);
 FUNC_1(VAR_4->partial);
 return -VAR_0;
}
