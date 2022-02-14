
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_device {int dummy; } ;
struct raremono_device {struct raremono_device* buffer; } ;


 int FUNC_0 (struct raremono_device*) ;
 struct raremono_device* FUNC_1 (struct v4l2_device*) ;

__attribute__((used)) static void FUNC_2(struct v4l2_device *VAR_0)
{
 struct raremono_device *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(VAR_1->buffer);
 FUNC_0(VAR_1);
}
