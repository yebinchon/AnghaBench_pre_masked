
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct hpfs_dirent {unsigned int namelen; int down; int name; int not_8x3; int length; int last; } ;
struct dnode {int first_free; int self; } ;
typedef scalar_t__ secno ;
typedef int __le32 ;


 int FUNC_0 (unsigned int) ;
 int FUNC_1 (scalar_t__) ;
 struct hpfs_dirent* FUNC_2 (struct hpfs_dirent*) ;
 unsigned int FUNC_3 (unsigned int,scalar_t__) ;
 struct hpfs_dirent* FUNC_4 (struct dnode*) ;
 struct hpfs_dirent* FUNC_5 (struct dnode*) ;
 int FUNC_6 (struct super_block*,unsigned char const*,unsigned int,int ,unsigned int,int ) ;
 int FUNC_7 (struct super_block*,char*,unsigned char const,unsigned int,int ) ;
 int FUNC_8 (unsigned char const*,unsigned int) ;
 int FUNC_9 (int *,unsigned int) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,unsigned char const*,unsigned int) ;
 int FUNC_12 (char*,struct hpfs_dirent*,int) ;
 int FUNC_13 (struct hpfs_dirent*,int ,unsigned int) ;

struct hpfs_dirent *FUNC_14(struct super_block *VAR_0, struct dnode *VAR_1,
    const unsigned char *VAR_2,
    unsigned VAR_3, secno VAR_4)
{
 struct hpfs_dirent *VAR_5;
 struct hpfs_dirent *VAR_6 = FUNC_4(VAR_1);
 unsigned VAR_7 = FUNC_3(VAR_3, VAR_4);
 for (VAR_5 = FUNC_5(VAR_1); VAR_5 < VAR_6; VAR_5 = FUNC_2(VAR_5)) {
  int VAR_8 = FUNC_6(VAR_0, VAR_2, VAR_3, VAR_5->name, VAR_5->namelen, VAR_5->last);
  if (!VAR_8) {
   FUNC_7(VAR_0, "name (%c,%d) already exists in dnode %08x", *VAR_2, VAR_3, FUNC_10(VAR_1->self));
   return ((void*)0);
  }
  if (VAR_8 < 0) break;
 }
 FUNC_12((char *)VAR_5 + VAR_7, VAR_5, (char *)VAR_6 - (char *)VAR_5);
 FUNC_13(VAR_5, 0, VAR_7);
 if (VAR_4) {
  *(__le32 *)((char *)VAR_5 + VAR_7 - 4) = FUNC_1(VAR_4);
  VAR_5->down = 1;
 }
 VAR_5->length = FUNC_0(VAR_7);
 VAR_5->not_8x3 = FUNC_8(VAR_2, VAR_3);
 VAR_5->namelen = VAR_3;
 FUNC_11(VAR_5->name, VAR_2, VAR_3);
 FUNC_9(&VAR_1->first_free, VAR_7);
 return VAR_5;
}
