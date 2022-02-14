
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct page {int index; } ;
struct iov_iter {int dummy; } ;
struct cifs_readdata {unsigned int nr_pages; unsigned int page_offset; scalar_t__ got_bytes; unsigned int tailsz; unsigned int pagesz; scalar_t__ mr; struct page** pages; TYPE_1__* mapping; } ;
struct TCP_Server_Info {int dummy; } ;
typedef int pgoff_t ;
struct TYPE_4__ {int server_eof; } ;
struct TYPE_3__ {int host; } ;


 TYPE_2__* FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (int ,char*,int,int) ;
 int FUNC_3 (struct TCP_Server_Info*,struct page*,unsigned int,size_t) ;
 int FUNC_4 (struct page*,unsigned int,size_t,struct iov_iter*) ;
 int FUNC_5 (struct page*) ;
 int FUNC_6 (struct page*) ;
 int FUNC_7 (struct page*) ;
 int FUNC_8 (struct page*) ;
 int FUNC_9 (struct page*,unsigned int,unsigned int) ;

__attribute__((used)) static int
FUNC_10(struct TCP_Server_Info *VAR_4,
       struct cifs_readdata *VAR_5, struct iov_iter *VAR_6,
       unsigned int VAR_7)
{
 int VAR_8 = 0;
 unsigned int VAR_9;
 u64 VAR_10;
 pgoff_t VAR_11;
 unsigned int VAR_12 = VAR_5->nr_pages;
 unsigned int VAR_13 = VAR_5->page_offset;


 VAR_10 = FUNC_0(VAR_5->mapping->host)->server_eof;
 VAR_11 = VAR_10 ? (VAR_10 - 1) >> VAR_2 : 0;
 FUNC_2(VAR_1, "eof=%llu eof_index=%lu\n", VAR_10, VAR_11);

 VAR_5->got_bytes = 0;
 VAR_5->tailsz = VAR_3;
 for (VAR_9 = 0; VAR_9 < VAR_12; VAR_9++) {
  struct page *VAR_14 = VAR_5->pages[VAR_9];
  unsigned int VAR_15 = VAR_5->pagesz;
  size_t VAR_16;

  if (VAR_9 == 0)
   VAR_15 -= VAR_13;
  else
   VAR_13 = 0;

  VAR_16 = VAR_15;

  if (VAR_7 >= VAR_15) {
   VAR_7 -= VAR_15;
  } else if (VAR_7 > 0) {

   FUNC_9(VAR_14, VAR_7 + VAR_13, VAR_15 - VAR_7);
   VAR_16 = VAR_5->tailsz = VAR_7;
   VAR_7 = 0;
  } else if (VAR_14->index > VAR_11) {
   FUNC_9(VAR_14, 0, VAR_3);
   FUNC_6(VAR_14);
   FUNC_5(VAR_14);
   FUNC_1(VAR_14);
   FUNC_8(VAR_14);
   FUNC_7(VAR_14);
   VAR_5->pages[VAR_9] = ((void*)0);
   VAR_5->nr_pages--;
   continue;
  } else {

   FUNC_6(VAR_14);
   FUNC_8(VAR_14);
   FUNC_7(VAR_14);
   VAR_5->pages[VAR_9] = ((void*)0);
   VAR_5->nr_pages--;
   continue;
  }

  if (VAR_6)
   VAR_8 = FUNC_4(
     VAR_14, VAR_13, VAR_16, VAR_6);




  else
   VAR_8 = FUNC_3(
     VAR_4, VAR_14, VAR_13, VAR_16);
  if (VAR_8 < 0)
   break;

  VAR_5->got_bytes += VAR_8;
 }

 return VAR_5->got_bytes > 0 && VAR_8 != -VAR_0 ?
      VAR_5->got_bytes : VAR_8;
}
