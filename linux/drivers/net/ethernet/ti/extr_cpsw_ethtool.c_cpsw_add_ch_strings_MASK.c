
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int stat_string; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (int *,int ,char*,char*,long,int ) ;

__attribute__((used)) static void FUNC_1(u8 **VAR_3, int VAR_4, int VAR_5)
{
 int VAR_6;
 int VAR_7;
 int VAR_8;

 VAR_6 = VAR_0 * VAR_4;
 for (VAR_8 = 0; VAR_8 < VAR_6; VAR_8++) {
  VAR_7 = VAR_8 % VAR_0;
  FUNC_0(*VAR_3, VAR_1,
    "%s DMA chan %ld: %s", VAR_5 ? "Rx" : "Tx",
    (long)(VAR_8 / VAR_0),
    VAR_2[VAR_7].stat_string);
  *VAR_3 += VAR_1;
 }
}
