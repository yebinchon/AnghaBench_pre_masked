
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct isp_device {int dummy; } ;
struct isp_ccp2_device {scalar_t__ vdds_csib; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct isp_device*,int ,int ,int,int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 struct isp_device* FUNC_4 (struct isp_ccp2_device*) ;

__attribute__((used)) static int FUNC_5(struct isp_ccp2_device *VAR_6, u8 VAR_7)
{
 struct isp_device *VAR_8 = FUNC_4(VAR_6);
 int VAR_9;
 int VAR_10;

 if (VAR_7 && VAR_6->vdds_csib) {
  VAR_9 = FUNC_3(VAR_6->vdds_csib);
  if (VAR_9 < 0)
   return VAR_9;
 }


 for (VAR_10 = 0; VAR_10 < VAR_0; VAR_10++)
  FUNC_1(VAR_8, VAR_5, FUNC_0(VAR_10),
    VAR_4,
    VAR_7 ? VAR_4 : 0);


 FUNC_1(VAR_8, VAR_5, VAR_1,
   VAR_3 | VAR_2,
   VAR_7 ? (VAR_3 | VAR_2) : 0);

 if (!VAR_7 && VAR_6->vdds_csib)
  FUNC_2(VAR_6->vdds_csib);

 return 0;
}
