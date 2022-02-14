
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int idx_lebs; } ;
struct ubifs_info {int* gap_lebs; int ileb_cnt; int bi; TYPE_1__ lst; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int,...) ;
 int FUNC_1 (struct ubifs_info*) ;
 int FUNC_2 (struct ubifs_info*,int) ;
 int FUNC_3 (int*) ;
 int* FUNC_4 (int,int,int ) ;
 int FUNC_5 (struct ubifs_info*,int*) ;
 int FUNC_6 (struct ubifs_info*,int) ;
 int FUNC_7 (struct ubifs_info*,int *) ;
 int FUNC_8 (struct ubifs_info*) ;
 int FUNC_9 (struct ubifs_info*,char*) ;

__attribute__((used)) static int FUNC_10(struct ubifs_info *VAR_3, int VAR_4)
{
 int VAR_5, VAR_6, VAR_7, *VAR_8;

 FUNC_0("%d znodes to write", VAR_4);

 VAR_3->gap_lebs = FUNC_4(VAR_3->lst.idx_lebs + 1, sizeof(int),
        VAR_2);
 if (!VAR_3->gap_lebs)
  return -VAR_0;

 VAR_8 = VAR_3->gap_lebs;
 do {
  FUNC_6(VAR_3, VAR_8 < VAR_3->gap_lebs + VAR_3->lst.idx_lebs);
  VAR_7 = FUNC_5(VAR_3, VAR_8);
  if (VAR_7 < 0) {
   VAR_5 = VAR_7;
   if (VAR_5 != -VAR_1) {
    FUNC_3(VAR_3->gap_lebs);
    VAR_3->gap_lebs = ((void*)0);
    return VAR_5;
   }
   if (!FUNC_1(VAR_3)) {




    FUNC_9(VAR_3, "out of space");
    FUNC_7(VAR_3, &VAR_3->bi);
    FUNC_8(VAR_3);
   }

   break;
  }
  VAR_8++;
  VAR_4 -= VAR_7;
  VAR_6 = FUNC_2(VAR_3, VAR_4);
  FUNC_0("%d znodes remaining, need %d LEBs, have %d", VAR_4,
         VAR_6, VAR_3->ileb_cnt);
 } while (VAR_6 > VAR_3->ileb_cnt);

 *VAR_8 = -1;
 return 0;
}
