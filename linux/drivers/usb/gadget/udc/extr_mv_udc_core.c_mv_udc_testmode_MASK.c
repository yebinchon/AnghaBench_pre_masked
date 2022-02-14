
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct mv_udc {TYPE_1__* dev; scalar_t__ test_mode; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,char*,scalar_t__) ;
 int FUNC_1 (struct mv_udc*) ;
 scalar_t__ FUNC_2 (struct mv_udc*,int ,int ,int) ;

__attribute__((used)) static void FUNC_3(struct mv_udc *VAR_2, u16 VAR_3)
{
 if (VAR_3 <= VAR_1) {
  VAR_2->test_mode = VAR_3;
  if (FUNC_2(VAR_2, VAR_0, 0, 1))
   FUNC_1(VAR_2);
 } else
  FUNC_0(&VAR_2->dev->dev,
   "This test mode(%d) is not supported\n", VAR_3);
}
