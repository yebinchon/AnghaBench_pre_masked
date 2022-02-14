
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ubifs_lprops {int lnum; int flags; int dirty; int free; } ;
struct TYPE_2__ {scalar_t__ empty_lebs; scalar_t__ taken_empty_lebs; } ;
struct ubifs_info {scalar_t__ in_a_category_cnt; scalar_t__ main_lebs; scalar_t__ freeable_cnt; int leb_size; TYPE_1__ lst; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct ubifs_lprops const*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct ubifs_lprops const*) ;
 int FUNC_2 (char*,int,int ,int ,int) ;
 struct ubifs_lprops* FUNC_3 (struct ubifs_info*) ;
 int FUNC_4 (struct ubifs_info*,int) ;
 struct ubifs_lprops* FUNC_5 (struct ubifs_info*,struct ubifs_lprops const*,int ,int ,int,int ) ;
 int FUNC_6 (struct ubifs_info*,int,int ,int ,int ,int,int ) ;
 struct ubifs_lprops* FUNC_7 (struct ubifs_info*) ;
 struct ubifs_lprops* FUNC_8 (struct ubifs_info*) ;
 int FUNC_9 (struct ubifs_info*) ;
 int FUNC_10 (struct ubifs_info*,int) ;
 int FUNC_11 (struct ubifs_info*) ;

int FUNC_12(struct ubifs_info *VAR_4)
{
 const struct ubifs_lprops *VAR_5;
 int VAR_6 = -1, VAR_7, VAR_8;

 FUNC_9(VAR_4);

 VAR_5 = FUNC_7(VAR_4);
 if (!VAR_5) {
  VAR_5 = FUNC_8(VAR_4);
  if (!VAR_5) {







   if (VAR_4->in_a_category_cnt != VAR_4->main_lebs ||
       VAR_4->lst.empty_lebs - VAR_4->lst.taken_empty_lebs > 0) {
    FUNC_4(VAR_4, VAR_4->freeable_cnt == 0);
    VAR_5 = FUNC_3(VAR_4);
    if (FUNC_0(VAR_5)) {
     VAR_7 = FUNC_1(VAR_5);
     goto out;
    }
   }
  }
 }

 if (!VAR_5) {
  VAR_7 = -VAR_0;
  goto out;
 }

 VAR_6 = VAR_5->lnum;

 FUNC_2("found LEB %d, free %d, dirty %d, flags %#x",
   VAR_6, VAR_5->free, VAR_5->dirty, VAR_5->flags);

 VAR_8 = VAR_5->flags | VAR_3 | VAR_1;
 VAR_5 = FUNC_5(VAR_4, VAR_5, VAR_4->leb_size, 0, VAR_8, 0);
 if (FUNC_0(VAR_5)) {
  VAR_7 = FUNC_1(VAR_5);
  goto out;
 }

 FUNC_11(VAR_4);






 VAR_7 = FUNC_10(VAR_4, VAR_6);
 if (VAR_7) {
  FUNC_6(VAR_4, VAR_6, VAR_2, VAR_2, 0,
        VAR_3 | VAR_1, 0);
  return VAR_7;
 }

 return VAR_6;

out:
 FUNC_11(VAR_4);
 return VAR_7;
}
