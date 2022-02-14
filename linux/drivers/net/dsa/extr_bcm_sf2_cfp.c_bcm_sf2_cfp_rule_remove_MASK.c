
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct bcm_sf2_priv {int dummy; } ;


 int FUNC_0 (struct bcm_sf2_priv*,int,scalar_t__,scalar_t__*) ;

__attribute__((used)) static int FUNC_1(struct bcm_sf2_priv *VAR_0, int VAR_1,
       u32 VAR_2)
{
 u32 VAR_3 = 0;
 int VAR_4;

 VAR_4 = FUNC_0(VAR_0, VAR_1, VAR_2, &VAR_3);
 if (VAR_4)
  return VAR_4;


 if (VAR_3)
  VAR_4 = FUNC_0(VAR_0, VAR_1, VAR_3, ((void*)0));

 return VAR_4;
}
