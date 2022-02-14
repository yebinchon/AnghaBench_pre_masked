
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct isp_interface_lcx_config {int format; int crc; int data_start; int data_size; } ;
struct isp_device {scalar_t__ revision; } ;
struct isp_ccp2_device {int dummy; } ;


 int FUNC_0 (int,int ,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_19 ;


 int VAR_20 ;
 int FUNC_4 (struct isp_device*,int ,int ) ;
 int FUNC_5 (struct isp_device*,int ,int ,int) ;
 int FUNC_6 (struct isp_device*,int,int ,int ) ;
 struct isp_device* FUNC_7 (struct isp_ccp2_device*) ;

__attribute__((used)) static void FUNC_8(struct isp_ccp2_device *VAR_21,
       struct isp_interface_lcx_config *VAR_22)
{
 struct isp_device *VAR_23 = FUNC_7(VAR_21);
 u32 VAR_24, VAR_25;

 switch (VAR_22->format) {
 case 128:
  VAR_25 = VAR_14;
  break;
 case 129:
 default:
  VAR_25 = VAR_13;
  break;
 }

 VAR_24 = FUNC_4(VAR_23, VAR_20, FUNC_1(0))
       | (VAR_17);

 if (VAR_23->revision == VAR_19) {

  FUNC_0(VAR_24, VAR_10,
   VAR_8,
   VAR_22->crc);

  FUNC_0(VAR_24, VAR_16,
   VAR_12, VAR_25);
 } else {
  FUNC_0(VAR_24, VAR_9,
   VAR_8,
   VAR_22->crc);

  FUNC_0(VAR_24, VAR_15,
   VAR_11, VAR_25);
 }
 FUNC_6(VAR_23, VAR_24, VAR_20, FUNC_1(0));


 FUNC_6(VAR_23, VAR_22->data_start << VAR_18,
         VAR_20, FUNC_3(0));


 FUNC_6(VAR_23, VAR_22->data_size << VAR_18,
         VAR_20, FUNC_2(0));


 VAR_24 = VAR_3 |
       VAR_2 |
       VAR_5 |
       VAR_6 |
       VAR_4 |
       VAR_7;

 FUNC_6(VAR_23, VAR_24, VAR_20, VAR_1);
 FUNC_5(VAR_23, VAR_20, VAR_0, VAR_24);
}
