
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int dummy; } ;
struct TYPE_2__ {int target_unpopulated; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 struct page* FUNC_2 (int) ;
 TYPE_1__ VAR_4 ;
 int FUNC_3 (int,struct page**) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct page*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;

int FUNC_9(int VAR_5, struct page **VAR_6)
{
 int VAR_7 = 0;
 struct page *VAR_8;
 int VAR_9;

 FUNC_4(&VAR_3);

 VAR_4.target_unpopulated += VAR_5;

 while (VAR_7 < VAR_5) {
  VAR_8 = FUNC_2(1);
  if (VAR_8) {
   VAR_6[VAR_7++] = VAR_8;
  } else {
   VAR_9 = FUNC_1(VAR_5 - VAR_7);
   if (VAR_9 < 0)
    goto out_undo;
  }
 }
 FUNC_5(&VAR_3);
 return 0;
 out_undo:
 FUNC_5(&VAR_3);
 FUNC_3(VAR_7, VAR_6);
 return VAR_9;
}
