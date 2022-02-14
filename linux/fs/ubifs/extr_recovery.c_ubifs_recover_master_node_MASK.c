
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sqnum; } ;
struct ubifs_mst_node {TYPE_1__ ch; int flags; } ;
struct ubifs_info {int mst_node_alsz; int leb_size; struct ubifs_mst_node* mst_node; scalar_t__ max_sqnum; struct ubifs_mst_node* rcvrd_mst_node; scalar_t__ ro_mount; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct ubifs_info*,scalar_t__,void**,struct ubifs_mst_node**,void**) ;
 struct ubifs_mst_node* FUNC_3 (int const,int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (struct ubifs_mst_node*,struct ubifs_mst_node*,int ) ;
 scalar_t__ FUNC_7 (struct ubifs_info*,struct ubifs_mst_node*,struct ubifs_mst_node*) ;
 int FUNC_8 (struct ubifs_info*,struct ubifs_mst_node*) ;
 int FUNC_9 (struct ubifs_info*,char*) ;
 int FUNC_10 (struct ubifs_info*,char*,scalar_t__) ;
 int FUNC_11 (void*) ;
 int FUNC_12 (struct ubifs_info*,struct ubifs_mst_node*) ;

int FUNC_13(struct ubifs_info *VAR_7)
{
 void *VAR_8 = ((void*)0), *VAR_9 = ((void*)0), *VAR_10 = ((void*)0), *VAR_11 = ((void*)0);
 struct ubifs_mst_node *VAR_12 = ((void*)0), *VAR_13 = ((void*)0), *VAR_14;
 const int VAR_15 = VAR_7->mst_node_alsz;
 int VAR_16, VAR_17, VAR_18;

 FUNC_1("recovery");

 VAR_16 = FUNC_2(VAR_7, VAR_4, &VAR_8, &VAR_12, &VAR_10);
 if (VAR_16)
  goto out_free;

 VAR_16 = FUNC_2(VAR_7, VAR_4 + 1, &VAR_9, &VAR_13, &VAR_11);
 if (VAR_16)
  goto out_free;

 if (VAR_12) {
  VAR_17 = (void *)VAR_12 - VAR_8;
  if ((FUNC_4(VAR_12->flags) & VAR_6) &&
      (VAR_17 == 0 && !VAR_10)) {




   FUNC_1("recovery recovery");
   VAR_14 = VAR_12;
  } else if (VAR_13) {
   VAR_18 = (void *)VAR_13 - VAR_9;
   if (VAR_17 == VAR_18) {

    if (FUNC_7(VAR_7, VAR_12, VAR_13))
     goto out_err;
    VAR_14 = VAR_12;
   } else if (VAR_18 + VAR_15 == VAR_17) {

    if (VAR_10)
     goto out_err;
    VAR_14 = VAR_12;
   } else if (VAR_17 == 0 &&
       VAR_7->leb_size - VAR_18 - VAR_15 < VAR_15) {

    if (VAR_10)
     goto out_err;
    VAR_14 = VAR_12;
   } else
    goto out_err;
  } else {





   if (VAR_17 != 0 || VAR_10)
    goto out_err;
   VAR_14 = VAR_12;
  }
 } else {
  if (!VAR_13)
   goto out_err;




  VAR_18 = (void *)VAR_13 - VAR_9;
  if (VAR_18 + VAR_15 + VAR_15 <= VAR_7->leb_size)
   goto out_err;
  VAR_14 = VAR_13;
 }

 FUNC_10(VAR_7, "recovered master node from LEB %d",
    (VAR_14 == VAR_12 ? VAR_4 : VAR_4 + 1));

 FUNC_6(VAR_7->mst_node, VAR_14, VAR_5);

 if (VAR_7->ro_mount) {

  VAR_7->rcvrd_mst_node = FUNC_3(VAR_15, VAR_2);
  if (!VAR_7->rcvrd_mst_node) {
   VAR_16 = -VAR_1;
   goto out_free;
  }
  FUNC_6(VAR_7->rcvrd_mst_node, VAR_7->mst_node, VAR_5);
  VAR_7->mst_node->flags |= FUNC_0(VAR_3);
 } else {

  VAR_7->max_sqnum = FUNC_5(VAR_14->ch.sqnum) - 1;
  VAR_16 = FUNC_12(VAR_7, VAR_7->mst_node);
  if (VAR_16)
   goto out_free;
 }

 FUNC_11(VAR_9);
 FUNC_11(VAR_8);

 return 0;

out_err:
 VAR_16 = -VAR_0;
out_free:
 FUNC_9(VAR_7, "failed to recover master node");
 if (VAR_12) {
  FUNC_9(VAR_7, "dumping first master node");
  FUNC_8(VAR_7, VAR_12);
 }
 if (VAR_13) {
  FUNC_9(VAR_7, "dumping second master node");
  FUNC_8(VAR_7, VAR_13);
 }
 FUNC_11(VAR_9);
 FUNC_11(VAR_8);
 return VAR_16;
}
