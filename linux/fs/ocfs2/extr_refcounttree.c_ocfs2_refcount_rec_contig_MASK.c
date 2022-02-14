
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int rl_used; } ;
struct ocfs2_refcount_block {TYPE_1__ rf_records; } ;
typedef enum ocfs2_ref_rec_contig { ____Placeholder_ocfs2_ref_rec_contig } ocfs2_ref_rec_contig ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct ocfs2_refcount_block*,int) ;

__attribute__((used)) static enum ocfs2_ref_rec_contig
 FUNC_2(struct ocfs2_refcount_block *VAR_4,
      int VAR_5)
{
 enum ocfs2_ref_rec_contig VAR_6 = VAR_2;

 if (VAR_5 < FUNC_0(VAR_4->rf_records.rl_used) - 1)
  VAR_6 = FUNC_1(VAR_4, VAR_5);

 if (VAR_5 > 0) {
  enum ocfs2_ref_rec_contig VAR_7;

  VAR_7 = FUNC_1(VAR_4, VAR_5 - 1);

  if (VAR_7 == VAR_3) {
   if (VAR_6 == VAR_3)
    VAR_6 = VAR_1;
   else
    VAR_6 = VAR_0;
  }
 }

 return VAR_6;
}
