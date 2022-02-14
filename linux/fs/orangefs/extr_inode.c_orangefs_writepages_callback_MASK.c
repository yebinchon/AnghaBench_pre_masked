
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct writeback_control {int dummy; } ;
struct page {int mapping; } ;
struct orangefs_writepages {scalar_t__ npages; scalar_t__ off; scalar_t__ len; scalar_t__ maxpages; struct page** pages; int gid; int uid; } ;
struct orangefs_write_range {scalar_t__ pos; scalar_t__ len; int gid; int uid; } ;


 int FUNC_0 () ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (struct page*,struct writeback_control*) ;
 int FUNC_6 (struct orangefs_writepages*,struct writeback_control*) ;
 scalar_t__ FUNC_7 (struct page*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (struct page*) ;

__attribute__((used)) static int FUNC_11(struct page *VAR_0,
    struct writeback_control *VAR_1, void *VAR_2)
{
 struct orangefs_writepages *VAR_3 = VAR_2;
 struct orangefs_write_range *VAR_4;
 int VAR_5;

 if (!FUNC_1(VAR_0)) {
  FUNC_10(VAR_0);

  FUNC_8("writepages_callback not private!\n");
  FUNC_0();
  return 0;
 }
 VAR_4 = (struct orangefs_write_range *)FUNC_7(VAR_0);

 VAR_5 = -1;
 if (VAR_3->npages == 0) {
  VAR_3->off = VAR_4->pos;
  VAR_3->len = VAR_4->len;
  VAR_3->uid = VAR_4->uid;
  VAR_3->gid = VAR_4->gid;
  VAR_3->pages[VAR_3->npages++] = VAR_0;
  VAR_5 = 0;
  goto done;
 }
 if (!FUNC_9(VAR_3->uid, VAR_4->uid) || !FUNC_3(VAR_3->gid, VAR_4->gid)) {
  FUNC_6(VAR_3, VAR_1);
  VAR_3->npages = 0;
  VAR_5 = -1;
  goto done;
 }
 if (VAR_3->off + VAR_3->len == VAR_4->pos) {
  VAR_3->len += VAR_4->len;
  VAR_3->pages[VAR_3->npages++] = VAR_0;
  VAR_5 = 0;
  goto done;
 }
done:
 if (VAR_5 == -1) {
  if (VAR_3->npages) {
   FUNC_6(VAR_3, VAR_1);
   VAR_3->npages = 0;
  }
  VAR_5 = FUNC_5(VAR_0, VAR_1);
  FUNC_4(VAR_0->mapping, VAR_5);
  FUNC_10(VAR_0);
  FUNC_2(VAR_0);
 } else {
  if (VAR_3->npages == VAR_3->maxpages) {
   FUNC_6(VAR_3, VAR_1);
   VAR_3->npages = 0;
  }
 }
 return VAR_5;
}
