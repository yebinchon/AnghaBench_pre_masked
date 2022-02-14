
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int seeks; int scan_objects; int count_objects; } ;
struct mb_cache {int c_bucket_bits; unsigned long c_max_entries; int c_shrink_work; struct mb_cache* c_hash; TYPE_1__ c_shrink; int c_list_lock; int c_list; } ;
struct hlist_bl_head {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mb_cache*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (struct mb_cache*) ;
 struct mb_cache* FUNC_4 (unsigned long,int,int ) ;
 struct mb_cache* FUNC_5 (int,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int *) ;

struct mb_cache *FUNC_8(int VAR_5)
{
 struct mb_cache *VAR_6;
 unsigned long VAR_7 = 1UL << VAR_5;
 unsigned long VAR_8;

 VAR_6 = FUNC_5(sizeof(struct mb_cache), VAR_1);
 if (!VAR_6)
  goto err_out;
 VAR_6->c_bucket_bits = VAR_5;
 VAR_6->c_max_entries = VAR_7 << 4;
 FUNC_1(&VAR_6->c_list);
 FUNC_7(&VAR_6->c_list_lock);
 VAR_6->c_hash = FUNC_4(VAR_7,
          sizeof(struct hlist_bl_head),
          VAR_1);
 if (!VAR_6->c_hash) {
  FUNC_3(VAR_6);
  goto err_out;
 }
 for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++)
  FUNC_0(&VAR_6->c_hash[VAR_8]);

 VAR_6->c_shrink.count_objects = VAR_2;
 VAR_6->c_shrink.scan_objects = VAR_3;
 VAR_6->c_shrink.seeks = VAR_0;
 if (FUNC_6(&VAR_6->c_shrink)) {
  FUNC_3(VAR_6->c_hash);
  FUNC_3(VAR_6);
  goto err_out;
 }

 FUNC_2(&VAR_6->c_shrink_work, VAR_4);

 return VAR_6;

err_out:
 return ((void*)0);
}
