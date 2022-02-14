
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ubifs_info {int dummy; } ;
struct TYPE_2__ {int len; } ;
struct ubifs_data_node {int size; int compr_type; scalar_t__ compr_size; int data; TYPE_1__ ch; } ;
struct inode {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (void*) ;
 void* FUNC_3 (int,int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct ubifs_info const*,int) ;
 int FUNC_7 (struct ubifs_info const*,void*,int,int *,int*,int*) ;
 scalar_t__ FUNC_8 (struct inode const*) ;
 int FUNC_9 (struct ubifs_info const*,int *,int,void*,int*,int) ;
 int FUNC_10 (struct inode const*,struct ubifs_data_node*,int*,unsigned int) ;
 int FUNC_11 (struct inode const*,struct ubifs_data_node*,int,int*,unsigned int) ;

__attribute__((used)) static int FUNC_12(const struct ubifs_info *VAR_6, const struct inode *VAR_7,
         unsigned int VAR_8, struct ubifs_data_node *VAR_9,
         int *VAR_10)
{
 void *VAR_11;
 int VAR_12, VAR_13, VAR_14, VAR_15, VAR_16;

 VAR_15 = FUNC_5(VAR_9->size);
 VAR_11 = FUNC_3(VAR_15, VAR_5, VAR_1);
 if (!VAR_11)
  return -VAR_0;

 VAR_13 = VAR_16 = FUNC_5(VAR_9->ch.len) - VAR_4;
 VAR_14 = FUNC_4(VAR_9->compr_type);

 if (FUNC_8(VAR_7)) {
  VAR_12 = FUNC_10(VAR_7, VAR_9, &VAR_13, VAR_8);
  if (VAR_12)
   goto out;
 }

 if (VAR_14 == VAR_3) {
  VAR_15 = *VAR_10;
 } else {
  VAR_12 = FUNC_9(VAR_6, &VAR_9->data, VAR_13, VAR_11, &VAR_15, VAR_14);
  if (VAR_12)
   goto out;

  FUNC_7(VAR_6, VAR_11, *VAR_10, &VAR_9->data, &VAR_15, &VAR_14);
 }

 if (FUNC_8(VAR_7)) {
  VAR_12 = FUNC_11(VAR_7, VAR_9, VAR_15, &VAR_16, VAR_8);
  if (VAR_12)
   goto out;

  VAR_15 = VAR_16;
 } else {
  VAR_9->compr_size = 0;
 }

 FUNC_6(VAR_6, VAR_15 <= VAR_2);
 VAR_9->compr_type = FUNC_0(VAR_14);
 VAR_9->size = FUNC_1(*VAR_10);
 *VAR_10 = VAR_4 + VAR_15;
 VAR_12 = 0;
out:
 FUNC_2(VAR_11);
 return VAR_12;
}
