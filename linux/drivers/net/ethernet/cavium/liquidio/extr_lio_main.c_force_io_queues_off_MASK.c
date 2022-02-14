
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct octeon_device {scalar_t__ chip_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct octeon_device*,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct octeon_device *VAR_4)
{
 if ((VAR_4->chip_id == VAR_2) ||
     (VAR_4->chip_id == VAR_3)) {

  FUNC_0(VAR_4, VAR_0, 0);


  FUNC_0(VAR_4, VAR_1, 0);
 }
}
