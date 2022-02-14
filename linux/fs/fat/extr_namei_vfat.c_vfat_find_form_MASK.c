
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct fat_slot_info {int bh; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct inode*,unsigned char*,struct fat_slot_info*) ;

__attribute__((used)) static int FUNC_2(struct inode *VAR_1, unsigned char *VAR_2)
{
 struct fat_slot_info VAR_3;
 int VAR_4 = FUNC_1(VAR_1, VAR_2, &VAR_3);
 if (VAR_4)
  return -VAR_0;
 FUNC_0(VAR_3.bh);
 return 0;
}
