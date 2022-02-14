
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct nicvf {int sqs_count; struct nicvf** snicvf; } ;
struct net_device {int dummy; } ;
struct TYPE_4__ {int name; } ;
struct TYPE_3__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *,int ,int ) ;
 struct nicvf* FUNC_1 (struct net_device*) ;
 TYPE_2__* VAR_4 ;
 int FUNC_2 (struct nicvf*,int **,int) ;
 TYPE_1__* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int *,char*,int) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_8, u32 VAR_9, u8 *VAR_10)
{
 struct nicvf *VAR_11 = FUNC_1(VAR_8);
 int VAR_12;
 int VAR_13;

 if (VAR_9 != VAR_3)
  return;

 for (VAR_12 = 0; VAR_12 < VAR_7; VAR_12++) {
  FUNC_0(VAR_10, VAR_5[VAR_12].name, VAR_2);
  VAR_10 += VAR_2;
 }

 for (VAR_12 = 0; VAR_12 < VAR_6; VAR_12++) {
  FUNC_0(VAR_10, VAR_4[VAR_12].name, VAR_2);
  VAR_10 += VAR_2;
 }

 FUNC_2(VAR_11, &VAR_10, 0);

 for (VAR_13 = 0; VAR_13 < VAR_11->sqs_count; VAR_13++) {
  if (!VAR_11->snicvf[VAR_13])
   continue;
  FUNC_2(VAR_11->snicvf[VAR_13], &VAR_10, VAR_13 + 1);
 }

 for (VAR_12 = 0; VAR_12 < VAR_0; VAR_12++) {
  FUNC_3(VAR_10, "bgx_rxstat%d: ", VAR_12);
  VAR_10 += VAR_2;
 }

 for (VAR_12 = 0; VAR_12 < VAR_1; VAR_12++) {
  FUNC_3(VAR_10, "bgx_txstat%d: ", VAR_12);
  VAR_10 += VAR_2;
 }
}
