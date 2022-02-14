
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint ;
typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct brcms_c_info {int band; } ;


 scalar_t__ FUNC_0 (struct brcms_c_info*,int ,int ) ;
 scalar_t__ FUNC_1 (struct brcms_c_info*,int ,int ,scalar_t__) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static u16
FUNC_3(struct brcms_c_info *VAR_0, u32 VAR_1,
        u8 VAR_2, uint VAR_3)
{
 u16 VAR_4, VAR_5;

 VAR_5 = FUNC_2(VAR_0->band);

 VAR_4 = VAR_5;
 VAR_4 += (u16) FUNC_0(VAR_0, VAR_1, VAR_2);

 if (VAR_3) {

  VAR_4 *= 2;

  VAR_4 += VAR_5;
  VAR_4 +=
      (u16) FUNC_1(VAR_0, VAR_1, VAR_2,
       VAR_3);
 }
 return VAR_4;
}
