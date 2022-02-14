
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct ov5645 {int aec_pk_manual; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct ov5645*,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct ov5645 *VAR_3, u32 VAR_4)
{
 u8 VAR_5 = VAR_3->aec_pk_manual;
 int VAR_6;

 if (VAR_4 == VAR_2)
  VAR_5 &= ~VAR_0;
 else
  VAR_5 |= VAR_0;

 VAR_6 = FUNC_0(VAR_3, VAR_1, VAR_5);
 if (!VAR_6)
  VAR_3->aec_pk_manual = VAR_5;

 return VAR_6;
}
