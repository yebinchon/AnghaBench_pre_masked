
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct dln2_dev {int ep_out; int usb_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int ,int ,int ,void const*,int*,int ) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (int ,int ,void*,int,int*,int ) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(struct dln2_dev *VAR_3, u16 VAR_4, u16 VAR_5, u16 VAR_6,
     const void *VAR_7, int VAR_8)
{
 int VAR_9 = 0;
 int VAR_10 = VAR_8;
 void *VAR_11;
 int VAR_12;

 VAR_11 = FUNC_0(VAR_4, VAR_5, VAR_6, VAR_7, &VAR_10, VAR_2);
 if (!VAR_11)
  return -VAR_1;

 VAR_9 = FUNC_2(VAR_3->usb_dev,
      FUNC_3(VAR_3->usb_dev, VAR_3->ep_out),
      VAR_11, VAR_10, &VAR_12, VAR_0);

 FUNC_1(VAR_11);

 return VAR_9;
}
