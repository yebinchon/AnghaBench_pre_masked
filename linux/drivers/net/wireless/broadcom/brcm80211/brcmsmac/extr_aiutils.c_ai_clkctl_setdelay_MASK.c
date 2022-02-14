
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint ;
struct si_pub {int dummy; } ;
struct bcma_device {int dummy; } ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (struct si_pub*,int,struct bcma_device*) ;
 scalar_t__ FUNC_2 (struct si_pub*,struct bcma_device*) ;
 int FUNC_3 (struct bcma_device*,int ,scalar_t__) ;

__attribute__((used)) static void
FUNC_4(struct si_pub *VAR_4, struct bcma_device *VAR_5)
{
 uint VAR_6, VAR_7, VAR_8;
 uint VAR_9, VAR_10;

 VAR_7 = VAR_1;







 VAR_8 = FUNC_2(VAR_4, VAR_5);
 if (VAR_8 != VAR_2)
  VAR_7 += VAR_3;


 VAR_6 =
     FUNC_1(VAR_4, 0, VAR_5);

 VAR_9 = ((VAR_6 * VAR_7) + 999999) / 1000000;
 VAR_10 = ((VAR_6 * VAR_0) + 999999) / 1000000;

 FUNC_3(VAR_5, FUNC_0(VAR_9), VAR_9);
 FUNC_3(VAR_5, FUNC_0(VAR_10), VAR_10);
}
