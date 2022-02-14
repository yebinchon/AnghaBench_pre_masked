
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct brcms_hardware {struct bcma_device* d11core; } ;
struct bcma_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (struct bcma_device*,int ,int) ;
 int FUNC_2 (struct brcms_hardware*,int ,int ) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_3(struct brcms_hardware *VAR_4,
     bool VAR_5)
{
 struct bcma_device *VAR_6 = VAR_4->d11core;

 if (VAR_5) {

  FUNC_1(VAR_6, FUNC_0(VAR_3), 0x0207);
  FUNC_2(VAR_4, VAR_2, VAR_0);
 } else {

  FUNC_1(VAR_6, FUNC_0(VAR_3), 0x0212);
  FUNC_2(VAR_4, VAR_2, VAR_1);
 }
}
