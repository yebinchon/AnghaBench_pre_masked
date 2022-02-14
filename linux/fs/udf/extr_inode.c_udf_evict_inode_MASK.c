
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * i_data; } ;
struct udf_inode_info {scalar_t__ i_alloc_type; scalar_t__ i_lenExtents; TYPE_1__ i_ext; } ;
struct inode {scalar_t__ i_size; int i_mode; int i_ino; int i_sb; int i_data; int i_nlink; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct inode*) ;
 struct udf_inode_info* FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct inode*) ;
 int FUNC_8 (struct inode*) ;
 int FUNC_9 (struct inode*,int ) ;
 int FUNC_10 (struct inode*,int ) ;
 int FUNC_11 (int ,char*,int ,int ,unsigned long long,unsigned long long) ;

void FUNC_12(struct inode *VAR_1)
{
 struct udf_inode_info *VAR_2 = FUNC_1(VAR_1);
 int VAR_3 = 0;

 if (!VAR_1->i_nlink && !FUNC_4(VAR_1)) {
  VAR_3 = 1;
  FUNC_9(VAR_1, 0);
  FUNC_10(VAR_1, FUNC_0(VAR_1));
 }
 FUNC_6(&VAR_1->i_data);
 FUNC_3(VAR_1);
 FUNC_2(VAR_1);
 if (VAR_2->i_alloc_type != VAR_0 &&
     VAR_1->i_size != VAR_2->i_lenExtents) {
  FUNC_11(VAR_1->i_sb, "Inode %lu (mode %o) has inode size %llu different from extent length %llu. Filesystem need not be standards compliant.\n",
    VAR_1->i_ino, VAR_1->i_mode,
    (unsigned long long)VAR_1->i_size,
    (unsigned long long)VAR_2->i_lenExtents);
 }
 FUNC_5(VAR_2->i_ext.i_data);
 VAR_2->i_ext.i_data = ((void*)0);
 FUNC_7(VAR_1);
 if (VAR_3) {
  FUNC_8(VAR_1);
 }
}
