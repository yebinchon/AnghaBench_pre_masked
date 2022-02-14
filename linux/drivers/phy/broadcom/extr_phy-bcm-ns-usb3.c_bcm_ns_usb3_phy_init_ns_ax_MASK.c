
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
 int FUNC_0 (struct bcm_ns_usb3*,int,int) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct bcm_ns_usb3 *VAR_6)
{
 int VAR_7;


 VAR_7 = FUNC_0(VAR_6, VAR_1,
      VAR_2);
 if (VAR_7 < 0)
  return VAR_7;

 FUNC_0(VAR_6, VAR_4, 0x6400);

 FUNC_0(VAR_6, VAR_1, 0x80e0);

 FUNC_0(VAR_6, 0x02, 0x009c);


 FUNC_0(VAR_6, VAR_1,
       VAR_3);

 FUNC_0(VAR_6, 0x02, 0x21d3);

 FUNC_0(VAR_6, VAR_5, 0x1003);


 FUNC_1(0, VAR_6->dmp + VAR_0);

 return 0;
}
