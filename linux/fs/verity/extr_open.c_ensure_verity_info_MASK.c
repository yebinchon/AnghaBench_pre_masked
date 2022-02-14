
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inode {TYPE_2__* i_sb; } ;
struct fsverity_info {int dummy; } ;
struct fsverity_descriptor {int dummy; } ;
struct TYPE_4__ {TYPE_1__* s_vop; } ;
struct TYPE_3__ {int (* get_verity_descriptor ) (struct inode*,struct fsverity_descriptor*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct fsverity_info*) ;
 int FUNC_1 (struct fsverity_info*) ;
 struct fsverity_info* FUNC_2 (struct inode*,struct fsverity_descriptor*,int) ;
 int FUNC_3 (struct inode*,char*,int) ;
 struct fsverity_info* FUNC_4 (struct inode*) ;
 int FUNC_5 (struct inode*,struct fsverity_info*) ;
 int FUNC_6 (struct fsverity_descriptor*) ;
 struct fsverity_descriptor* FUNC_7 (int,int ) ;
 int FUNC_8 (struct inode*,struct fsverity_descriptor*,int) ;
 int FUNC_9 (struct inode*,struct fsverity_descriptor*,int) ;

__attribute__((used)) static int FUNC_10(struct inode *VAR_4)
{
 struct fsverity_info *VAR_5 = FUNC_4(VAR_4);
 struct fsverity_descriptor *VAR_6;
 int VAR_7;

 if (VAR_5)
  return 0;

 VAR_7 = VAR_4->i_sb->s_vop->get_verity_descriptor(VAR_4, ((void*)0), 0);
 if (VAR_7 < 0) {
  FUNC_3(VAR_4,
        "Error %d getting verity descriptor size", VAR_7);
  return VAR_7;
 }
 if (VAR_7 > VAR_2) {
  FUNC_3(VAR_4, "Verity descriptor is too large (%d bytes)",
        VAR_7);
  return -VAR_0;
 }
 VAR_6 = FUNC_7(VAR_7, VAR_3);
 if (!VAR_6)
  return -VAR_1;
 VAR_7 = VAR_4->i_sb->s_vop->get_verity_descriptor(VAR_4, VAR_6, VAR_7);
 if (VAR_7 < 0) {
  FUNC_3(VAR_4, "Error %d reading verity descriptor", VAR_7);
  goto out_free_desc;
 }

 VAR_5 = FUNC_2(VAR_4, VAR_6, VAR_7);
 if (FUNC_0(VAR_5)) {
  VAR_7 = FUNC_1(VAR_5);
  goto out_free_desc;
 }

 FUNC_5(VAR_4, VAR_5);
 VAR_7 = 0;
out_free_desc:
 FUNC_6(VAR_6);
 return VAR_7;
}
