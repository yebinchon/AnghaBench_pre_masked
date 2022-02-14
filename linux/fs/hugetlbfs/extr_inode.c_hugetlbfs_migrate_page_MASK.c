
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct address_space {int dummy; } ;
typedef enum migrate_mode { ____Placeholder_migrate_mode } migrate_mode ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct address_space*,struct page*,struct page*) ;
 int FUNC_1 (struct page*,struct page*) ;
 int FUNC_2 (struct page*,struct page*) ;
 scalar_t__ FUNC_3 (struct page*) ;
 int FUNC_4 (struct page*,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct address_space *VAR_2,
    struct page *VAR_3, struct page *VAR_4,
    enum migrate_mode VAR_5)
{
 int VAR_6;

 VAR_6 = FUNC_0(VAR_2, VAR_3, VAR_4);
 if (VAR_6 != VAR_0)
  return VAR_6;







 if (FUNC_3(VAR_4)) {
  FUNC_4(VAR_3, FUNC_3(VAR_4));
  FUNC_4(VAR_4, 0);
 }

 if (VAR_5 != VAR_1)
  FUNC_1(VAR_3, VAR_4);
 else
  FUNC_2(VAR_3, VAR_4);

 return VAR_0;
}
