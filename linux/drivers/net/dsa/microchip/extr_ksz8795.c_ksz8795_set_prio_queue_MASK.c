
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ksz_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct ksz_device*,int ,int ,int) ;
 int FUNC_1 (struct ksz_device*,int,int ,int *) ;
 int FUNC_2 (struct ksz_device*,int,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct ksz_device *VAR_9, int VAR_10, int VAR_11)
{
 u8 VAR_12, VAR_13;


 switch (VAR_11) {
 case 4:
 case 3:
  VAR_11 = VAR_2;
  break;
 case 2:
  VAR_11 = VAR_1;
  break;
 default:
  VAR_11 = VAR_0;
 }
 FUNC_1(VAR_9, VAR_10, VAR_6, &VAR_13);
 FUNC_1(VAR_9, VAR_10, VAR_5, &VAR_12);
 VAR_13 &= ~VAR_4;
 if (VAR_11 & VAR_1)
  VAR_13 |= VAR_4;
 VAR_12 &= ~VAR_3;
 if (VAR_11 & VAR_2)
  VAR_12 |= VAR_3;
 FUNC_2(VAR_9, VAR_10, VAR_6, VAR_13);
 FUNC_2(VAR_9, VAR_10, VAR_5, VAR_12);


 if (VAR_11 != VAR_0)
  FUNC_0(VAR_9, VAR_7, VAR_8,
   1);
}
