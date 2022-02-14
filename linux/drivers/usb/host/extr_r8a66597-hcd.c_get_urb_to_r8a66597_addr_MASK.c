
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct urb {int pipe; } ;
struct r8a66597_device {int address; } ;
struct r8a66597 {int dummy; } ;


 struct r8a66597_device* FUNC_0 (struct r8a66597*,struct urb*) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static u16 FUNC_2(struct r8a66597 *VAR_0, struct urb *VAR_1)
{
 struct r8a66597_device *VAR_2 = FUNC_0(VAR_0, VAR_1);

 return (FUNC_1(VAR_1->pipe) == 0) ? 0 : VAR_2->address;
}
