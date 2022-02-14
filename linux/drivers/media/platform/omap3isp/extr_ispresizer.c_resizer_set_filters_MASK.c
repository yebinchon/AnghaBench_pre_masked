
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct isp_res_device {int dummy; } ;
struct isp_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int const VAR_2 ;
 int VAR_3 ;
 int const VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct isp_device*,int,int ,int) ;
 struct isp_device* FUNC_1 (struct isp_res_device*) ;

__attribute__((used)) static void FUNC_2(struct isp_res_device *VAR_6, const u16 *VAR_7,
    const u16 *VAR_8)
{
 struct isp_device *VAR_9 = FUNC_1(VAR_6);
 u32 VAR_10, VAR_11, VAR_12, VAR_13;
 int VAR_14;

 VAR_10 = VAR_1;
 VAR_11 = VAR_3;

 for (VAR_14 = 0; VAR_14 < VAR_0; VAR_14 += 2) {
  VAR_12 = VAR_7[VAR_14] |
   (VAR_7[VAR_14 + 1] << VAR_2);
  VAR_13 = VAR_8[VAR_14] |
   (VAR_8[VAR_14 + 1] << VAR_4);
  FUNC_0(VAR_9, VAR_12, VAR_5, VAR_10);
  FUNC_0(VAR_9, VAR_13, VAR_5, VAR_11);
  VAR_10 += 4;
  VAR_11 += 4;
 }
}
