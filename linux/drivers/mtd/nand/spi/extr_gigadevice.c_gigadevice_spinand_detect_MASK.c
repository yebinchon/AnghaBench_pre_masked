
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_2__ {int* data; } ;
struct spinand_device {TYPE_1__ id; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct spinand_device*,int ,int ,int) ;

__attribute__((used)) static int FUNC_2(struct spinand_device *VAR_2)
{
 u8 *VAR_3 = VAR_2->id.data;
 u16 VAR_4;
 int VAR_5;






 if (VAR_3[0] == VAR_0)
  VAR_4 = (VAR_3[1] << 8) + VAR_3[2];
 else if (VAR_3[0] == 0 && VAR_3[1] == VAR_0)
  VAR_4 = VAR_3[2];
 else
  return 0;

 VAR_5 = FUNC_1(VAR_2, VAR_1,
         FUNC_0(VAR_1),
         VAR_4);
 if (VAR_5)
  return VAR_5;

 return 1;
}
