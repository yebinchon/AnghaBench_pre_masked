
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_lprops {int flags; scalar_t__ free; scalar_t__ dirty; int lnum; } ;
struct ubifs_info {scalar_t__ min_idx_node_sz; } ;
struct scan_data {int lnum; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct ubifs_info*,struct ubifs_lprops const*) ;

__attribute__((used)) static int FUNC_1(struct ubifs_info *VAR_5,
      const struct ubifs_lprops *VAR_6, int VAR_7,
      struct scan_data *VAR_8)
{
 int VAR_9 = VAR_3;


 if (VAR_6->flags & VAR_1)
  return VAR_3;

 if (!VAR_7 && FUNC_0(VAR_5, VAR_6))
  VAR_9 |= VAR_2;

 if (!(VAR_6->flags & VAR_0))
  return VAR_9;

 if (VAR_6->free + VAR_6->dirty < VAR_5->min_idx_node_sz)
  return VAR_9;

 VAR_8->lnum = VAR_6->lnum;
 return VAR_2 | VAR_4;
}
