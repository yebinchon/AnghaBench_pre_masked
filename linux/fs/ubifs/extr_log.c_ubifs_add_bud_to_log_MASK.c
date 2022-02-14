
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int node_type; } ;
struct ubifs_ref_node {int lnum; int start; int jhead; void* offs; TYPE_1__ ch; int * log_hash; } ;
struct ubifs_info {scalar_t__ ref_node_alsz; scalar_t__ min_log_bytes; int bud_bytes; int leb_size; int max_bud_bytes; scalar_t__ bg_bud_bytes; scalar_t__ cmt_state; scalar_t__ lhead_offs; scalar_t__ lhead_lnum; scalar_t__ ltail_lnum; int log_mutex; TYPE_2__* jheads; int log_hash; scalar_t__ ro_error; int ro_mount; int ro_media; } ;
struct ubifs_bud {int lnum; int start; int jhead; void* offs; TYPE_1__ ch; int * log_hash; } ;
struct TYPE_4__ {int log_hash; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (char*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (struct ubifs_info*) ;
 int FUNC_3 (struct ubifs_ref_node*) ;
 struct ubifs_ref_node* FUNC_4 (int,int ) ;
 struct ubifs_ref_node* FUNC_5 (scalar_t__,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct ubifs_info*,struct ubifs_ref_node*) ;
 int FUNC_9 (struct ubifs_info*,int) ;
 int FUNC_10 (struct ubifs_info*) ;
 int FUNC_11 (struct ubifs_info*,int) ;
 int FUNC_12 (struct ubifs_info*,scalar_t__) ;
 scalar_t__ FUNC_13 (struct ubifs_info*,scalar_t__) ;
 int FUNC_14 (struct ubifs_info*) ;
 int FUNC_15 (struct ubifs_info*,int ,int ) ;
 int FUNC_16 (struct ubifs_info*,int ,struct ubifs_ref_node*,int ) ;
 int FUNC_17 (struct ubifs_info*,struct ubifs_ref_node*,int ,scalar_t__,scalar_t__) ;

int FUNC_18(struct ubifs_info *VAR_7, int VAR_8, int VAR_9, int VAR_10)
{
 int VAR_11;
 struct ubifs_bud *VAR_12;
 struct ubifs_ref_node *VAR_13;

 VAR_12 = FUNC_4(sizeof(struct ubifs_bud), VAR_4);
 if (!VAR_12)
  return -VAR_2;
 VAR_13 = FUNC_5(VAR_7->ref_node_alsz, VAR_4);
 if (!VAR_13) {
  FUNC_3(VAR_12);
  return -VAR_2;
 }

 FUNC_6(&VAR_7->log_mutex);
 FUNC_9(VAR_7, !VAR_7->ro_media && !VAR_7->ro_mount);
 if (VAR_7->ro_error) {
  VAR_11 = -VAR_3;
  goto out_unlock;
 }


 if (FUNC_2(VAR_7) - VAR_7->ref_node_alsz < VAR_7->min_log_bytes) {
  FUNC_1("not enough log space - %lld, required %d",
   FUNC_2(VAR_7), VAR_7->min_log_bytes);
  FUNC_10(VAR_7);
  VAR_11 = -VAR_1;
  goto out_unlock;
 }
 if (VAR_7->bud_bytes + VAR_7->leb_size - VAR_10 > VAR_7->max_bud_bytes) {
  FUNC_1("bud bytes %lld (%lld max), require commit",
   VAR_7->bud_bytes, VAR_7->max_bud_bytes);
  FUNC_10(VAR_7);
  VAR_11 = -VAR_1;
  goto out_unlock;
 }






 if (VAR_7->bud_bytes >= VAR_7->bg_bud_bytes &&
     VAR_7->cmt_state == VAR_0) {
  FUNC_1("bud bytes %lld (%lld max), initiate BG commit",
   VAR_7->bud_bytes, VAR_7->max_bud_bytes);
  FUNC_14(VAR_7);
 }

 VAR_12->lnum = VAR_9;
 VAR_12->start = VAR_10;
 VAR_12->jhead = VAR_8;
 VAR_12->log_hash = ((void*)0);

 VAR_13->ch.node_type = VAR_5;
 VAR_13->lnum = FUNC_0(VAR_12->lnum);
 VAR_13->offs = FUNC_0(VAR_12->start);
 VAR_13->jhead = FUNC_0(VAR_8);

 if (VAR_7->lhead_offs > VAR_7->leb_size - VAR_7->ref_node_alsz) {
  VAR_7->lhead_lnum = FUNC_13(VAR_7, VAR_7->lhead_lnum);
  FUNC_9(VAR_7, VAR_7->lhead_lnum != VAR_7->ltail_lnum);
  VAR_7->lhead_offs = 0;
 }

 if (VAR_7->lhead_offs == 0) {

  VAR_11 = FUNC_12(VAR_7, VAR_7->lhead_lnum);
  if (VAR_11)
   goto out_unlock;
 }

 if (VAR_12->start == 0) {







  VAR_11 = FUNC_11(VAR_7, VAR_12->lnum);
  if (VAR_11)
   goto out_unlock;
 }

 FUNC_1("write ref LEB %d:%d",
  VAR_7->lhead_lnum, VAR_7->lhead_offs);
 VAR_11 = FUNC_17(VAR_7, VAR_13, VAR_6, VAR_7->lhead_lnum,
          VAR_7->lhead_offs);
 if (VAR_11)
  goto out_unlock;

 VAR_11 = FUNC_16(VAR_7, VAR_7->log_hash, VAR_13, VAR_6);
 if (VAR_11)
  goto out_unlock;

 VAR_11 = FUNC_15(VAR_7, VAR_7->log_hash, VAR_7->jheads[VAR_8].log_hash);
 if (VAR_11)
  goto out_unlock;

 VAR_7->lhead_offs += VAR_7->ref_node_alsz;

 FUNC_8(VAR_7, VAR_12);

 FUNC_7(&VAR_7->log_mutex);
 FUNC_3(VAR_13);
 return 0;

out_unlock:
 FUNC_7(&VAR_7->log_mutex);
 FUNC_3(VAR_13);
 FUNC_3(VAR_12);
 return VAR_11;
}
