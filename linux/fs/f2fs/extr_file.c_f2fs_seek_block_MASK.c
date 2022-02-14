
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inode {int i_mapping; TYPE_2__* i_sb; } ;
struct file {TYPE_1__* f_mapping; } ;
struct dnode_of_data {scalar_t__ ofs_in_node; int node_page; int inode; } ;
typedef scalar_t__ pgoff_t ;
typedef int loff_t ;
typedef int block_t ;
struct TYPE_4__ {int s_maxbytes; } ;
struct TYPE_3__ {struct inode* host; } ;


 scalar_t__ FUNC_0 (int ,struct inode*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct inode*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (int ,int ,scalar_t__,scalar_t__,int) ;
 scalar_t__ FUNC_3 (int ,scalar_t__,int) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,scalar_t__) ;
 int FUNC_6 (struct dnode_of_data*,scalar_t__,int ) ;
 scalar_t__ FUNC_7 (struct dnode_of_data*,scalar_t__) ;
 scalar_t__ FUNC_8 (struct inode*) ;
 scalar_t__ FUNC_9 (struct inode*) ;
 int FUNC_10 (int ,int ,int ) ;
 int FUNC_11 (struct dnode_of_data*) ;
 int FUNC_12 (struct inode*) ;
 int FUNC_13 (struct inode*) ;
 int FUNC_14 (struct inode*) ;
 int FUNC_15 (struct dnode_of_data*,struct inode*,int *,int *,int ) ;
 int FUNC_16 (struct file*,int,int) ;

__attribute__((used)) static loff_t FUNC_17(struct file *VAR_7, loff_t VAR_8, int VAR_9)
{
 struct inode *VAR_10 = VAR_7->f_mapping->host;
 loff_t VAR_11 = VAR_10->i_sb->s_maxbytes;
 struct dnode_of_data VAR_12;
 pgoff_t VAR_13, VAR_14, VAR_15;
 loff_t VAR_16 = VAR_8;
 loff_t VAR_17;
 int VAR_18 = 0;

 FUNC_13(VAR_10);

 VAR_17 = FUNC_12(VAR_10);
 if (VAR_8 >= VAR_17)
  goto fail;


 if (FUNC_8(VAR_10) || FUNC_9(VAR_10)) {
  if (VAR_9 == VAR_6)
   VAR_16 = VAR_17;
  goto found;
 }

 VAR_13 = (pgoff_t)(VAR_8 >> VAR_4);

 VAR_15 = FUNC_3(VAR_10->i_mapping, VAR_13, VAR_9);

 for (; VAR_16 < VAR_17; VAR_16 = (loff_t)VAR_13 << VAR_4) {
  FUNC_15(&VAR_12, VAR_10, ((void*)0), ((void*)0), 0);
  VAR_18 = FUNC_6(&VAR_12, VAR_13, VAR_3);
  if (VAR_18 && VAR_18 != -VAR_1) {
   goto fail;
  } else if (VAR_18 == -VAR_1) {

   if (VAR_9 == VAR_5) {
    VAR_13 = FUNC_7(&VAR_12, VAR_13);
    continue;
   } else {
    goto found;
   }
  }

  VAR_14 = FUNC_0(VAR_12.node_page, VAR_10);


  for (; VAR_12.ofs_in_node < VAR_14;
    VAR_12.ofs_in_node++, VAR_13++,
    VAR_16 = (loff_t)VAR_13 << VAR_4) {
   block_t VAR_19;

   VAR_19 = FUNC_5(VAR_12.inode,
     VAR_12.node_page, VAR_12.ofs_in_node);

   if (FUNC_4(VAR_19) &&
    !FUNC_10(FUNC_1(VAR_10),
     VAR_19, VAR_0)) {
    FUNC_11(&VAR_12);
    goto fail;
   }

   if (FUNC_2(FUNC_1(VAR_10), VAR_19, VAR_15,
       VAR_13, VAR_9)) {
    FUNC_11(&VAR_12);
    goto found;
   }
  }
  FUNC_11(&VAR_12);
 }

 if (VAR_9 == VAR_5)
  goto fail;
found:
 if (VAR_9 == VAR_6 && VAR_16 > VAR_17)
  VAR_16 = VAR_17;
 FUNC_14(VAR_10);
 return FUNC_16(VAR_7, VAR_16, VAR_11);
fail:
 FUNC_14(VAR_10);
 return -VAR_2;
}
