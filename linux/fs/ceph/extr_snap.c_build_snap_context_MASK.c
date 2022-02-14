
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct list_head {int dummy; } ;
struct ceph_snap_realm {int num_prior_parent_snaps; int num_snaps; scalar_t__ seq; scalar_t__ parent_since; int ino; struct ceph_snap_context* cached_context; int dirty_item; int prior_parent_snaps; int snaps; struct ceph_snap_realm* parent; } ;
struct ceph_snap_context {int num_snaps; scalar_t__ seq; scalar_t__* snaps; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ceph_snap_context* FUNC_0 (int,int ) ;
 int FUNC_1 (struct ceph_snap_context*) ;
 int VAR_3 ;
 int FUNC_2 (char*,int ,struct ceph_snap_realm*,struct ceph_snap_context*,scalar_t__,unsigned int) ;
 int FUNC_3 (int *,struct list_head*) ;
 int FUNC_4 (scalar_t__*,int ,int) ;
 int FUNC_5 (char*,int ,struct ceph_snap_realm*,int) ;
 int FUNC_6 (scalar_t__*,int,int,int ,int *) ;

__attribute__((used)) static int FUNC_7(struct ceph_snap_realm *VAR_4,
         struct list_head* VAR_5)
{
 struct ceph_snap_realm *VAR_6 = VAR_4->parent;
 struct ceph_snap_context *VAR_7;
 int VAR_8 = 0;
 u32 VAR_9 = VAR_4->num_prior_parent_snaps + VAR_4->num_snaps;






 if (VAR_6) {
  if (!VAR_6->cached_context) {
   VAR_8 = FUNC_7(VAR_6, VAR_5);
   if (VAR_8)
    goto fail;
  }
  VAR_9 += VAR_6->cached_context->num_snaps;
 }





 if (VAR_4->cached_context &&
     VAR_4->cached_context->seq == VAR_4->seq &&
     (!VAR_6 ||
      VAR_4->cached_context->seq >= VAR_6->cached_context->seq)) {
  FUNC_2("build_snap_context %llx %p: %p seq %lld (%u snaps)"
       " (unchanged)\n",
       VAR_4->ino, VAR_4, VAR_4->cached_context,
       VAR_4->cached_context->seq,
       (unsigned int)VAR_4->cached_context->num_snaps);
  return 0;
 }


 VAR_8 = -VAR_0;
 if (VAR_9 > (VAR_2 - sizeof(*VAR_7)) / sizeof(u64))
  goto fail;
 VAR_7 = FUNC_0(VAR_9, VAR_1);
 if (!VAR_7)
  goto fail;


 VAR_9 = 0;
 VAR_7->seq = VAR_4->seq;
 if (VAR_6) {
  u32 VAR_10;



  for (VAR_10 = 0; VAR_10 < VAR_6->cached_context->num_snaps; VAR_10++)
   if (VAR_6->cached_context->snaps[VAR_10] >=
       VAR_4->parent_since)
    VAR_7->snaps[VAR_9++] =
     VAR_6->cached_context->snaps[VAR_10];
  if (VAR_6->cached_context->seq > VAR_7->seq)
   VAR_7->seq = VAR_6->cached_context->seq;
 }
 FUNC_4(VAR_7->snaps + VAR_9, VAR_4->snaps,
        sizeof(u64)*VAR_4->num_snaps);
 VAR_9 += VAR_4->num_snaps;
 FUNC_4(VAR_7->snaps + VAR_9, VAR_4->prior_parent_snaps,
        sizeof(u64)*VAR_4->num_prior_parent_snaps);
 VAR_9 += VAR_4->num_prior_parent_snaps;

 FUNC_6(VAR_7->snaps, VAR_9, sizeof(u64), VAR_3, ((void*)0));
 VAR_7->num_snaps = VAR_9;
 FUNC_2("build_snap_context %llx %p: %p seq %lld (%u snaps)\n",
      VAR_4->ino, VAR_4, VAR_7, VAR_7->seq,
      (unsigned int) VAR_7->num_snaps);

 FUNC_1(VAR_4->cached_context);
 VAR_4->cached_context = VAR_7;

 FUNC_3(&VAR_4->dirty_item, VAR_5);
 return 0;

fail:




 if (VAR_4->cached_context) {
  FUNC_1(VAR_4->cached_context);
  VAR_4->cached_context = ((void*)0);
 }
 FUNC_5("build_snap_context %llx %p fail %d\n", VAR_4->ino,
        VAR_4, VAR_8);
 return VAR_8;
}
