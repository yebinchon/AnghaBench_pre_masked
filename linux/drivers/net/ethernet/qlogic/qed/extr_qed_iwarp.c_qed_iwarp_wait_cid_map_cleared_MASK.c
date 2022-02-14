
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qed_hwfn {int dummy; } ;
struct qed_bmap {int name; int max_count; int bitmap; } ;


 int FUNC_0 (struct qed_hwfn*,char*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(struct qed_hwfn *VAR_3, struct qed_bmap *VAR_4)
{
 int VAR_5 = 0;
 int VAR_6 = 0;
 int VAR_7 = 0;

 VAR_7 = FUNC_1(VAR_4->bitmap, VAR_4->max_count);
 VAR_5 = VAR_7;

 while (VAR_7) {
  FUNC_2(VAR_1);

  VAR_7 = FUNC_1(VAR_4->bitmap, VAR_4->max_count);

  if (VAR_5 == VAR_7) {
   VAR_6++;
  } else {
   VAR_5 = VAR_7;
   VAR_6 = 0;
  }

  if (VAR_6 > VAR_2) {
   FUNC_0(VAR_3,
      "%s bitmap wait timed out (%d cids pending)\n",
      VAR_4->name, VAR_7);
   return -VAR_0;
  }
 }
 return 0;
}
