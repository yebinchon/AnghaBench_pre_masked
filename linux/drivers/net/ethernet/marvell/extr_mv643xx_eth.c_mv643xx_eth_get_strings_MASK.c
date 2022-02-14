
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct net_device {int dummy; } ;
struct TYPE_3__ {int stat_string; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *,int ,int) ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_3,
        uint32_t VAR_4, uint8_t *VAR_5)
{
 int VAR_6;

 if (VAR_4 == VAR_1) {
  for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_2); VAR_6++) {
   FUNC_1(VAR_5 + VAR_6 * VAR_0,
    VAR_2[VAR_6].stat_string,
    VAR_0);
  }
 }
}
