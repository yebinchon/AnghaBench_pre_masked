
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_2__ {scalar_t__* data; } ;
struct spinand_device {TYPE_1__ id; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct spinand_device*,int ,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct spinand_device *VAR_2)
{
 u8 *VAR_3 = VAR_2->id.data;
 int VAR_4;



 if (VAR_3[1] != VAR_0)
  return 0;

 VAR_4 = FUNC_1(VAR_2, VAR_1,
         FUNC_0(VAR_1),
         VAR_3[2]);
 if (VAR_4)
  return VAR_4;

 return 1;
}
