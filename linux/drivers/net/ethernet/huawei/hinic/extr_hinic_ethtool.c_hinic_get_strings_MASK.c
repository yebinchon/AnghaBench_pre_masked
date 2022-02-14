
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef size_t u16 ;
struct net_device {int dummy; } ;
struct hinic_dev {size_t num_qps; } ;
struct TYPE_6__ {char* name; } ;


 size_t FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;

 TYPE_1__* VAR_1 ;
 TYPE_1__* VAR_2 ;
 TYPE_1__* VAR_3 ;
 TYPE_1__* VAR_4 ;
 int FUNC_1 (char*,char*,int ) ;
 struct hinic_dev* FUNC_2 (struct net_device*) ;
 int FUNC_3 (char*,char*,size_t) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_5,
         u32 VAR_6, u8 *VAR_7)
{
 struct hinic_dev *VAR_8 = FUNC_2(VAR_5);
 char *VAR_9 = (char *)VAR_7;
 u16 VAR_10, VAR_11;

 switch (VAR_6) {
 case 128:
  for (VAR_10 = 0; VAR_10 < FUNC_0(VAR_1); VAR_10++) {
   FUNC_1(VAR_9, VAR_1[VAR_10].name,
          VAR_0);
   VAR_9 += VAR_0;
  }

  for (VAR_10 = 0; VAR_10 < FUNC_0(VAR_2); VAR_10++) {
   FUNC_1(VAR_9, VAR_2[VAR_10].name,
          VAR_0);
   VAR_9 += VAR_0;
  }

  for (VAR_10 = 0; VAR_10 < VAR_8->num_qps; VAR_10++) {
   for (VAR_11 = 0; VAR_11 < FUNC_0(VAR_4); VAR_11++) {
    FUNC_3(VAR_9, VAR_4[VAR_11].name, VAR_10);
    VAR_9 += VAR_0;
   }
  }

  for (VAR_10 = 0; VAR_10 < VAR_8->num_qps; VAR_10++) {
   for (VAR_11 = 0; VAR_11 < FUNC_0(VAR_3); VAR_11++) {
    FUNC_3(VAR_9, VAR_3[VAR_11].name, VAR_10);
    VAR_9 += VAR_0;
   }
  }

  return;
 default:
  return;
 }
}
