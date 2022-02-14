
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char u64 ;
typedef int u32 ;
struct ntb_dev {int dummy; } ;
struct idt_ntb_dev {unsigned char peer_cnt; } ;
typedef enum ntb_width { ____Placeholder_ntb_width } ntb_width ;
typedef enum ntb_speed { ____Placeholder_ntb_speed } ntb_speed ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct idt_ntb_dev*,int ) ;
 int FUNC_2 (struct idt_ntb_dev*) ;
 scalar_t__ FUNC_3 (struct idt_ntb_dev*,unsigned char) ;
 struct idt_ntb_dev* FUNC_4 (struct ntb_dev*) ;

__attribute__((used)) static u64 FUNC_5(struct ntb_dev *VAR_3,
         enum ntb_speed *VAR_4, enum ntb_width *VAR_5)
{
 struct idt_ntb_dev *VAR_6 = FUNC_4(VAR_3);
 unsigned char VAR_7;
 u64 VAR_8;
 u32 VAR_9;


 if (VAR_4 != ((void*)0) || VAR_5 != ((void*)0)) {
  VAR_9 = FUNC_1(VAR_6, VAR_0);
  if (VAR_4 != ((void*)0))
   *VAR_4 = FUNC_0(VAR_1, VAR_9);
  if (VAR_5 != ((void*)0))
   *VAR_5 = FUNC_0(VAR_2, VAR_9);
 }


 if (!FUNC_2(VAR_6))
  return 0;


 VAR_8 = 0;
 for (VAR_7 = 0; VAR_7 < VAR_6->peer_cnt; VAR_7++) {
  if (FUNC_3(VAR_6, VAR_7))
   VAR_8 |= ((u64)1 << VAR_7);
 }

 return VAR_8;
}
