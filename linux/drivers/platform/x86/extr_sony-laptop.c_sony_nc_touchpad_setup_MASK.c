
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct touchpad_control {int dummy; } ;
struct platform_device {int dev; } ;
struct TYPE_7__ {char* name; int mode; } ;
struct TYPE_8__ {int store; int show; TYPE_2__ attr; } ;
struct TYPE_6__ {unsigned int handle; TYPE_5__ attr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,TYPE_5__*) ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 (int,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (TYPE_2__*) ;
 TYPE_1__* VAR_6 ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_7,
  unsigned int VAR_8)
{
 int VAR_9 = 0;

 VAR_6 = FUNC_2(sizeof(struct touchpad_control), VAR_1);
 if (!VAR_6)
  return -VAR_0;

 VAR_6->handle = VAR_8;

 FUNC_3(&VAR_6->attr.attr);
 VAR_6->attr.attr.name = "touchpad";
 VAR_6->attr.attr.mode = VAR_2 | VAR_3;
 VAR_6->attr.show = VAR_4;
 VAR_6->attr.store = VAR_5;

 VAR_9 = FUNC_0(&VAR_7->dev, &VAR_6->attr);
 if (VAR_9) {
  FUNC_1(VAR_6);
  VAR_6 = ((void*)0);
 }

 return VAR_9;
}
