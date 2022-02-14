
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct lan78xx_statstage {int dummy; } ;
struct lan78xx_net {int net; int udev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct lan78xx_statstage*) ;
 struct lan78xx_statstage* FUNC_1 (int,int ) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 (int ,int ,int ,int,int ,int ,void*,int,int ) ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static int FUNC_7(struct lan78xx_net *VAR_7,
         struct lan78xx_statstage *VAR_8)
{
 int VAR_9 = 0;
 int VAR_10;
 struct lan78xx_statstage *VAR_11;
 u32 *VAR_12;
 u32 *VAR_13;

 VAR_11 = FUNC_1(sizeof(*VAR_11), VAR_1);
 if (!VAR_11)
  return -VAR_0;

 VAR_9 = FUNC_5(VAR_7->udev,
         FUNC_6(VAR_7->udev, 0),
         VAR_6,
         VAR_3 | VAR_5 | VAR_4,
         0,
         0,
         (void *)VAR_11,
         sizeof(*VAR_11),
         VAR_2);
 if (FUNC_3(VAR_9 >= 0)) {
  VAR_12 = (u32 *)VAR_11;
  VAR_13 = (u32 *)VAR_8;
  for (VAR_10 = 0; VAR_10 < sizeof(*VAR_11)/sizeof(u32); VAR_10++) {
   FUNC_2(&VAR_12[VAR_10]);
   VAR_13[VAR_10] = VAR_12[VAR_10];
  }
 } else {
  FUNC_4(VAR_7->net,
       "Failed to read stat ret = 0x%x", VAR_9);
 }

 FUNC_0(VAR_11);

 return VAR_9;
}
