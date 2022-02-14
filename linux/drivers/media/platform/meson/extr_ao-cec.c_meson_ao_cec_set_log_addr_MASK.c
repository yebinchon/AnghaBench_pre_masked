
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct meson_ao_cec_device {int dummy; } ;
struct cec_adapter {struct meson_ao_cec_device* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct meson_ao_cec_device*) ;
 int FUNC_1 (struct meson_ao_cec_device*,int ,int,int*) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct cec_adapter *VAR_5, u8 VAR_6)
{
 struct meson_ao_cec_device *VAR_7 = VAR_5->priv;
 int VAR_8 = 0;

 FUNC_1(VAR_7, VAR_0,
      VAR_2, &VAR_8);
 if (VAR_8)
  return VAR_8;

 VAR_8 = FUNC_0(VAR_7);
 if (VAR_8)
  return VAR_8;

 if (VAR_6 == VAR_1)
  return 0;

 FUNC_1(VAR_7, VAR_0,
      VAR_6 & VAR_3, &VAR_8);
 if (VAR_8)
  return VAR_8;

 FUNC_2(100);

 FUNC_1(VAR_7, VAR_0,
      (VAR_6 & VAR_3) |
      VAR_4, &VAR_8);

 return VAR_8;
}
