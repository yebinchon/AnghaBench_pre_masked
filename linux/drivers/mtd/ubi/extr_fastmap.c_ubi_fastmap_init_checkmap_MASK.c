
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubi_volume {int checkmap; struct ubi_device* ubi; } ;
struct ubi_device {int fast_attach; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int,int ) ;

int FUNC_2(struct ubi_volume *VAR_2, int VAR_3)
{
 struct ubi_device *VAR_4 = VAR_2->ubi;

 if (!VAR_4->fast_attach)
  return 0;

 VAR_2->checkmap = FUNC_1(FUNC_0(VAR_3), sizeof(unsigned long),
    VAR_1);
 if (!VAR_2->checkmap)
  return -VAR_0;

 return 0;
}
