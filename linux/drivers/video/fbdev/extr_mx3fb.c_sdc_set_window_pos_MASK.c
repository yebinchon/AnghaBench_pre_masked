
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mx3fb_data {scalar_t__ v_start_width; scalar_t__ h_start_width; } ;
typedef int int16_t ;
typedef enum ipu_channel { ____Placeholder_ipu_channel } ipu_channel ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mx3fb_data*,int,int ) ;

__attribute__((used)) static int FUNC_1(struct mx3fb_data *VAR_3, enum ipu_channel VAR_4,
         int16_t VAR_5, int16_t VAR_6)
{
 if (VAR_4 != VAR_1)
  return -VAR_0;

 VAR_5 += VAR_3->h_start_width;
 VAR_6 += VAR_3->v_start_width;

 FUNC_0(VAR_3, (VAR_5 << 16) | VAR_6, VAR_2);
 return 0;
}
