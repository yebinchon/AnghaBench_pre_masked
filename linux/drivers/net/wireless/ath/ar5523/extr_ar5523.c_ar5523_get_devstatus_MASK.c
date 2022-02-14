
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ar5523 {int * serial; int hw; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct ar5523*,char*) ;
 int FUNC_2 (struct ar5523*,int ,int *,int) ;

__attribute__((used)) static int FUNC_3(struct ar5523 *VAR_3)
{
 u8 VAR_4[VAR_0];
 int VAR_5;


 VAR_5 = FUNC_2(VAR_3, VAR_1, VAR_4, VAR_0);
 if (VAR_5) {
  FUNC_1(VAR_3, "could not read MAC address\n");
  return VAR_5;
 }

 FUNC_0(VAR_3->hw, VAR_4);

 VAR_5 = FUNC_2(VAR_3, VAR_2,
     &VAR_3->serial[0], sizeof(VAR_3->serial));
 if (VAR_5) {
  FUNC_1(VAR_3, "could not read device serial number\n");
  return VAR_5;
 }
 return 0;
}
