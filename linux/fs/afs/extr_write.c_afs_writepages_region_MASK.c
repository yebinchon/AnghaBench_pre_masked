
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct writeback_control {scalar_t__ nr_to_write; scalar_t__ sync_mode; } ;
struct page {struct address_space* mapping; int index; } ;
struct address_space {int dummy; } ;
typedef scalar_t__ pgoff_t ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (struct page*) ;
 scalar_t__ FUNC_2 (struct page*) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (char*,scalar_t__,scalar_t__) ;
 int FUNC_5 (char*,scalar_t__) ;
 int FUNC_6 (struct address_space*,struct writeback_control*,struct page*,scalar_t__) ;
 int FUNC_7 (struct page*) ;
 int FUNC_8 () ;
 int FUNC_9 (struct address_space*,scalar_t__*,scalar_t__,int ,int,struct page**) ;
 int FUNC_10 (struct page*) ;
 int FUNC_11 (struct page*) ;
 int FUNC_12 (struct page*) ;
 int FUNC_13 (struct page*) ;

__attribute__((used)) static int FUNC_14(struct address_space *VAR_2,
     struct writeback_control *VAR_3,
     pgoff_t VAR_4, pgoff_t VAR_5, pgoff_t *VAR_6)
{
 struct page *VAR_7;
 int VAR_8, VAR_9;

 FUNC_4(",,%lx,%lx,", VAR_4, VAR_5);

 do {
  VAR_9 = FUNC_9(VAR_2, &VAR_4, VAR_5,
     VAR_0, 1, &VAR_7);
  if (!VAR_9)
   break;

  FUNC_3("wback %lx", VAR_7->index);







  VAR_8 = FUNC_10(VAR_7);
  if (VAR_8 < 0) {
   FUNC_11(VAR_7);
   FUNC_5(" = %d", VAR_8);
   return VAR_8;
  }

  if (VAR_7->mapping != VAR_2 || !FUNC_1(VAR_7)) {
   FUNC_12(VAR_7);
   FUNC_11(VAR_7);
   continue;
  }

  if (FUNC_2(VAR_7)) {
   FUNC_12(VAR_7);
   if (VAR_3->sync_mode != VAR_1)
    FUNC_13(VAR_7);
   FUNC_11(VAR_7);
   continue;
  }

  if (!FUNC_7(VAR_7))
   FUNC_0();
  VAR_8 = FUNC_6(VAR_2, VAR_3, VAR_7, VAR_5);
  FUNC_11(VAR_7);
  if (VAR_8 < 0) {
   FUNC_5(" = %d", VAR_8);
   return VAR_8;
  }

  VAR_3->nr_to_write -= VAR_8;

  FUNC_8();
 } while (VAR_4 < VAR_5 && VAR_3->nr_to_write > 0);

 *VAR_6 = VAR_4;
 FUNC_5(" = 0 [%lx]", *VAR_6);
 return 0;
}
