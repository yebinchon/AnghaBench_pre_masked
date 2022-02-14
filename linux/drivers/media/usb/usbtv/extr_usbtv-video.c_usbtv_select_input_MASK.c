
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int member_1; int member_0; } ;
typedef TYPE_1__ u16 ;
struct usbtv {int input; } ;


 int FUNC_0 (TYPE_1__ const**) ;
 int VAR_0 ;



 int FUNC_1 (struct usbtv*,TYPE_1__ const**,int ) ;

__attribute__((used)) static int FUNC_2(struct usbtv *VAR_1, int VAR_2)
{
 int VAR_3;

 static const u16 VAR_4[][2] = {
  { 130 + 0x0105, 0x0060 },
  { 130 + 0x011f, 0x00f2 },
  { 130 + 0x0127, 0x0060 },
  { 130 + 0x00ae, 0x0010 },
  { 130 + 0x0239, 0x0060 },
 };

 static const u16 VAR_5[][2] = {
  { 130 + 0x0105, 0x0010 },
  { 130 + 0x011f, 0x00ff },
  { 130 + 0x0127, 0x0060 },
  { 130 + 0x00ae, 0x0030 },
  { 130 + 0x0239, 0x0060 },
 };

 switch (VAR_2) {
 case 129:
  VAR_3 = FUNC_1(VAR_1, VAR_4, FUNC_0(VAR_4));
  break;
 case 128:
  VAR_3 = FUNC_1(VAR_1, VAR_5, FUNC_0(VAR_5));
  break;
 default:
  VAR_3 = -VAR_0;
 }

 if (!VAR_3)
  VAR_1->input = VAR_2;

 return VAR_3;
}
