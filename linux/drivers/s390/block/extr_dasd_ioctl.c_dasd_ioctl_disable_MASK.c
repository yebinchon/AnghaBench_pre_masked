
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dasd_device {int dummy; } ;
struct block_device {int bd_mutex; int bd_inode; int bd_disk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 struct dasd_device* FUNC_1 (int ) ;
 int FUNC_2 (struct dasd_device*) ;
 int FUNC_3 (struct dasd_device*,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int
FUNC_7(struct block_device *VAR_4)
{
 struct dasd_device *VAR_5;

 if (!FUNC_0(VAR_0))
  return -VAR_2;

 VAR_5 = FUNC_1(VAR_4->bd_disk);
 if (!VAR_5)
  return -VAR_3;
 FUNC_3(VAR_5, VAR_1);




 FUNC_5(&VAR_4->bd_mutex);
 FUNC_4(VAR_4->bd_inode, 0);
 FUNC_6(&VAR_4->bd_mutex);
 FUNC_2(VAR_5);
 return 0;
}
