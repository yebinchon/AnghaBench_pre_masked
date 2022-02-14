
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_mbus_framefmt {int height; int width; } ;
struct iss_ipipe_device {struct v4l2_mbus_framefmt* formats; } ;
struct iss_device {int dummy; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
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
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_0 (struct iss_device*,int ,int ,int) ;
 int FUNC_1 (struct iss_device*,int ,int ,int) ;
 struct iss_device* FUNC_2 (struct iss_ipipe_device*) ;

__attribute__((used)) static void FUNC_3(struct iss_ipipe_device *VAR_21)
{
 struct iss_device *VAR_22 = FUNC_2(VAR_21);
 struct v4l2_mbus_framefmt *VAR_23;


 VAR_23 = &VAR_21->formats[VAR_0];


 FUNC_1(VAR_22, VAR_20, VAR_7,
        VAR_8);


 FUNC_1(VAR_22, VAR_20, VAR_18,
        VAR_19);

 FUNC_1(VAR_22, VAR_20, VAR_15, 0);
 FUNC_1(VAR_22, VAR_20, VAR_9, 0);
 FUNC_1(VAR_22, VAR_20, VAR_16,
        (VAR_23->height - 2) & VAR_17);
 FUNC_1(VAR_22, VAR_20, VAR_10,
        (VAR_23->width - 1) & VAR_11);


 FUNC_0(VAR_22, VAR_20, VAR_12,
      VAR_14 | VAR_13);


 FUNC_1(VAR_22, VAR_20, VAR_2,
        VAR_3 | VAR_4 |
        VAR_5 | VAR_6);


 VAR_23 = &VAR_21->formats[VAR_1];

}
