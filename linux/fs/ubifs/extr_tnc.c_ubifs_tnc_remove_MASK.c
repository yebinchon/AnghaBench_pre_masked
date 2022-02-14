
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union ubifs_key {int dummy; } ubifs_key ;
struct ubifs_znode {int dummy; } ;
struct ubifs_info {int tnc_mutex; } ;


 int FUNC_0 (struct ubifs_info*,int ) ;
 int FUNC_1 (union ubifs_key const*,char*) ;
 int FUNC_2 (struct ubifs_info*,union ubifs_key const*,struct ubifs_znode**,int*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct ubifs_info*,struct ubifs_znode*,int) ;

int FUNC_6(struct ubifs_info *VAR_0, const union ubifs_key *VAR_1)
{
 int VAR_2, VAR_3, VAR_4 = 0;
 struct ubifs_znode *VAR_5;

 FUNC_3(&VAR_0->tnc_mutex);
 FUNC_1(VAR_1, "key ");
 VAR_2 = FUNC_2(VAR_0, VAR_1, &VAR_5, &VAR_3);
 if (VAR_2 < 0) {
  VAR_4 = VAR_2;
  goto out_unlock;
 }
 if (VAR_2 == 1)
  VAR_4 = FUNC_5(VAR_0, VAR_5, VAR_3);
 if (!VAR_4)
  VAR_4 = FUNC_0(VAR_0, 0);

out_unlock:
 FUNC_4(&VAR_0->tnc_mutex);
 return VAR_4;
}
