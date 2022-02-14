
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ubifs_lpt_scan_callback ;
struct ubifs_lprops {int lnum; scalar_t__ free; scalar_t__ dirty; int flags; } ;
struct ubifs_info {int lscan_lnum; int main_first; int leb_cnt; scalar_t__ leb_size; } ;
struct scan_data {int lnum; } ;


 struct ubifs_lprops const* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct ubifs_lprops const*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (struct ubifs_info*,int) ;
 struct ubifs_lprops* FUNC_3 (struct ubifs_info*,int) ;
 int FUNC_4 (struct ubifs_info*,int,int,int ,struct scan_data*) ;

__attribute__((used)) static const struct ubifs_lprops *FUNC_5(struct ubifs_info *VAR_3)
{
 const struct ubifs_lprops *VAR_4;
 struct scan_data VAR_5;
 int VAR_6;

 VAR_5.lnum = -1;
 VAR_6 = FUNC_4(VAR_3, -1, VAR_3->lscan_lnum,
        (ubifs_lpt_scan_callback)VAR_2,
        &VAR_5);
 if (VAR_6)
  return FUNC_0(VAR_6);
 FUNC_2(VAR_3, VAR_5.lnum >= VAR_3->main_first && VAR_5.lnum < VAR_3->leb_cnt);
 VAR_3->lscan_lnum = VAR_5.lnum;
 VAR_4 = FUNC_3(VAR_3, VAR_5.lnum);
 if (FUNC_1(VAR_4))
  return VAR_4;
 FUNC_2(VAR_3, VAR_4->lnum == VAR_5.lnum);
 FUNC_2(VAR_3, VAR_4->free + VAR_4->dirty == VAR_3->leb_size);
 FUNC_2(VAR_3, !(VAR_4->flags & VAR_1));
 FUNC_2(VAR_3, !(VAR_4->flags & VAR_0));
 return VAR_4;
}
