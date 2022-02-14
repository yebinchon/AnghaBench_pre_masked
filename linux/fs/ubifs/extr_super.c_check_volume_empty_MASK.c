
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_info {int empty; int leb_cnt; } ;


 int FUNC_0 () ;
 int FUNC_1 (struct ubifs_info*,int) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct ubifs_info *VAR_0)
{
 int VAR_1, VAR_2;

 VAR_0->empty = 1;
 for (VAR_1 = 0; VAR_1 < VAR_0->leb_cnt; VAR_1++) {
  VAR_2 = FUNC_1(VAR_0, VAR_1);
  if (FUNC_2(VAR_2 < 0))
   return VAR_2;
  if (VAR_2 == 1) {
   VAR_0->empty = 0;
   break;
  }

  FUNC_0();
 }

 return 0;
}
