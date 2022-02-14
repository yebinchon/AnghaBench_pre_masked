
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct dio_submit {int tail; int to; scalar_t__ head; scalar_t__ from; int iter; scalar_t__ blocks_available; } ;
struct dio {scalar_t__ op; scalar_t__ page_errors; struct page** pages; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 struct page* FUNC_0 (int ) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,struct page**,int ,int ,scalar_t__*) ;

__attribute__((used)) static inline int FUNC_4(struct dio *VAR_4, struct dio_submit *VAR_5)
{
 ssize_t VAR_6;

 VAR_6 = FUNC_3(VAR_5->iter, VAR_4->pages, VAR_1, VAR_0,
    &VAR_5->from);

 if (VAR_6 < 0 && VAR_5->blocks_available && (VAR_4->op == VAR_3)) {
  struct page *VAR_7 = FUNC_0(0);





  if (VAR_4->page_errors == 0)
   VAR_4->page_errors = VAR_6;
  FUNC_1(VAR_7);
  VAR_4->pages[0] = VAR_7;
  VAR_5->head = 0;
  VAR_5->tail = 1;
  VAR_5->from = 0;
  VAR_5->to = VAR_2;
  return 0;
 }

 if (VAR_6 >= 0) {
  FUNC_2(VAR_5->iter, VAR_6);
  VAR_6 += VAR_5->from;
  VAR_5->head = 0;
  VAR_5->tail = (VAR_6 + VAR_2 - 1) / VAR_2;
  VAR_5->to = ((VAR_6 - 1) & (VAR_2 - 1)) + 1;
  return 0;
 }
 return VAR_6;
}
