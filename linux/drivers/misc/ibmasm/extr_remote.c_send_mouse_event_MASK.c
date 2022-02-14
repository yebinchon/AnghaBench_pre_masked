
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int y; int x; } ;
struct TYPE_4__ {TYPE_1__ mouse; } ;
struct remote_input {unsigned char mouse_buttons; TYPE_2__ data; } ;
struct input_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned char VAR_5 ;
 unsigned char VAR_6 ;
 unsigned char VAR_7 ;
 int FUNC_0 (struct input_dev*,int ,int ) ;
 int FUNC_1 (struct input_dev*,int ,unsigned char) ;
 int FUNC_2 (struct input_dev*) ;

__attribute__((used)) static void FUNC_3(struct input_dev *VAR_8, struct remote_input *VAR_9)
{
 unsigned char VAR_10 = VAR_9->mouse_buttons;

 FUNC_0(VAR_8, VAR_0, VAR_9->data.mouse.x);
 FUNC_0(VAR_8, VAR_1, VAR_9->data.mouse.y);
 FUNC_1(VAR_8, VAR_2, VAR_10 & VAR_5);
 FUNC_1(VAR_8, VAR_3, VAR_10 & VAR_6);
 FUNC_1(VAR_8, VAR_4, VAR_10 & VAR_7);
 FUNC_2(VAR_8);
}
