
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int xfs_attr_leaf_entry_t ;
struct xfs_da_args {scalar_t__ index; int trans; int geo; } ;
struct xfs_buf {struct xfs_attr_leafblock* b_addr; } ;
struct xfs_attr_leafblock {int hdr; } ;
struct xfs_attr3_icleaf_hdr {int count; int firstused; TYPE_1__* freemap; int holes; } ;
struct TYPE_2__ {int size; int base; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct xfs_attr_leafblock*,int *,int) ;
 int FUNC_2 (struct xfs_da_args*) ;
 int FUNC_3 (struct xfs_buf*,struct xfs_attr3_icleaf_hdr*,struct xfs_da_args*,int) ;
 int FUNC_4 (struct xfs_da_args*,struct xfs_attr3_icleaf_hdr*,struct xfs_buf*) ;
 int FUNC_5 (int ,struct xfs_attr3_icleaf_hdr*,struct xfs_attr_leafblock*) ;
 int FUNC_6 (struct xfs_attr_leafblock*) ;
 int FUNC_7 (int ,struct xfs_attr_leafblock*,struct xfs_attr3_icleaf_hdr*) ;
 int FUNC_8 (struct xfs_da_args*,int *) ;
 int FUNC_9 (int ,struct xfs_buf*,int ) ;

int
FUNC_10(
 struct xfs_buf *VAR_2,
 struct xfs_da_args *VAR_3)
{
 struct xfs_attr_leafblock *VAR_4;
 struct xfs_attr3_icleaf_hdr VAR_5;
 int VAR_6;
 int VAR_7;
 int VAR_8;
 int VAR_9;
 int VAR_10;

 FUNC_2(VAR_3);

 VAR_4 = VAR_2->b_addr;
 FUNC_5(VAR_3->geo, &VAR_5, VAR_4);
 FUNC_0(VAR_3->index >= 0 && VAR_3->index <= VAR_5.count);
 VAR_7 = FUNC_8(VAR_3, ((void*)0));





 VAR_6 = (VAR_5.count + 1) * sizeof(xfs_attr_leaf_entry_t)
     + FUNC_6(VAR_4);
 for (VAR_8 = 0, VAR_10 = VAR_1 - 1; VAR_10 >= 0; VAR_10--) {
  if (VAR_6 > VAR_5.firstused) {
   VAR_8 += VAR_5.freemap[VAR_10].size;
   continue;
  }
  if (!VAR_5.freemap[VAR_10].size)
   continue;
  VAR_9 = VAR_7;
  if (VAR_5.freemap[VAR_10].base < VAR_5.firstused)
   VAR_9 += sizeof(xfs_attr_leaf_entry_t);
  if (VAR_5.freemap[VAR_10].size >= VAR_9) {
   VAR_9 = FUNC_3(VAR_2, &VAR_5, VAR_3, VAR_10);
   goto out_log_hdr;
  }
  VAR_8 += VAR_5.freemap[VAR_10].size;
 }






 if (!VAR_5.holes && VAR_8 < VAR_7)
  return -VAR_0;





 FUNC_4(VAR_3, &VAR_5, VAR_2);





 if (VAR_5.freemap[0].size < (VAR_7 + sizeof(xfs_attr_leaf_entry_t))) {
  VAR_9 = -VAR_0;
  goto out_log_hdr;
 }

 VAR_9 = FUNC_3(VAR_2, &VAR_5, VAR_3, 0);

out_log_hdr:
 FUNC_7(VAR_3->geo, VAR_4, &VAR_5);
 FUNC_9(VAR_3->trans, VAR_2,
  FUNC_1(VAR_4, &VAR_4->hdr,
    FUNC_6(VAR_4)));
 return VAR_9;
}
