
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct net_device {int dummy; } ;
struct mvpp2_port {int ntxqs; int nrxqs; } ;
struct TYPE_6__ {char* string; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* VAR_2 ;
 TYPE_1__* VAR_3 ;
 TYPE_1__* VAR_4 ;
 TYPE_1__* VAR_5 ;
 struct mvpp2_port* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int *,int ,char*,int) ;
 int FUNC_3 (int *,char*,int ) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_6, u32 VAR_7,
          u8 *VAR_8)
{
 struct mvpp2_port *VAR_9 = FUNC_1(VAR_6);
 int VAR_10, VAR_11;

 if (VAR_7 != VAR_1)
  return;

 for (VAR_10 = 0; VAR_10 < FUNC_0(VAR_2); VAR_10++) {
  FUNC_3(VAR_8, VAR_2[VAR_10].string,
   VAR_0);
  VAR_8 += VAR_0;
 }

 for (VAR_10 = 0; VAR_10 < FUNC_0(VAR_3); VAR_10++) {
  FUNC_3(VAR_8, VAR_3[VAR_10].string,
   VAR_0);
  VAR_8 += VAR_0;
 }

 for (VAR_11 = 0; VAR_11 < VAR_9->ntxqs; VAR_11++) {
  for (VAR_10 = 0; VAR_10 < FUNC_0(VAR_5); VAR_10++) {
   FUNC_2(VAR_8, VAR_0,
     VAR_5[VAR_10].string, VAR_11);
   VAR_8 += VAR_0;
  }
 }

 for (VAR_11 = 0; VAR_11 < VAR_9->nrxqs; VAR_11++) {
  for (VAR_10 = 0; VAR_10 < FUNC_0(VAR_4); VAR_10++) {
   FUNC_2(VAR_8, VAR_0,
     VAR_4[VAR_10].string,
     VAR_11);
   VAR_8 += VAR_0;
  }
 }
}
