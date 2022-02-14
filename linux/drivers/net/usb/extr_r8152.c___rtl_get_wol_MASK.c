
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct r8152 {int dummy; } ;


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
 int FUNC_0 (struct r8152*,int ,int ) ;

__attribute__((used)) static u32 FUNC_1(struct r8152 *VAR_14)
{
 u32 VAR_15;
 u32 VAR_16 = 0;

 VAR_15 = FUNC_0(VAR_14, VAR_3, VAR_6);
 if (VAR_15 & VAR_1)
  VAR_16 |= VAR_12;

 VAR_15 = FUNC_0(VAR_14, VAR_3, VAR_7);
 if (VAR_15 & VAR_8)
  VAR_16 |= VAR_13;
 if (VAR_15 & VAR_0)
  VAR_16 |= VAR_9;
 if (VAR_15 & VAR_4)
  VAR_16 |= VAR_11;

 VAR_15 = FUNC_0(VAR_14, VAR_3, VAR_5);
 if (VAR_15 & VAR_2)
  VAR_16 |= VAR_10;

 return VAR_16;
}
