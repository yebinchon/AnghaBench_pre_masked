
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_3__ {int udev; } ;
typedef TYPE_1__ rtl8150_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (void*) ;
 void* FUNC_1 (int,int ) ;
 int FUNC_2 (void*,void*,int) ;
 int FUNC_3 (int ,int ,int ,int ,int,int ,void*,int,int) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static int FUNC_5(rtl8150_t * VAR_4, u16 VAR_5, u16 VAR_6, void *VAR_7)
{
 void *VAR_8;
 int VAR_9;

 VAR_8 = FUNC_1(VAR_6, VAR_1);
 if (!VAR_8)
  return -VAR_0;

 VAR_9 = FUNC_3(VAR_4->udev, FUNC_4(VAR_4->udev, 0),
         VAR_3, VAR_2,
         VAR_5, 0, VAR_8, VAR_6, 500);
 if (VAR_9 > 0 && VAR_9 <= VAR_6)
  FUNC_2(VAR_7, VAR_8, VAR_9);
 FUNC_0(VAR_8);
 return VAR_9;
}
