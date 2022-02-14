
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct zx_irdec {int rcd; scalar_t__ base; } ;
typedef int irqreturn_t ;
typedef enum rc_proto { ____Placeholder_rc_proto } rc_proto ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,int,int,int,int*) ;
 int FUNC_1 (int ,int,int,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_5, void *VAR_6)
{
 struct zx_irdec *VAR_7 = VAR_6;
 u8 VAR_8, VAR_9;
 u8 VAR_10, VAR_11;
 u32 VAR_12, VAR_13;
 enum rc_proto VAR_14;


 FUNC_4(1, VAR_7->base + VAR_3);


 if (FUNC_3(VAR_7->base + VAR_1) & VAR_4) {
  FUNC_2(VAR_7->rcd);
  goto done;
 }

 VAR_12 = FUNC_3(VAR_7->base + VAR_2);
 VAR_11 = (VAR_12 >> 24) & 0xff;
 VAR_10 = (VAR_12 >> 16) & 0xff;
 VAR_9 = (VAR_12 >> 8) & 0xff;
 VAR_8 = VAR_12 & 0xff;

 VAR_13 = FUNC_0(VAR_8, VAR_9,
         VAR_10, VAR_11,
         &VAR_14);
 FUNC_1(VAR_7->rcd, VAR_14, VAR_13, 0);

done:
 return VAR_0;
}
