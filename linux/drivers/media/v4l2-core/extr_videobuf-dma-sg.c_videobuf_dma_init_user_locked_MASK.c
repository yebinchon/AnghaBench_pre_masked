
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct videobuf_dmabuf {int direction; unsigned long offset; unsigned long size; unsigned long nr_pages; int * pages; } ;
struct page {int dummy; } ;


 int FUNC_0 () ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int,char*,int,int,...) ;
 int FUNC_2 (unsigned long,unsigned long,unsigned int,int *,int *) ;
 int * FUNC_3 (unsigned long,int,int ) ;

__attribute__((used)) static int FUNC_4(struct videobuf_dmabuf *VAR_10,
   int VAR_11, unsigned long VAR_12, unsigned long VAR_13)
{
 unsigned long VAR_14, VAR_15;
 int VAR_16, VAR_17 = 0;
 unsigned int VAR_18 = VAR_2;

 VAR_10->direction = VAR_11;
 switch (VAR_10->direction) {
 case 129:
  VAR_17 = VAR_8;
  break;
 case 128:
  VAR_17 = VAR_9;
  break;
 default:
  FUNC_0();
 }

 VAR_14 = (VAR_12 & VAR_6) >> VAR_7;
 VAR_15 = ((VAR_12+VAR_13-1) & VAR_6) >> VAR_7;
 VAR_10->offset = VAR_12 & ~VAR_6;
 VAR_10->size = VAR_13;
 VAR_10->nr_pages = VAR_15-VAR_14+1;
 VAR_10->pages = FUNC_3(VAR_10->nr_pages, sizeof(struct page *),
       VAR_5);
 if (((void*)0) == VAR_10->pages)
  return -VAR_1;

 if (VAR_17 == VAR_8)
  VAR_18 |= VAR_4;

 FUNC_1(1, "init user [0x%lx+0x%lx => %d pages]\n",
  VAR_12, VAR_13, VAR_10->nr_pages);

 VAR_16 = FUNC_2(VAR_12 & VAR_6, VAR_10->nr_pages,
        VAR_18 | VAR_3, VAR_10->pages, ((void*)0));

 if (VAR_16 != VAR_10->nr_pages) {
  VAR_10->nr_pages = (VAR_16 >= 0) ? VAR_16 : 0;
  FUNC_1(1, "get_user_pages: err=%d [%d]\n", VAR_16,
   VAR_10->nr_pages);
  return VAR_16 < 0 ? VAR_16 : -VAR_0;
 }
 return 0;
}
