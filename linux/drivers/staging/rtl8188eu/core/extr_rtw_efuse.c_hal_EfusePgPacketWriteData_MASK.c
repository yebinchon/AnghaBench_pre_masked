
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct pgpkt {int data; int offset; int word_en; } ;
struct adapter {int dummy; } ;


 scalar_t__ FUNC_0 (struct adapter*,int ,int,int ) ;
 int FUNC_1 (struct adapter*,scalar_t__,int ,int ) ;

__attribute__((used)) static bool FUNC_2(struct adapter *VAR_0, u8 VAR_1, u16 *VAR_2, struct pgpkt *VAR_3)
{
 u16 VAR_4 = *VAR_2;
 u8 VAR_5 = 0;
 u32 VAR_6 = 0;

 VAR_5 = 0x0f;
 VAR_5 = FUNC_1(VAR_0, VAR_4 + 1, VAR_3->word_en, VAR_3->data);
 if (VAR_5 == 0x0F) {

  return 1;
 }

 VAR_6 = FUNC_0(VAR_0, VAR_3->offset, VAR_5, VAR_3->data);
 if (!VAR_6)
  return 0;
 else
  return 1;
}
