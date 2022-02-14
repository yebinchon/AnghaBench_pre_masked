
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct victim_selection {scalar_t__ (* get_victim ) (struct f2fs_sb_info*,unsigned int*,int ,int,int ) ;} ;
struct f2fs_sb_info {int dummy; } ;
struct curseg_info {unsigned int next_segno; } ;
struct TYPE_2__ {struct victim_selection* v_ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct curseg_info* FUNC_0 (struct f2fs_sb_info*,int) ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_1__* FUNC_1 (struct f2fs_sb_info*) ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_7 ;
 int VAR_8 ;
 unsigned int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 unsigned int FUNC_3 (struct f2fs_sb_info*) ;
 int FUNC_4 (struct f2fs_sb_info*,int ) ;
 scalar_t__ FUNC_5 (struct f2fs_sb_info*,unsigned int*,int ,int,int ) ;
 scalar_t__ FUNC_6 (struct f2fs_sb_info*,unsigned int*,int ,int,int ) ;
 scalar_t__ FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct f2fs_sb_info *VAR_12, int VAR_13)
{
 struct curseg_info *VAR_14 = FUNC_0(VAR_12, VAR_13);
 const struct victim_selection *VAR_15 = FUNC_1(VAR_12)->v_ops;
 unsigned VAR_16 = VAR_9;
 int VAR_17, VAR_18;
 bool VAR_19 = 0;


 if (VAR_15->get_victim(VAR_12, &VAR_16, VAR_0, VAR_13, VAR_11)) {
  VAR_14->next_segno = VAR_16;
  return 1;
 }


 if (FUNC_2(VAR_13)) {
  if (VAR_13 >= VAR_6) {
   VAR_19 = 1;
   VAR_17 = VAR_2;
  } else {
   VAR_17 = VAR_4;
  }
  VAR_18 = VAR_8;
 } else {
  if (VAR_13 >= VAR_5) {
   VAR_19 = 1;
   VAR_17 = VAR_1;
  } else {
   VAR_17 = VAR_3;
  }
  VAR_18 = VAR_7;
 }

 for (; VAR_18-- > 0; VAR_19 ? VAR_17-- : VAR_17++) {
  if (VAR_17 == VAR_13)
   continue;
  if (VAR_15->get_victim(VAR_12, &VAR_16, VAR_0, VAR_17, VAR_11)) {
   VAR_14->next_segno = VAR_16;
   return 1;
  }
 }


 if (FUNC_7(FUNC_4(VAR_12, VAR_10))) {
  VAR_16 = FUNC_3(VAR_12);
  if (VAR_16 != VAR_9) {
   VAR_14->next_segno = VAR_16;
   return 1;
  }
 }
 return 0;
}
