
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;
struct si_pub {int dummy; } ;
struct bcma_device {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct bcma_device*,int ) ;
 int VAR_3 ;

__attribute__((used)) static uint FUNC_2(struct si_pub *VAR_4, bool VAR_5,
       struct bcma_device *VAR_6)
{
 uint VAR_7;


 VAR_7 = FUNC_1(VAR_6, FUNC_0(VAR_3));
 VAR_7 = 4 * ((VAR_7 >> VAR_0) + 1);
 return VAR_5 ? VAR_1 : (VAR_2 / VAR_7);
}
