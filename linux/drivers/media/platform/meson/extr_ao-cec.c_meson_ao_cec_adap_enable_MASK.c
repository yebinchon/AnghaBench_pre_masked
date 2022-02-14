
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct meson_ao_cec_device {scalar_t__ base; } ;
struct cec_adapter {struct meson_ao_cec_device* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct meson_ao_cec_device*,int ,int) ;
 int FUNC_2 (struct meson_ao_cec_device*) ;
 int FUNC_3 (struct meson_ao_cec_device*,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct cec_adapter *VAR_7, bool VAR_8)
{
 struct meson_ao_cec_device *VAR_9 = VAR_7->priv;
 int VAR_10;

 FUNC_3(VAR_9, 0);

 FUNC_5(VAR_3, VAR_3,
       VAR_9->base + VAR_2);

 if (!VAR_8)
  return 0;


 FUNC_5(VAR_0,
       FUNC_0(VAR_0,
           VAR_1),
       VAR_9->base + VAR_2);

 FUNC_4(100);


 FUNC_5(VAR_3, 0,
       VAR_9->base + VAR_2);


 VAR_10 = FUNC_2(VAR_9);
 if (VAR_10)
  return VAR_10;


 VAR_10 = FUNC_1(VAR_9,
     VAR_6,
     0x118);
 if (VAR_10)
  return VAR_10;
 VAR_10 = FUNC_1(VAR_9,
     VAR_4,
     0x000);
 if (VAR_10)
  return VAR_10;
 VAR_10 = FUNC_1(VAR_9,
     VAR_5,
     0x2aa);
 if (VAR_10)
  return VAR_10;

 FUNC_3(VAR_9, 1);

 return 0;
}
