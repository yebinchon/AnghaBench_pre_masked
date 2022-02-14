
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtd_info {int dummy; } ;
struct blkpg_partition {char* devname; int pno; int length; int start; } ;
struct blkpg_ioctl_arg {int op; int data; } ;
typedef int p ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct blkpg_partition*,int ,int) ;
 int FUNC_2 (struct mtd_info*,char*,int ,int ) ;
 int FUNC_3 (struct mtd_info*,int ) ;
 int FUNC_4 (struct mtd_info*) ;

__attribute__((used)) static int FUNC_5(struct mtd_info *VAR_5,
          struct blkpg_ioctl_arg *VAR_6)
{
 struct blkpg_partition VAR_7;

 if (!FUNC_0(VAR_1))
  return -VAR_4;

 if (FUNC_1(&VAR_7, VAR_6->data, sizeof(VAR_7)))
  return -VAR_2;

 switch (VAR_6->op) {
 case 129:


  if (FUNC_4(VAR_5))
   return -VAR_3;


  VAR_7.devname[VAR_0 - 1] = '\0';

  return FUNC_2(VAR_5, VAR_7.devname, VAR_7.start, VAR_7.length);

 case 128:

  if (VAR_7.pno < 0)
   return -VAR_3;

  return FUNC_3(VAR_5, VAR_7.pno);

 default:
  return -VAR_3;
 }
}
