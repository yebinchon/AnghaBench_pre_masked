
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct video_device {int dummy; } ;
struct ipu_csc_scaler_priv {int m2m_dev; } ;


 int FUNC_0 (struct ipu_csc_scaler_priv*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct video_device*) ;
 struct ipu_csc_scaler_priv* FUNC_3 (struct video_device*) ;

__attribute__((used)) static void FUNC_4(struct video_device *VAR_0)
{
 struct ipu_csc_scaler_priv *VAR_1 = FUNC_3(VAR_0);

 FUNC_1(VAR_1->m2m_dev);
 FUNC_2(VAR_0);
 FUNC_0(VAR_1);
}
