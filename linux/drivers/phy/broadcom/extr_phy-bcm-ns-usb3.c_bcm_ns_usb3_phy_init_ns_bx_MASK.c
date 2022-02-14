
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bcm_ns_usb3 {scalar_t__ dmp; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct bcm_ns_usb3*,int ,int) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct bcm_ns_usb3 *VAR_11)
{
 int VAR_12;


 VAR_12 = FUNC_0(VAR_11, VAR_3,
      VAR_5);
 if (VAR_12 < 0)
  return VAR_12;


 FUNC_0(VAR_11, VAR_9, 0x1000);


 FUNC_0(VAR_11, VAR_7, 0x6400);


 FUNC_0(VAR_11, VAR_8, 0xc000);


 FUNC_0(VAR_11, VAR_8, 0x8000);


 FUNC_1(0, VAR_11->dmp + VAR_0);


 FUNC_0(VAR_11, VAR_9, 0x9000);


 FUNC_0(VAR_11, VAR_3,
       VAR_4);


 FUNC_0(VAR_11, VAR_1, 0xf30d);


 FUNC_0(VAR_11, VAR_2, 0x6302);


 FUNC_0(VAR_11, VAR_3,
       VAR_6);


 FUNC_0(VAR_11, VAR_10, 0x1003);

 return 0;
}
