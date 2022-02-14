
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sit_info {unsigned long long min_mtime; int sentry_lock; int max_mtime; } ;
struct f2fs_sb_info {unsigned int segs_per_sec; } ;
struct TYPE_2__ {scalar_t__ mtime; } ;


 unsigned int FUNC_0 (struct f2fs_sb_info*) ;
 struct sit_info* FUNC_1 (struct f2fs_sb_info*) ;
 unsigned long long VAR_0 ;
 unsigned long long FUNC_2 (unsigned long long,unsigned int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct f2fs_sb_info*,int) ;
 TYPE_1__* FUNC_5 (struct f2fs_sb_info*,unsigned int) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct f2fs_sb_info *VAR_1)
{
 struct sit_info *VAR_2 = FUNC_1(VAR_1);
 unsigned int VAR_3;

 FUNC_3(&VAR_2->sentry_lock);

 VAR_2->min_mtime = VAR_0;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_1); VAR_3 += VAR_1->segs_per_sec) {
  unsigned int VAR_4;
  unsigned long long VAR_5 = 0;

  for (VAR_4 = 0; VAR_4 < VAR_1->segs_per_sec; VAR_4++)
   VAR_5 += FUNC_5(VAR_1, VAR_3 + VAR_4)->mtime;

  VAR_5 = FUNC_2(VAR_5, VAR_1->segs_per_sec);

  if (VAR_2->min_mtime > VAR_5)
   VAR_2->min_mtime = VAR_5;
 }
 VAR_2->max_mtime = FUNC_4(VAR_1, 0);
 FUNC_6(&VAR_2->sentry_lock);
}
