
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct isp_interface_mem_config {int hsize_count; scalar_t__ vsize_count; scalar_t__ src_ofst; } ;
struct isp_device {int dummy; } ;
struct TYPE_4__ {scalar_t__ bpl_padding; scalar_t__ bpl_value; } ;
struct isp_ccp2_device {TYPE_2__ video_in; TYPE_1__* formats; } ;
struct TYPE_3__ {scalar_t__ code; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 int VAR_23 ;
 scalar_t__ VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 scalar_t__ VAR_27 ;
 scalar_t__ VAR_28 ;
 int VAR_29 ;
 int FUNC_0 (struct isp_ccp2_device*) ;
 int FUNC_1 (struct isp_ccp2_device*) ;
 int FUNC_2 (struct isp_ccp2_device*,int ) ;
 int FUNC_3 (struct isp_device*,int ,int ,scalar_t__) ;
 int FUNC_4 (struct isp_device*,scalar_t__,int ,int ) ;
 struct isp_device* FUNC_5 (struct isp_ccp2_device*) ;

__attribute__((used)) static void FUNC_6(struct isp_ccp2_device *VAR_30,
          struct isp_interface_mem_config *VAR_31)
{
 struct isp_device *VAR_32 = FUNC_5(VAR_30);
 u32 VAR_33 = VAR_30->formats[VAR_0].code;
 u32 VAR_34 = VAR_30->formats[VAR_1].code;
 unsigned int VAR_35 = 0;
 u32 VAR_36, VAR_37;

 if (VAR_33 != VAR_34 &&
     VAR_33 == VAR_28)
  VAR_35 = 1;

 FUNC_1(VAR_30);


 FUNC_4(VAR_32, VAR_18 |
         (VAR_31->hsize_count << VAR_17),
         VAR_29, VAR_16);


 FUNC_4(VAR_32, VAR_31->vsize_count << VAR_27,
         VAR_29, VAR_26);

 if (VAR_30->video_in.bpl_padding == 0)
  VAR_31->src_ofst = 0;
 else
  VAR_31->src_ofst = VAR_30->video_in.bpl_value;

 FUNC_4(VAR_32, VAR_31->src_ofst, VAR_29,
         VAR_25);


 VAR_36 = VAR_8 <<
       VAR_9;

 if (VAR_35) {

  VAR_36 |= VAR_14 <<
         VAR_15;


  VAR_36 |= VAR_12;


  VAR_36 |= VAR_10 <<
         VAR_11;
 } else {

  VAR_36 |= VAR_13 <<
         VAR_15;
 }


 VAR_36 |= VAR_6 <<
        VAR_7;

 FUNC_4(VAR_32, VAR_36, VAR_29, VAR_5);


 if (VAR_35)
  VAR_37 = (VAR_18 +
     VAR_31->hsize_count) >> 3;
 else
  VAR_37 = (VAR_18 +
     VAR_31->hsize_count) >> 2;

 FUNC_4(VAR_32, VAR_37 << VAR_24,
         VAR_29, VAR_23);


 FUNC_3(VAR_32, VAR_29, VAR_2,
      VAR_3 | VAR_4);
 FUNC_2(VAR_30, FUNC_0(VAR_30));


 FUNC_4(VAR_32, VAR_22 |
         VAR_21,
         VAR_29, VAR_20);


 FUNC_3(VAR_32, VAR_29, VAR_19,
      VAR_21 |
      VAR_22);
}
