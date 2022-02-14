
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int flags; } ;
struct lan743x_adapter {TYPE_1__ csr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_14 ;
 int FUNC_3 (int) ;
 int VAR_15 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;




 int VAR_16 ;
 int VAR_17 ;
 int FUNC_6 (struct lan743x_adapter*,int ,int ,int ,int,int,int) ;
 int FUNC_7 (struct lan743x_adapter*,int ,int ) ;

__attribute__((used)) static int FUNC_8(struct lan743x_adapter *VAR_18)
{
 u32 VAR_19 = 0;

 FUNC_7(VAR_18, VAR_8, VAR_9);
 FUNC_6(VAR_18, VAR_8, VAR_9,
     0, 1000, 20000, 100);
 switch (VAR_0) {
 case 130:
  VAR_19 = VAR_5;
  break;
 case 129:
  VAR_19 = VAR_6;
  break;
 case 128:
  VAR_19 = VAR_7;
  break;
 case 131:
  VAR_19 = VAR_4;
  break;
 default:
  return -VAR_16;
 }
 if (!(VAR_18->csr.flags & VAR_17))
  VAR_19 |= VAR_3;
 VAR_19 |= VAR_2;
 VAR_19 |= FUNC_0(6);
 FUNC_7(VAR_18, VAR_1, VAR_19);
 VAR_19 = FUNC_2(1);
 VAR_19 |= VAR_14;
 VAR_19 |= VAR_12;
 VAR_19 |= VAR_13;
 VAR_19 |= VAR_11;
 VAR_19 |= FUNC_3(0x0A);
 VAR_19 |= FUNC_1(0x0C);
 FUNC_7(VAR_18, VAR_10, VAR_19);
 VAR_19 = FUNC_5(0x08);
 VAR_19 |= FUNC_4(0x0A);
 FUNC_7(VAR_18, VAR_15, VAR_19);
 return 0;
}
