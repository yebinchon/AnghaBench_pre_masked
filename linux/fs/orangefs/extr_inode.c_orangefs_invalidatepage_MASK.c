
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct orangefs_write_range {scalar_t__ pos; size_t len; void* gid; void* uid; } ;


 int FUNC_0 (struct page*) ;
 unsigned int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct page*) ;
 void* FUNC_3 () ;
 void* FUNC_4 () ;
 int FUNC_5 (struct orangefs_write_range*) ;
 int FUNC_6 (struct page*) ;
 scalar_t__ FUNC_7 (struct page*) ;
 scalar_t__ FUNC_8 (struct page*) ;
 int FUNC_9 (char*,scalar_t__,unsigned int) ;
 int FUNC_10 (struct page*) ;
 int FUNC_11 (struct page*,int ) ;

__attribute__((used)) static void FUNC_12(struct page *VAR_1,
     unsigned int VAR_2,
     unsigned int VAR_3)
{
 struct orangefs_write_range *VAR_4;
 VAR_4 = (struct orangefs_write_range *)FUNC_8(VAR_1);

 if (VAR_2 == 0 && VAR_3 == VAR_0) {
  FUNC_5((struct orangefs_write_range *)FUNC_8(VAR_1));
  FUNC_11(VAR_1, 0);
  FUNC_0(VAR_1);
  FUNC_10(VAR_1);
  return;

 } else if (FUNC_7(VAR_1) + VAR_2 <= VAR_4->pos &&
     VAR_4->pos + VAR_4->len <= FUNC_7(VAR_1) + VAR_2 + VAR_3) {
  FUNC_5((struct orangefs_write_range *)FUNC_8(VAR_1));
  FUNC_11(VAR_1, 0);
  FUNC_0(VAR_1);
  FUNC_10(VAR_1);

  FUNC_2(VAR_1);
  return;

 } else if (VAR_4->pos < FUNC_7(VAR_1) + VAR_2 &&
     VAR_4->pos + VAR_4->len <= FUNC_7(VAR_1) + VAR_2 + VAR_3 &&
      FUNC_7(VAR_1) + VAR_2 < VAR_4->pos + VAR_4->len) {
  size_t VAR_5;
  VAR_5 = VAR_4->pos + VAR_4->len - (FUNC_7(VAR_1) + VAR_2);
  FUNC_1(VAR_5 > VAR_4->len);
  VAR_4->len -= VAR_5;
  VAR_4->uid = FUNC_4();
  VAR_4->gid = FUNC_3();

 } else if (FUNC_7(VAR_1) + VAR_2 <= VAR_4->pos &&
     FUNC_7(VAR_1) + VAR_2 + VAR_3 < VAR_4->pos + VAR_4->len &&
     VAR_4->pos < FUNC_7(VAR_1) + VAR_2 + VAR_3) {
  size_t VAR_6;
  VAR_6 = FUNC_7(VAR_1) + VAR_2 + VAR_3 - VAR_4->pos;
  FUNC_1(VAR_6 > VAR_4->len);
  VAR_4->pos += VAR_6;
  VAR_4->len -= VAR_6;
  VAR_4->uid = FUNC_4();
  VAR_4->gid = FUNC_3();

 } else if (VAR_4->pos < FUNC_7(VAR_1) + VAR_2 &&
     FUNC_7(VAR_1) + VAR_2 + VAR_3 < VAR_4->pos + VAR_4->len) {

  FUNC_1(1);





  return;

 } else {

  if (!((FUNC_7(VAR_1) + VAR_2 + VAR_3 <= VAR_4->pos) ^
      (VAR_4->pos + VAR_4->len <= FUNC_7(VAR_1) + VAR_2))) {
   FUNC_1(1);
   FUNC_9("invalidate range offset %llu length %u\n",
       FUNC_7(VAR_1) + VAR_2, VAR_3);
   FUNC_9("write range offset %llu length %zu\n",
       VAR_4->pos, VAR_4->len);
  }
  return;
 }






 FUNC_6(VAR_1);
}
