
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct erase_info {int addr; int len; } ;
typedef int loff_t ;
struct TYPE_3__ {int erasesize; } ;


 int FUNC_0 (struct erase_info*,int ,int) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (TYPE_1__*,struct erase_info*) ;
 int FUNC_2 (char*,int,int,int) ;

__attribute__((used)) static int FUNC_3(int VAR_1, int VAR_2)
{
 int VAR_3;
 struct erase_info VAR_4;
 loff_t VAR_5 = (loff_t)VAR_1 * VAR_0->erasesize;

 FUNC_0(&VAR_4, 0, sizeof(struct erase_info));
 VAR_4.addr = VAR_5;
 VAR_4.len = VAR_0->erasesize * VAR_2;

 VAR_3 = FUNC_1(VAR_0, &VAR_4);
 if (VAR_3) {
  FUNC_2("error %d while erasing EB %d, blocks %d\n",
         VAR_3, VAR_1, VAR_2);
  return VAR_3;
 }

 return 0;
}
