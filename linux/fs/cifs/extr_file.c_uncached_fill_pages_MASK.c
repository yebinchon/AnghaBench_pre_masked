
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct iov_iter {int dummy; } ;
struct cifs_readdata {unsigned int nr_pages; unsigned int page_offset; scalar_t__ got_bytes; unsigned int tailsz; unsigned int pagesz; scalar_t__ mr; struct page** pages; } ;
struct TCP_Server_Info {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (struct TCP_Server_Info*,struct page*,unsigned int,size_t) ;
 int FUNC_1 (struct page*,unsigned int,size_t,struct iov_iter*) ;
 int FUNC_2 (struct page*) ;

__attribute__((used)) static int
FUNC_3(struct TCP_Server_Info *VAR_2,
      struct cifs_readdata *VAR_3, struct iov_iter *VAR_4,
      unsigned int VAR_5)
{
 int VAR_6 = 0;
 unsigned int VAR_7;
 unsigned int VAR_8 = VAR_3->nr_pages;
 unsigned int VAR_9 = VAR_3->page_offset;

 VAR_3->got_bytes = 0;
 VAR_3->tailsz = VAR_1;
 for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++) {
  struct page *VAR_10 = VAR_3->pages[VAR_7];
  size_t VAR_11;
  unsigned int VAR_12 = VAR_3->pagesz;

  if (VAR_7 == 0)
   VAR_12 -= VAR_9;
  else
   VAR_9 = 0;


  if (VAR_5 <= 0) {

   VAR_3->pages[VAR_7] = ((void*)0);
   VAR_3->nr_pages--;
   FUNC_2(VAR_10);
   continue;
  }

  VAR_11 = VAR_5;
  if (VAR_5 >= VAR_12)

   VAR_11 = VAR_12;
  else
   VAR_3->tailsz = VAR_5;
  VAR_5 -= VAR_11;

  if (VAR_4)
   VAR_6 = FUNC_1(
     VAR_10, VAR_9, VAR_11, VAR_4);




  else
   VAR_6 = FUNC_0(
     VAR_2, VAR_10, VAR_9, VAR_11);
  if (VAR_6 < 0)
   break;

  VAR_3->got_bytes += VAR_6;
 }

 return VAR_3->got_bytes > 0 && VAR_6 != -VAR_0 ?
      VAR_3->got_bytes : VAR_6;
}
