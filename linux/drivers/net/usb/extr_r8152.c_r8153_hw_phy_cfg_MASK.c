
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct r8152 {int version; int flags; scalar_t__ eee_en; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;




 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (struct r8152*,int ,int ) ;
 int FUNC_1 (struct r8152*,int ) ;
 int FUNC_2 (struct r8152*,int ,int ) ;
 int FUNC_3 (struct r8152*,int ,int ,int ) ;
 int FUNC_4 (struct r8152*) ;
 int FUNC_5 (struct r8152*,int) ;
 int FUNC_6 (struct r8152*,int) ;
 int FUNC_7 (struct r8152*,int) ;
 int FUNC_8 (int ,int *) ;
 int FUNC_9 (struct r8152*,int ,int) ;

__attribute__((used)) static void FUNC_10(struct r8152 *VAR_15)
{
 u32 VAR_16;
 u16 VAR_17;


 FUNC_5(VAR_15, 0);


 FUNC_7(VAR_15, 0);

 if (VAR_15->version == 131) {
  VAR_17 = FUNC_1(VAR_15, VAR_6);
  VAR_17 &= ~VAR_0;
  FUNC_2(VAR_15, VAR_6, VAR_17);
 }

 VAR_17 = FUNC_1(VAR_15, VAR_7);
 VAR_17 |= VAR_1;
 FUNC_2(VAR_15, VAR_7, VAR_17);

 VAR_17 = FUNC_1(VAR_15, VAR_5);
 VAR_17 |= VAR_2;
 FUNC_2(VAR_15, VAR_5, VAR_17);
 VAR_17 = FUNC_1(VAR_15, VAR_7);
 VAR_17 |= VAR_3;
 FUNC_2(VAR_15, VAR_7, VAR_17);
 FUNC_9(VAR_15, VAR_13, 0x0b13);

 VAR_16 = FUNC_0(VAR_15, VAR_4, VAR_10);
 VAR_16 |= VAR_8;
 FUNC_3(VAR_15, VAR_4, VAR_10, VAR_16);


 FUNC_9(VAR_15, VAR_14, 0xf70f);


 FUNC_9(VAR_15, VAR_11, 0x00af);
 FUNC_9(VAR_15, VAR_12, 0x0208);

 if (VAR_15->eee_en)
  FUNC_7(VAR_15, 1);

 FUNC_5(VAR_15, 1);
 FUNC_4(VAR_15);

 switch (VAR_15->version) {
 case 131:
 case 130:
  break;
 case 129:
 case 128:
 default:
  FUNC_6(VAR_15, 1);
  break;
 }

 FUNC_8(VAR_9, &VAR_15->flags);
}
