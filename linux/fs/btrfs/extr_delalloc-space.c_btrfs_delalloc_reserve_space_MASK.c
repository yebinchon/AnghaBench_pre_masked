
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct inode {int dummy; } ;
struct extent_changeset {int dummy; } ;


 int FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*,struct extent_changeset**,int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct inode*,struct extent_changeset*,int ,int ) ;

int FUNC_4(struct inode *VAR_0,
   struct extent_changeset **VAR_1, u64 VAR_2, u64 VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3);
 if (VAR_4 < 0)
  return VAR_4;
 VAR_4 = FUNC_2(FUNC_0(VAR_0), VAR_3);
 if (VAR_4 < 0)
  FUNC_3(VAR_0, *VAR_1, VAR_2, VAR_3);
 return VAR_4;
}
